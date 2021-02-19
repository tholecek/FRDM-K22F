# FRDM-K22F
Libraries and example code for the FRDM-k22F board using the Bare Metal Approach

First I will start by placing a caveat on the bare metal approach in that I am not going to be writing to the device registers directly but will instead use the header file created by NXP/Freescale based on the register names from the reference manual provided from NXP at

https://www.nxp.com/webapp/Download?colCode=K22P121M120SF8RM

The header file I will use is found in the cmsis directory and is called MK22F10.h, other files are in this directory are for reference.

The repository structure is the following

/cmsis
/data
/drivers
/projects
/source

the /cmsis directory holds the files created by NXP as mentioned above

the /data directory will be a place that will store notes, datasheets, and anything related to developing the code but will not hold any code itself.  This is strictly a place for any reference material I have found useful

the /drivers directory will hold the device driver files in the form

   device_name.c
   device_name.h

the /projects directory will contain the project code used to create the examples.  The projects are created using Keil MDK5 on a windows platform.

the /source directory will contain code that illustrates the use of the device drivers in the form of simple examples.
