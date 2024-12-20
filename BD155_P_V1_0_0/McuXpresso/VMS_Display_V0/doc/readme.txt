Overview
========
The example demonstrates graphical widgets of the emWin library. If the project contains folder "AppWizard"
it uses sources generated by emWin AppWizard. You can download the AppWizard from
https://www.nxp.com/design/software/embedded-software/nxp-emwin-libraries:EMWIN-GRAPHICS-LIBRARY
There is also a sample AppWizard project, from which the generated source codes were taken. User can
modify the project in AppWizard, then export the sources and replace the folders "Source" and "Resource"
in the IDE project to be able to build and deploy the application.


Toolchain supported
===================
- IAR embedded Workbench  9.10.2
- Keil MDK  5.34
- GCC ARM Embedded  10.2.1
- MCUXpresso  11.4.0

Hardware requirements
=====================
- Micro USB cable
- EVKB-IMXRT1050 board
- Personal Computer
- RK043FN02H-CT LCD board

Board settings
==============
1. Connect the RK043FN02H-CT board to J8.

Prepare the Demo
================
1.  Connect a USB cable between the host PC and the OpenSDA USB port on the target board. 
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
If this example runs correctly, the sample GUI is displayed.
