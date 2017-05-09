*********
Compiling
*********

There is only one library header files called "VBF.h". You should include a statement like this in the program that make use of VBF library,

.. code-block:: c

   #include "VBF.h"

If the directory is not installed on the standard search path of your compiler you will also need to provide its location to the preprocessor as a command line flag. The default location of the ‘NTL’ directory is ‘/usr/local/include/NTL’. A typical compilation command for a source file ‘ex.cpp’ with the GNU C++ compiler g++ included in a Makefile is,

.. code-block:: c

   GPP=g++
   LIBS=-lntl
   NTLINC= -I/usr/local/include -L/usr/local/lib

   ex: ex.cpp VBF.h
        $(GPP) $(NTLINC) -Wall ex.cpp -o ex.exe $(LIBS)

This results in an executable file ‘ex.exe’ if the following command is executed:

.. code-block:: console

   $ make ex

In order to execute the example program included in the "Example" program with S7.dec and S9.dec, the following commands must be executed:

.. code-block:: console

   $ ./ex.exe S7 7
   $ ./ex.exe S9 9
