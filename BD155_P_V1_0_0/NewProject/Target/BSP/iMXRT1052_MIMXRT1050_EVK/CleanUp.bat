@ECHO OFF

FOR %%i IN (Output) DO IF EXIST %%i RD %%i /S/Q
FOR %%i IN (emSession, jlink) DO IF EXIST *.%%i DEL *.%%i