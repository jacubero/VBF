********************
Criteria calculation
********************

Calculate criteria from binary representation
=============================================

The following program calculates the balancedness, nonlinearity, linearity distance, algebraic degree, algebraic immunity, absolute indicator, sum-of-square indicator, linear potential and differential potential of a Boolean function having as input the binary representation of its Truth Table. 

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

	   cout << argv[1] << "," << Bal(F) << "," << nl(F) << 		"," << ld(F) << "," << deg(F) << "," << AI(F) << "," 		<< maxAC(F) << "," << sigma(F) << "," << lp(F) << 		"," << dp(F) << endl;

	  return 0;
	}


