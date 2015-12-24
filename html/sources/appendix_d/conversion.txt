*****************************
Truth table format conversion 
*****************************

Binary to hexadecimal
=====================

This program takes as input the binary representation of a Truth Table and outputs the hexadecimal representation of this Truth Table.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F;
	   
	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   F.putBinTT(input);
	   input.close();

	   ofstream output(argv[2]);
	   if(!output) {
	      cerr << "Error opening " << argv[2] << endl;
	      return 0;
	   }

	   F.getHexTT(output); 

	   return 0;
	}

Hexadecimal to binary 
=====================

This program takes as input the hexadecimal representation of a Truth Table and outputs the binary representation of this Truth Table.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F;
	   
	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   F.putHexTT(input);
	   input.close();

	   F.getBinTT(cout); 
	 
	  return 0;
	}

