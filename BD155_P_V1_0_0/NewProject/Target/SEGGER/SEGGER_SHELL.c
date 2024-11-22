/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co KG                  *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*       (c) 2014-2015   SEGGER Microcontroller GmbH & Co KG          *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       Shell library                                                *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File        : SEGGER_SHELL.c
Purpose     : Standardized command line interface functions.
Revision    : $Rev: 9275 $
--------  END-OF-HEADER  ---------------------------------------------
*/

/*********************************************************************
*
*       #include Section
*
**********************************************************************
*/

#include "SEGGER_SHELL.h"
#include <string.h>
#include <stdlib.h>

/*********************************************************************
*
*       Lint configuration
*
**********************************************************************
*/

//lint -efunc(818,SEGGER_SHELL_InputText) suppress "could be declared as pointing to const"
//lint -efunc(818,SEGGER_SHELL_Printf)    suppress "could be declared as pointing to const"


/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/

static int _ExecuteBye      (SEGGER_SHELL_CONTEXT *pSelf);
static int _ExecuteCommands (SEGGER_SHELL_CONTEXT *pSelf);


/*********************************************************************
*
*       Public const data
*
**********************************************************************
*/

const SEGGER_SHELL_COMMAND_API SEGGER_SHELL_ByeAPI          = { "bye",      "Exit application.", 0, 0, _ExecuteBye         };
const SEGGER_SHELL_COMMAND_API SEGGER_SHELL_ExitAPI         = { "exit",     "Exit application.", 0, 0, _ExecuteBye         };
const SEGGER_SHELL_COMMAND_API SEGGER_SHELL_QuitAPI         = { "quit",     "Exit application.", 0, 0, _ExecuteBye         };
const SEGGER_SHELL_COMMAND_API SEGGER_SHELL_QuestionMarkAPI = { "?",        "Show help.", "[-xv]", "-x\tShow syntax\n-v\tShow syntax and options", SEGGER_SHELL_ExecuteHelp };
const SEGGER_SHELL_COMMAND_API SEGGER_SHELL_HelpAPI         = { "help",     "Show help.", "[-xv]", "-x\tShow syntax\n-v\tShow syntax and options", SEGGER_SHELL_ExecuteHelp };
const SEGGER_SHELL_COMMAND_API SEGGER_SHELL_CommandsAPI     = { "commands", "Show commands.",    0, 0, _ExecuteCommands    };

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

/*********************************************************************
*
*       _ToUpper()
*
*  Function description
*    Translate character to uppercase (ASCII inputs only).
*
*  Parameters
*    C - Character to convert.
*
*  Return value
*    Uppercased character.
*/
static int _ToUpper(char C) {
  if ('a' <= C && C <= 'z') {
    return (C - 'a') + 'A';
  } else {
    return C;
  }
}

/*********************************************************************
*
*       _CaselessCompare()
*
*  Function description
*    Compare strings ignoring character case (ASCII inputs only).
*
*  Parameters
*    sText0 - String #1.
*    sText1 - String #2.
*
*  Return value
*     < 0 - String #1 comes before String #2, ignoring case.
*    == 0 - String #1 is identical to String #2, ignoring case.
*     > 0 - String #1 comes after String #2, ignoring case.
*/
static int _CaselessCompare(const char *sText0, const char *sText1) {
  int ret;
  //
  while ((ret = _ToUpper(*sText0) - _ToUpper(*sText1)) == 0 && *sText1) {
    ++sText0;
    ++sText1;
  }
  //
  return ret;
}

/*********************************************************************
*
*       _IsSpace()
*
*  Function description
*    Predicate: Ignorable whitespace?
*
*  Parameters
*    C - Character to test
*
*  Return value
*    != 0 - Character is ignorable whitespace
*    == 0 - Character is significant.
*/
static int _IsSpace(char C) {
  return C == ' ';
}

/*********************************************************************
*
*       _SkipLeadingSpaces()
*
*  Function description
*    Skip leading spaces.
*
*  Parameters
*    sInput - Input string.
*
*  Return value
*    Pointer to first nonspace character found in input string.
*/
static char * _SkipLeadingSpaces(char *sInput) {
  while (_IsSpace(*sInput)) {
    ++sInput;
  }
  return sInput;
}

/*********************************************************************
*
*       _GetParsedArgument()
*
*  Function description
*    Retrieve an argument from the processed argument list.
*
*  Parameters
*    pText - List of zero-terminated strings.
*    N     - Index of string to return.
*
*  Return value
*    != 0 - Argument N exists and is retrieved.
*    == 0 - Argument N does not exist in the list.
*/
static char * _GetParsedArgument(char *pText, unsigned N) {
  while (N > 0) {
    if (pText[0] == 0) {
      return 0;
    }
    pText = pText + strlen(pText) + 1;
    --N;
  }
  return pText;
}

/*********************************************************************
*
*       _ExecuteCommands()
*
*  Function description
*    Execute the 'commands' command and display help information in
*    column format.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Standard status code.
*/
static int _ExecuteCommands(SEGGER_SHELL_CONTEXT *pSelf) {
  SEGGER_SHELL_PrintCommands(pSelf);
  return 0;
}

/*********************************************************************
*
*       _ExecuteBye()
*
*  Function description
*    Execute the 'bye' command and set the context's completed flag.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Standard status code: always zero indicating success.
*/
static int _ExecuteBye(SEGGER_SHELL_CONTEXT *pSelf) {
  SEGGER_SHELL_Exit(pSelf);
  return 0;
}

/*********************************************************************
*
*       _PrintOptions()
*
*  Function description
*    Print option list associated with a command.
*
*  Parameters
*    pSelf       - Shell context.
*    sOptionText - Complete option text (with tabs and newlines).
*    Indent      - Initial indentation, in columns.
*/
static void _PrintOptions(SEGGER_SHELL_CONTEXT *pSelf, const char *sOptionText, int Indent) {
  const char * pWork;
  const char * pStart;
  int          OptionWidth;
  //
  pWork = sOptionText;
  OptionWidth = 0;
  while (*pWork) {
    //
    // Find first field.
    //
    pStart = pWork;
    while (*pWork && *pWork != '\t') {
      ++pWork;
    }
    if (pWork - pStart > OptionWidth) {
      OptionWidth = pWork - pStart;
    }
    if (*pWork == '\t') {
      ++pWork;
    }
    pStart = pWork;
    while (*pWork && *pWork != '\n') {
      ++pWork;
    }
    if (*pWork == '\n') {
      ++pWork;
    }
  }
  //
  pWork = sOptionText;
  while (*pWork) {
    //
    // Find first field.
    //
    pStart = pWork;
    while (*pWork && *pWork != '\t') {
      ++pWork;
    }
    SEGGER_SHELL_Printf(pSelf, "%*s%.*s", Indent, "", OptionWidth, pStart);
    SEGGER_SHELL_Printf(pSelf, "    ");
    if (*pWork == '\t') {
      ++pWork;
    }
    pStart = pWork;
    while (*pWork && *pWork != '\n') {
      ++pWork;
    }
    SEGGER_SHELL_Printf(pSelf, "%.*s\n", pWork - pStart, pStart);
    if (*pWork == '\n') {
      ++pWork;
    }
  }
}

/*********************************************************************
*
*       _PrintUsage()
*
*  Function description
*    Print usage for a single command with syntax and options.
*
*  Parameters
*    pSelf  - Shell context.
*    pAPI   - Command to print syntax.
*    Flags  - Formatting flags.
*    Indent - Initial indentation, in columns.
*/
static void _PrintUsage(SEGGER_SHELL_CONTEXT *pSelf, const SEGGER_SHELL_COMMAND_API *pAPI, int Flags, int Indent) {
  int ConsoleWidth;
  int w;
  //
  ConsoleWidth = pSelf->pConsoleAPI->pfGetWidth
                   ? pSelf->pConsoleAPI->pfGetWidth()
                   : 80;
  //
  if (Flags & SEGGER_SHELL_HELP_FLAG_SHOW_COMMAND) {
    SEGGER_SHELL_Printf(pSelf, "%*s   %s", -Indent, pAPI->sName, pAPI->sDescription);
    w = Indent + 3 + strlen(pAPI->sDescription);
  } else {
    w = 0;
  }
  if (pAPI->sSyntax && (Flags & SEGGER_SHELL_HELP_FLAG_SHOW_USAGE)) {
    //
    // If Usage fits on one line with command name, print it inline.
    //
    if (w > 0) {
      w += 2 + 8 + strlen(pAPI->sName) + 1 + strlen(pAPI->sDescription);
      if (w >= ConsoleWidth) {
        SEGGER_SHELL_Printf(pSelf, "\n%*s     ", -Indent, "");
      } else {
        SEGGER_SHELL_Printf(pSelf, "  ");
      }
    }
    SEGGER_SHELL_Printf(pSelf, "Usage: %s %s\n", pAPI->sName, pAPI->sSyntax);
    if (pAPI->sOptions && (Flags & SEGGER_SHELL_HELP_FLAG_SHOW_OPTIONS)) {
      _PrintOptions(pSelf, pAPI->sOptions, Indent + 5);
    }
  } else {
    SEGGER_SHELL_Printf(pSelf, "\n");
  }
}

/*********************************************************************
*
*       _PrintGroupTitle()
*
*  Function description
*    Print a command group title.
*
*  Parameters
*    pSelf - Shell context.
*    pAPI  - Group item.
*/
static void _PrintGroupTitle(SEGGER_SHELL_CONTEXT *pSelf, const SEGGER_SHELL_COMMAND_API *pAPI) {
  SEGGER_SHELL_Printf(pSelf, "%s\n", pAPI->sName);
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_SHELL_Init()
*
*  Function description
*    Initialize the Shell context.
*
*  Parameters
*    pSelf    - Shell context.
*    pConsole - Implementation of console I/O.
*    pMem     - Pointer to memory allocator to use for dynamic storage.
*/
void SEGGER_SHELL_Init(SEGGER_SHELL_CONTEXT *pSelf, const SEGGER_SHELL_CONSOLE_API *pConsole, SEGGER_MEM_CONTEXT *pMem) {
  memset(pSelf, 0, sizeof(*pSelf));
  pSelf->pCommands   = 0;
  pSelf->Done        = 0;
  pSelf->pConsoleAPI = pConsole;
  pSelf->pMemory     = pMem;
}

/*********************************************************************
*
*       SEGGER_SHELL_InheritExternal()
*
*  Function description
*    Inherit a shell context from an existing shell context.
*
*    This function sets the Shell context from an (argc, argv) pair
*    provided by the operating system to main().  The context is set
*    up such that the first argument extracted will come from argv[1].
*
*  Parameters
*    pSelf        - Shell context.
*    sProgramName - Textual program name.
*    argc         - Argument count supplied by the client or OS.
*    argv         - Argument vector supplied by the client or OS.
*/
void SEGGER_SHELL_InheritExternal(SEGGER_SHELL_CONTEXT *pSelf, char *sProgramName, int argc, char *argv[]) {
  //
  // Take a copy of the argument vector.
  //
  if (sProgramName) {
    pSelf->sProgramName = sProgramName;
  } else if (argc > 0) {
    pSelf->sProgramName = argv[0];
  } else {
    pSelf->sProgramName = "<none>";
  }
  pSelf->argc = (unsigned)argc;
  pSelf->argv = argv;
  pSelf->pWork = 0;
  pSelf->ArgumentIdx = 0;
}

/*********************************************************************
*
*       SEGGER_SHELL_Inherit()
*
*  Function description
*    Inherit a shell context.  All state is inherited from the parent
*    context apart excluding the list of commands.
*
*  Parameters
*    pSelf - Shell context to inherit into.
*    pFrom - Shell context to inherit from.
*    sName - Name of shell context (can be null).
*/
void SEGGER_SHELL_Inherit(SEGGER_SHELL_CONTEXT *pSelf, SEGGER_SHELL_CONTEXT *pFrom, const char *sName) {
  //
  // Take a copy of the context, but not the commands.
  //
  *pSelf = *pFrom;
  pSelf->sName = sName;
  pSelf->pCommands = 0;
}

/*********************************************************************
*
*       SEGGER_SHELL_Process()
*
*  Function description
*    Process the command line.  This function extracts the next argument
*    from the command line, looks it up the in list of commands, and
*    executes it if found.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    >= 0 - Command executed without error.
*     < 0 - Command not found or command execution error.
*/
int SEGGER_SHELL_Process(SEGGER_SHELL_CONTEXT *pSelf) {
  char *sName;
  const SEGGER_SHELL_COMMAND_API *pCommand;
  int Status;
  //
  Status = SEGGER_SHELL_ReadNextArg(pSelf, &sName);
  if (Status >= 0) {
    Status = SEGGER_SHELL_FindCommand(pSelf, sName, &pCommand);
    if (Status >= 0) {
      Status = pCommand->pfExecute(pSelf);
    }
  }
  return Status;
}

/*********************************************************************
*
*       SEGGER_SHELL_ReadNextArg()
*
*  Function description
*    Read the next argument.  This gets the next argument from the
*    command line, looks it up the in command vector, and executes it.
*
*  Parameters
*    pSelf - Shell context.
*    pArg  - Pointer to the place to store the next command line
*            argument pointer.
*
*  Return value
*    >= 0 - Argument fetched without error.
*     < 0 - Read beyond end of arguments.
*/
int SEGGER_SHELL_ReadNextArg(SEGGER_SHELL_CONTEXT *pSelf, char **pArg) {
  char *p = 0;
  //
  if (pSelf->ArgumentIdx < pSelf->argc) {
    if (pSelf->ArgumentIdx == 0) {
      p = pSelf->sProgramName;
    } else if (pSelf->argv) {
      p = pSelf->argv[pSelf->ArgumentIdx];
    } else {
      p = _GetParsedArgument(pSelf->pWork, pSelf->ArgumentIdx);
    }
    pSelf->ArgumentIdx++;
    if (pArg) {
      *pArg = p;
    }
    return 0;
  } else {
    if (pArg) {
      *pArg = 0;
    }
    return SEGGER_SHELL_ERROR_MORE_ARGS_EXPECTED;
  }
}

/*********************************************************************
*
*       SEGGER_SHELL_ReadNextU32()
*
*  Function description
*    Read the next argument.  This gets the next argument from the
*    command line, looks it up the in command vector, and executes it.
*
*  Parameters
*    pSelf        - Shell context.
*    pArg         - Pointer to the place to store the next U32 parsed
*                   from the command line.
*    DefaultValue - Value to substitute if argument is not provided.
*
*  Return value
*    >= 0 - Argument fetched without error.
*     < 0 - Read beyond end of arguments.
*/
int SEGGER_SHELL_ReadNextU32(SEGGER_SHELL_CONTEXT *pSelf, U32 *pArg, U32 DefaultValue) {
  char *p = 0;
  int Status;
  //
  Status = SEGGER_SHELL_ReadNextArg(pSelf, &p);
  if (Status == SEGGER_SHELL_ERROR_MORE_ARGS_EXPECTED) {
    *pArg = DefaultValue;
  } else {
    *pArg = strtoul(p, 0, 0);
  }
  return 0;
}

/*********************************************************************
*
*       SEGGER_SHELL_PeekNextArg()
*
*  Function description
*    Look ahead to the next argument on the command line but do not
*    advance to it.
*
*  Parameters
*    pSelf - Shell context.
*    pArg  - Pointer to the place to store the next command line
*            argument pointer.
*
*  Return value
*    >= 0 - Argument fetched without error.
*     < 0 - Read beyond end of arguments.
*/
int SEGGER_SHELL_PeekNextArg(SEGGER_SHELL_CONTEXT *pSelf, char **pArg) {
  char *p = 0;
  //
  if (pSelf->ArgumentIdx < pSelf->argc) {
    if (pSelf->ArgumentIdx == 0) {
      p = pSelf->sProgramName;
    } else if (pSelf->argv) {
      p = pSelf->argv[pSelf->ArgumentIdx];
    } else {
      p = _GetParsedArgument(pSelf->pWork, pSelf->ArgumentIdx);
    }
    if (pArg) {
      *pArg = p;
    }
    return 0;
  } else {
    if (pArg) {
      *pArg = 0;
    }
    return SEGGER_SHELL_ERROR_MORE_ARGS_EXPECTED;
  }
}

/*********************************************************************
*
*       SEGGER_SHELL_HasUnreadArgs()
*
*  Function description
*    Predicate indicating whether more arguments remaing to be read.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    == 0 - No further arguments, all have been read.
*    != 0 - Further arguments remain to be read.
*/
int SEGGER_SHELL_HasUnreadArgs(const SEGGER_SHELL_CONTEXT *pSelf) {
  return pSelf->ArgumentIdx < pSelf->argc;
}

/*********************************************************************
*
*       SEGGER_SHELL_CountTotalArgs()
*
*  Function description
*    Get the total number of arguments in the argument vector.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Total number of arguments in the argument vector.
*/
int SEGGER_SHELL_CountTotalArgs(const SEGGER_SHELL_CONTEXT *pSelf) {
  return pSelf->argc;
}

/*********************************************************************
*
*       SEGGER_SHELL_CountUnreadArgs()
*
*  Function description
*    Get the total number of unread arguments in the argument vector.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Total number of unread arguments in the argument vector.
*/
int SEGGER_SHELL_CountUnreadArgs(const SEGGER_SHELL_CONTEXT *pSelf) {
  return pSelf->argc - pSelf->ArgumentIdx;
}

/*********************************************************************
*
*       SEGGER_SHELL_ParseInput()
*
*  Function description
*    Parse a textual command line ready for argument extraction.
*
*  Parameters
*    pSelf  - Shell context.
*    sInput - Command line to parse.  This argument is modified
*             during parsing.
*
*  Return value
*    >= 0 - Parse OK.
*     < 0 - Parse error.
*/
int SEGGER_SHELL_ParseInput(SEGGER_SHELL_CONTEXT *pSelf, char *sInput) {
  char *sOutput;
  //
  // No arguments to begin with.
  //
  pSelf->argc = 0;
  pSelf->argv = 0;
  pSelf->ArgumentIdx = 0;
  pSelf->pWork = sInput;
  sOutput = pSelf->pWork;
  //
  for (;;) {
    //
    // Skip spaces to the next argument.
    //
    sInput = _SkipLeadingSpaces(sInput);
    //
    // If we've come to the end of input, we're done.
    if (*sInput == 0) {
      break;
    }
    //
    // Register new argument.
    //
    ++pSelf->argc;
    //
    // Gather single token which may be quoted.  For instance,
    // foo"bar" -> foobar, foo" "bar -> foo bar.  Because Windows
    // uses backslash in file paths, no special processing is
    // undertaken when a backslash is seen.  We might revisit this
    // so that quotation marks can be added, e.g. foo\"bar -> foo"bar.
    //
    for (;;) {
      //
      if (*sInput == 0) {
        //
        // Argument terminates at end of line.
        //
        break;
      } else if (_IsSpace(*sInput)) {
        //
        // Argument terminates at space.
        //
        ++sInput;
        break;
      } else if (*sInput == '"') {
        //
        // Quoted text will allow spaces in arguments.
        //
        ++sInput;
        while (*sInput && *sInput != '"') {
          *sOutput++ = *sInput++;
        }
        if (*sInput == '"') {
          ++sInput;
        }
      } else {
        //
        // Gather this character into token.
        //
        *sOutput++ = *sInput++;
      }
    }
    //
    // Terminate this argument.
    //
    *sOutput++ = 0;
  }
  //
  // Terminate list of arguments.
  //
  *sOutput++ = 0;
  //
  // Set up command name.
  //
  pSelf->sProgramName = pSelf->pWork;
  //
  return 0;
}

/*********************************************************************
*
*       SEGGER_SHELL_DecodeError()
*
*  Function description
*    Decode an error or status code.
*
*  Parameters
*    Status           - Error or status to decode.
*    sErrorStr        - Pointer to buffer to hold decoded error string.
*    NumBytesErrorStr - Size of buffer pointed to by sErrorStr, in bytes.
*/
void SEGGER_SHELL_DecodeError(int Status, char *sErrorStr, unsigned NumBytesErrorStr) {
  //
  // Can't have a zero-length object, but guard against it.
  //
  if (NumBytesErrorStr == 0) {
    return;
  }
  //
  switch (Status) {
  case 0:
    sErrorStr[0] = 0;
    break;
  case SEGGER_SHELL_ERROR_MORE_ARGS_EXPECTED:
    strncpy(sErrorStr, "More arguments expected", NumBytesErrorStr);
    break;
  case SEGGER_SHELL_ERROR_COMMAND_NOT_RECOGNIZED:
    strncpy(sErrorStr, "Command not recognized", NumBytesErrorStr);
    break;
  case SEGGER_SHELL_ERROR_COMMAND_ALREADY_INSTALLED:
    strncpy(sErrorStr, "Command already installed", NumBytesErrorStr);
    break;
  default:
    strncpy(sErrorStr, "Unknown error", NumBytesErrorStr);
    break;
  }
  //
  // Ensure always terminated [strncpy].
  //
  sErrorStr[NumBytesErrorStr-1] = 0;
}

/*********************************************************************
*
*       SEGGER_SHELL_PrintError()
*
*  Function description
*    Print a decoded error.
*
*  Parameters
*    pSelf  - Shell context.
*    Status - Status to decode and print.
*/
void SEGGER_SHELL_PrintError(SEGGER_SHELL_CONTEXT *pSelf, int Status) {
  char sErrorText[128];
  //
  if (Status < 0) {
    SEGGER_SHELL_DecodeError(Status, sErrorText, sizeof(sErrorText));
    SEGGER_SHELL_Printf(pSelf, "Error: %s\n", sErrorText);
  }
}

/*********************************************************************
*
*       SEGGER_SHELL_AddCommand()
*
*  Function description
*    Add a command to the shell command set.
*
*  Parameters
*    pSelf    - Shell context.
*    pCommand - Pointer to an array of commands terminated by
*               a zero command set structure.
*
*  Return value
*    >= 0 - Success.
*     < 0 - Error indication.
*/
int SEGGER_SHELL_AddCommand(SEGGER_SHELL_CONTEXT *pSelf, SEGGER_SHELL_COMMAND *pCommand) {
  if (pCommand->pNext) {
    // Already linked into a list, this is an error.
    return SEGGER_SHELL_ERROR_COMMAND_ALREADY_INSTALLED;
  }
  if (pSelf->pCommands == 0) {
    pSelf->pCommands = pCommand;
  } else {
    SEGGER_SHELL_COMMAND *pTmp = pSelf->pCommands;
    while (pTmp->pNext) {
      pTmp = pTmp->pNext;
    }
    pTmp->pNext = pCommand;
  }
  //
  return 0;
}

/*********************************************************************
*
*       SEGGER_SHELL_AddCommandAPI()
*
*  Function description
*    Add a command to the shell command set.
*
*  Parameters
*    pSelf    - Shell context.
*    pCommand - Pointer to an array of commands terminated by
*               a zero command set structure.
*
*  Return value
*    >= 0 - Success.
*     < 0 - Error indication.
*/
int SEGGER_SHELL_AddCommandAPI(SEGGER_SHELL_CONTEXT *pSelf, const SEGGER_SHELL_COMMAND_API *pAPI) {
  SEGGER_SHELL_COMMAND *pCommand;
  //
  pCommand = (SEGGER_SHELL_COMMAND *)SEGGER_MEM_Alloc(pSelf->pMemory, sizeof(SEGGER_SHELL_COMMAND));
  if (pCommand == 0) {
    return SEGGER_SHELL_ERROR_OUT_OF_MEMORY;
  } else {
    pCommand->pAPI  = pAPI;
    pCommand->pNext = 0;
    pCommand->Flags = 1;
    return SEGGER_SHELL_AddCommand(pSelf, pCommand);
  }
}

/*********************************************************************
*
*       SEGGER_SHELL_InputText()
*
*  Function description
*    Read text for the command interpreter.
*
*  Parameters
*    sText       - Pointer to buffer that will contain text read.  Zero
*                  terminated on exit.
*    TextByteCnt - Size of buffer sText in bytes.
*
*  Return value
*    < 0 - Error reading text (e.g. eof)
*   >= 0 - Success.
*/
int SEGGER_SHELL_InputText(SEGGER_SHELL_CONTEXT *pSelf, char *sText, unsigned TextByteCnt) {
  return pSelf->pConsoleAPI->pfGetString(sText, TextByteCnt);
}

/*********************************************************************
*
*       SEGGER_SHELL_FindCommand()
*
*  Function description
*    Find command in command vector.
*
*  Parameters
*    pSelf       - Shell context.
*    sName       - Command to find.
*    pCommandAPI - Pointer to command API for the command.  If the
*                  command is not found, the returned pointer is set
*                  to zero.
*
*  Return value
*     < 0 - Command not found.
*    >= 0 - Command found.
*/
int SEGGER_SHELL_FindCommand(const SEGGER_SHELL_CONTEXT *pSelf, const char *sName, const SEGGER_SHELL_COMMAND_API **pCommandAPI) {
  const SEGGER_SHELL_COMMAND *pCommand;
  //
  for (pCommand = pSelf->pCommands; pCommand; pCommand = pCommand->pNext) {
    if (_CaselessCompare(pCommand->pAPI->sName, sName) == 0) {
      if (pCommandAPI) {
        *pCommandAPI = pCommand->pAPI;
      }
      return 0;
    }
  }
  //
  if (pCommandAPI) {
    *pCommandAPI = 0;
  }
  return SEGGER_SHELL_ERROR_COMMAND_NOT_RECOGNIZED;
}

/*********************************************************************
*
*       SEGGER_SHELL_Exit()
*
*  Function description
*    Set the shell exit flag and clean up. The exit flags indicates
*    that the user (or application) has requested the shell to exit.
*
*  Parameters
*    pSelf - Shell to exit.
*/
void SEGGER_SHELL_Exit(SEGGER_SHELL_CONTEXT *pSelf) {
  SEGGER_SHELL_COMMAND *pCommand;
  SEGGER_SHELL_COMMAND *pNext;
  //
  pCommand = pSelf->pCommands;
  while (pCommand) {
    pNext = pCommand->pNext;
    if (pCommand->Flags) {
      SEGGER_MEM_Free(pSelf->pMemory, pCommand);
    } else {
      pCommand->pNext = 0;
    }
    pCommand = pNext;
  }
  pSelf->pCommands = 0;
  pSelf->Done      = 1;
}

/*********************************************************************
*
*       SEGGER_SHELL_IsExited()
*
*  Function description
*    Return the shell exit flag.  The exit flag indicates that the user
*    (or application) has requested the shell to quit.
*
*  Parameters
*    pSelf - Shell to test.
*
*  Return value
*    == 0    No exit requested
*    != 0    Exit requested
*/
int SEGGER_SHELL_IsExited(const SEGGER_SHELL_CONTEXT *pSelf) {
  return pSelf->Done;
}

/*********************************************************************
*
*       SEGGER_SHELL_Printf()
*
*  Function description
*    Print formatted output.
*
*  Parameters
*    pSelf   - Shell context.
*    sFormat - Format control string.
*/
void SEGGER_SHELL_Printf(SEGGER_SHELL_CONTEXT *pSelf, const char *sFormat, ...) {
  va_list ap;
  va_start(ap, sFormat);
  pSelf->pConsoleAPI->pfPrintString(sFormat, ap);
}

/*********************************************************************
*
*       SEGGER_SHELL_Enter()
*
*  Function description
*    Enter a simple interactive shell.  Commands are read and processed
*    until the shell exit flag is set.
*
*  Parameters
*    pSelf - Shell to test.
*
*  Return value
*    == 0    Shell ran to completion without error.
*    != 0    Error reading user input or executing inherited command.
*/
int SEGGER_SHELL_Enter(SEGGER_SHELL_CONTEXT *pSelf) {
  char acInput[128];
  int  Status;
  //
  // Interactive or non-interactive?
  //
  if (SEGGER_SHELL_CountUnreadArgs(pSelf) <= 1) {
    //
    // No arguments, sign on and enter interactive mode.
    //
    while (!SEGGER_SHELL_IsExited(pSelf)) {
      //
      // Get input with prompt.
      //
      SEGGER_SHELL_Printf(pSelf, "> ");
      Status = SEGGER_SHELL_InputText(pSelf, acInput, sizeof(acInput));
      if (Status >= 0) {
        Status = SEGGER_SHELL_ParseInput(pSelf, acInput);
      }
      if (Status >= 0 && SEGGER_SHELL_HasUnreadArgs(pSelf)) {
        //
        // There is at least a command, so execute it.
        //
        Status = SEGGER_SHELL_Process(pSelf);
      }
      if (Status < 0) {
        SEGGER_SHELL_Printf(pSelf, "Error: %d\n", Status);
      }
    }
    //
    Status = 0;
    //
  } else {
    //
    // Non-interactive, just run the command from the OS.
    //
    Status = SEGGER_SHELL_ReadNextArg(pSelf, 0);
    if (Status >= 0) {
      Status = SEGGER_SHELL_Process(pSelf);
    }
  }
  //
  return Status;
}

/*********************************************************************
*
*       SEGGER_SHELL_SetName()
*
*  Function description
*    Enter a simple interactive shell.  Commands are read and processed
*    until the shell exit flag is set.
*
*  Parameters
*    pSelf - Shell to test.
*
*  Return value
*    == 0    Shell ran to completion without error.
*    != 0    Error reading user input or executing inherited command.
*/
void SEGGER_SHELL_SetName(SEGGER_SHELL_CONTEXT *pSelf, const char *sName) {
  pSelf->sName = sName;
}

/*********************************************************************
*
*       _PrintHelpList()
*
*  Function description
*    Print help information in list format.
*
*  Parameters
*    pSelf - Shell context.
*    Flags - Formatting flags.
*
*  Return value
*    Standard status code.
*/
static void _PrintHelpList(SEGGER_SHELL_CONTEXT *pSelf, unsigned Flags) {
  const SEGGER_SHELL_COMMAND * pCommand;
  int                   MaxWidth;
  //
  MaxWidth = 0;
  for (pCommand = pSelf->pCommands; pCommand; pCommand = pCommand->pNext) {
    if (pCommand->pAPI->sName[0] != '-') {
      if ((int)strlen(pCommand->pAPI->sName) > MaxWidth) {
        MaxWidth = strlen(pCommand->pAPI->sName);
      }
    }
  }
  //
  if (pSelf->sName) {
    SEGGER_SHELL_Printf(pSelf, "\n%s Commands:\n\n", pSelf->sName);
  } else {
    SEGGER_SHELL_Printf(pSelf, "\nCommands:\n\n");
  }
  for (pCommand = pSelf->pCommands; pCommand; pCommand = pCommand->pNext) {
    if (pCommand->pAPI->sName[0] == '-') {
      _PrintGroupTitle(pSelf, pCommand->pAPI);
    } else {
      _PrintUsage(pSelf, pCommand->pAPI, Flags, MaxWidth);
    }
  }
  SEGGER_SHELL_Printf(pSelf, "\n");
}

/*********************************************************************
*
*       SEGGER_SHELL_PrintUsage()
*
*  Function description
*    Print usage for a single command with syntax and options.
*
*  Parameters
*    pSelf - Shell context.
*    pAPI  - Command to print syntax.
*    Flags - Formatting flags
*/
void SEGGER_SHELL_PrintUsage(SEGGER_SHELL_CONTEXT *pSelf, const SEGGER_SHELL_COMMAND_API *pAPI, unsigned Flags) {
  _PrintUsage(pSelf, pAPI, Flags | SEGGER_SHELL_HELP_FLAG_SHOW_USAGE, 4);
}

/*********************************************************************
*
*       SEGGER_SHELL_PrintHelp()
*
*  Function description
*    Print help information for a shell context.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Standard status code.
*/
void SEGGER_SHELL_PrintHelp(SEGGER_SHELL_CONTEXT *pSelf, unsigned Flags) {
  _PrintHelpList(pSelf, Flags);
}

/*********************************************************************
*
*       SEGGER_SHELL_PrintCommands()
*
*  Function description
*    Print all commands registered to a shell context using a compact
*    columnar format.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Standard status code.
*/
void SEGGER_SHELL_PrintCommands(SEGGER_SHELL_CONTEXT *pSelf) {
  const SEGGER_SHELL_COMMAND * pCommand;
  int                 MaxWidth;
  int                 ConsoleWidth;
  int                 NumColumns;
  int                 Column;
  //
  ConsoleWidth = pSelf->pConsoleAPI->pfGetWidth
                   ? pSelf->pConsoleAPI->pfGetWidth()
                   : 80;
  MaxWidth = 1;
  for (pCommand = pSelf->pCommands; pCommand; pCommand = pCommand->pNext) {
    if (pCommand->pAPI->sName[0] != '-') {
      if ((int)strlen(pCommand->pAPI->sName) > MaxWidth) {
        MaxWidth = strlen(pCommand->pAPI->sName);
      }
    }
  }
  //
  NumColumns = (ConsoleWidth - 4) / (MaxWidth + 4);
  Column = 0;
  //
  for (pCommand = pSelf->pCommands; pCommand; pCommand = pCommand->pNext) {
    if (pCommand->pAPI->sName[0] == '-') {
      if (Column) {
        SEGGER_SHELL_Printf(pSelf, "\n");
      }
      SEGGER_SHELL_Printf(pSelf, "\n%s\n", pCommand->pAPI->sName);
      Column = 0;
    } else {
      if (Column == 0) {
        SEGGER_SHELL_Printf(pSelf, "\n");
      } else {
        SEGGER_SHELL_Printf(pSelf, "    ");
      }
      SEGGER_SHELL_Printf(pSelf, "%*s", -MaxWidth, pCommand->pAPI->sName);
      Column = (Column + 1) % NumColumns;
    }
  }
  if (Column) {
    SEGGER_SHELL_Printf(pSelf, "\n");
  }
  SEGGER_SHELL_Printf(pSelf, "\n");
}

/*********************************************************************
*
*       SEGGER_SHELL_ExecuteHelp()
*
*  Function description
*    Execute the 'help' command and display help information.
*
*  Parameters
*    pSelf - Shell context.
*
*  Return value
*    Standard status code.
*/
int SEGGER_SHELL_ExecuteHelp(SEGGER_SHELL_CONTEXT *pSelf) {
  char       * sArg;
  const char * sCommand;
  int          Flags;
  int          Status;
  //
  Flags    = SEGGER_SHELL_HELP_FLAG_SHOW_COMMAND;
  Status   = 0;
  sCommand = 0;
  //
  while (SEGGER_SHELL_ReadNextArg(pSelf, &sArg) >= 0) {
    if (strcmp(sArg, "-x") == 0) {
      Flags |= SEGGER_SHELL_HELP_FLAG_SHOW_USAGE;
    } else if (strcmp(sArg, "-v") == 0) {
      Flags |= SEGGER_SHELL_HELP_FLAG_SHOW_USAGE | SEGGER_SHELL_HELP_FLAG_SHOW_OPTIONS;
    } else if (sArg[0] != '-') {
      sCommand = sArg;
    }
  }
  //
  if (sCommand) {
    const SEGGER_SHELL_COMMAND_API *pAPI;
    //
    Status = SEGGER_SHELL_FindCommand(pSelf, sCommand, &pAPI);
    if (Status == 0) {
      SEGGER_SHELL_PrintUsage(pSelf, pAPI, SEGGER_SHELL_HELP_FLAG_SHOW_USAGE | SEGGER_SHELL_HELP_FLAG_SHOW_OPTIONS);
    }
  } else {
    SEGGER_SHELL_PrintHelp(pSelf, Flags);
  }
  //
  return Status;
}

void SEGGER_SHELL_ResetArgIterator(SEGGER_SHELL_CONTEXT *pSelf, unsigned Index) {
  if (Index < pSelf->argc) {
    pSelf->ArgumentIdx = Index;
  }
}

/****** End Of File *************************************************/
