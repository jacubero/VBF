********************
Criteria calculation
********************

Calculate criteria from Truth Table
===================================

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F;
	   NTL::mat_GF2 A, T;
	   NTL::mat_ZZ  W, LP, DP, C;
	   NTL::mat_ZZ  Ac;
	   long a;
	   char file[33];

	   sprintf(file,"%s.tt",argv[1]); 
	   ifstream input(file);
	   if(!input) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }
	   input >> T;
	   F.puttt(T);
	   input.close();

	   sprintf(file,"%s.anf",argv[1]);
	   ofstream output(file);
	   if(!output) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   A = ANF(F); 
	   cout << "Argument Dimension = " << F.n() << endl;
	   cout << "Argument space has " << F.spacen() << " elements."<< endl;
	   cout << "Image Dimension = " << F.m() << endl;
	   cout << "Image space has " << F.spacem() << " elements." << endl << endl;
	   cout << "Writing Algebraic Normal Form to file: " << file << endl;
	   cout << "[Columns = Image components]" << endl;
	   output << A << endl;
	   output.close();

	   sprintf(file,"%s.char",argv[1]);
	   ofstream output1(file);
	   if(!output1) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   C = Charact(F);   
	   cout << endl << "Writing Characteristic Function to file: " << file << endl;
	   cout << "[Columns = Image components]" << endl;
	   output1 << C << endl;
	   output1.close();

	   sprintf(file,"%s.wal",argv[1]);
	   ofstream output2(file);
	   if(!output2) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   W = Walsh(F); 
	   cout << endl << "Writing Walsh Spectrum to file: " << file <<endl;
	   output2 << W << endl;
	   output2.close();

	   sprintf(file,"%s.lp",argv[1]);
	   ofstream output3(file);
	   if(!output3) {
	      cerr << "Error opening " << file << endl; 
	      return 0; 
	   }
	   
	   LP = LAT(F);
	   cout << endl << "Writing Linear Profile to file: " << file << endl;
	   cout << "[To normalize divide by " << LP[0][0] << "]" << endl;
	   output3 << LP << endl;
	   output3.close();

	   sprintf(file,"%s.dp",argv[1]);
	   ofstream output4(file);
	   if(!output4) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }
	   
	   DP = DAT(F);
	   cout << endl << "Writing Differential Profile to file: " << file << endl;
	   cout << "[To normalize divide by " << DP[0][0] << "]" << endl;
	   output4 << DP << endl;
	   output4.close();

	   sprintf(file,"%s.pol",argv[1]);
	   ofstream output5(file);
	   if(!output5) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   cout << endl << "Writing the polynomials in ANF to file: " << file << endl;
	   Pol(output5,F);
	   output5.close();

	   sprintf(file,"%s.ls",argv[1]);
	   ofstream output6(file);
	   if(!output6) {
	      cerr << "Error opening " << file << endl;
	      return 0;   
	   }

	   cout << endl << "Writing Linear structures to file: " << file << endl;
	   LS(output6,F);
	   output6.close();

	   sprintf(file,"%s.ac",argv[1]);
	   ofstream output7(file);
	   if(!output7) {
	      cerr << "Error opening " << file << endl;
	      return 0;   
	   }

	   Ac = AC(F);
	   cout << endl << "Writing Autocorrelation Spectrum to file: " << file << endl;
	   output7 << Ac << endl;
	   output7.close();

	   sprintf(file,"%s.cy",argv[1]);
	   ofstream output8(file);
	   if(!output8) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   cout << endl << "Writing Cycle Structure to file: " << file << endl;
	   printCycle(output8,F); 
	   output8.close();

	   cout << endl <<  "Nonlinearity: " << nl(F) << endl;
	   nlr(a,F,2);
	   cout << "Second order Nonlinearity: " << a << endl;
	   cout << "Linearity distance: " << ld(F) << endl;
	   cout << "Algebraic degree: " << deg(F) << endl;
	   cout << "Algebraic immunity: " << AI(F) << endl;
	   cout << "Absolute indicator: " << maxAC(F) << endl;
	   cout << "Sum-of-squares indicator: " << sigma(F) << endl;
	   cout << "Linear potential: " << lp(F) << endl;
	   cout << "Differential potential: " << dp(F) << endl;
	   cout << "Maximum Nonlinearity (if n is even): " << nlmax(F) << endl;
	   cout << "Maximum Linearity distance: " << ldmax(F) << endl;

	   int type;
	   typenl(type, F);

	   if (type == BENT) {
	     cout << "It is a bent function" << endl;
	   } else if (type == ALMOST_BENT) {
	     cout << "It is an almost bent function" << endl;
	   } else if (type == LINEAR) {
	     cout << "It is a linear function" << endl;
	   }

	   cout << "The fixed points are: " << endl;
	   cout << fixedpoints(F) << endl;
	   cout << "The negated fixed points are: " << endl;
	   cout << negatedfixedpoints(F) << endl;
	   cout << "Correlation immunity: " << CI(F) << endl;
	   if (Bal(F)) {
	     cout << "It is a balanced function" << endl;
	   } else {
	     cout << "It is a non-balanced function" << endl;
	   }
	   cout << "The function is PC of degree " << PC(F) << endl;
	 
	  return 0;
	}

Calculate criteria from polynomials in ANF
==========================================

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F;
	   NTL::mat_GF2 A, T;
	   NTL::mat_ZZ  W, LP, DP, C;
	   NTL::mat_ZZ  Ac;
	   long a;
	   char file[33];
	   vec_pol p;

	   // Load VBF definitions
	   
	   sprintf(file,"%s.pol",argv[1]); 
	   ifstream input(file);
	   if(!input) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }
	   input >> p;
	   F.putpol(p);
	   input.close();

	   sprintf(file,"%s.tt",argv[1]);
	   ofstream output0(file);
	   if(!output0) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   T = TT(F);
	   cout << "Writing TruthTable to file: " << file << endl;
	   output0 << T << endl;
	   output0.close();

	   sprintf(file,"%s.anf",argv[1]);
	   ofstream output(file);
	   if(!output) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   A = ANF(F); 
	   cout << "Argument Dimension = " << F.n() << endl;
	   cout << "Argument space has " << F.spacen() << " elements."<< endl;
	   cout << "Image Dimension = " << F.m() << endl;
	   cout << "Image space has " << F.spacem() << " elements." << endl << endl;
	   cout << "Writing Algebraic Normal Form to file: " << file << endl;
	   cout << "[Columns = Image components]" << endl;
	   output << A << endl;
	   output.close();

	   sprintf(file,"%s.char",argv[1]);
	   ofstream output1(file);
	   if(!output1) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   C = Charact(F);   
	   cout << endl << "Writing Characteristic Function to file: " << file << endl;
	   cout << "[Columns = Image components]" << endl;
	   output1 << C << endl;
	   output1.close();

	   sprintf(file,"%s.wal",argv[1]);
	   ofstream output2(file);
	   if(!output2) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   W = Walsh(F); 
	   cout << endl << "Writing Walsh Spectrum to file: " << file <<endl;
	   output2 << W << endl;
	   output2.close();

	   sprintf(file,"%s.lp",argv[1]);
	   ofstream output3(file);
	   if(!output3) {
	      cerr << "Error opening " << file << endl; 
	      return 0; 
	   }
	   
	   LP = LAT(F);
	   cout << endl << "Writing Linear Profile to file: " << file << endl;
	   cout << "[To normalize divide by " << LP[0][0] << "]" << endl;
	   output3 << LP << endl;
	   output3.close();

	   sprintf(file,"%s.dp",argv[1]);
	   ofstream output4(file);
	   if(!output4) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }
	   
	   DP = DAT(F);
	   cout << endl << "Writing Differential Profile to file: " << file << endl;
	   cout << "[To normalize divide by " << DP[0][0] << "]" << endl;
	   output4 << DP << endl;
	   output4.close();

	   sprintf(file,"%s.pol",argv[1]);
	   ofstream output5(file);
	   if(!output5) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   cout << endl << "Writing the polynomials in ANF to file: " << file << endl;
	   Pol(output5,F);
	   output5.close();

	   sprintf(file,"%s.ls",argv[1]);
	   ofstream output6(file);
	   if(!output6) {
	      cerr << "Error opening " << file << endl;
	      return 0;   
	   }

	   cout << endl << "Writing Linear structures to file: " << file << endl;
	   LS(output6,F);
	   output6.close();

	   sprintf(file,"%s.ac",argv[1]);
	   ofstream output7(file);
	   if(!output7) {
	      cerr << "Error opening " << file << endl;
	      return 0;   
	   }

	   Ac = AC(F);
	   cout << endl << "Writing Autocorrelation Spectrum to file: " << file << endl;
	   output7 << Ac << endl;
	   output7.close();

	   sprintf(file,"%s.cy",argv[1]);
	   ofstream output8(file);
	   if(!output8) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }

	   cout << endl << "Writing Cycle Structure to file: " << file << endl;
	   printCycle(output8,F); 
	   output8.close();

	   cout << endl <<  "Nonlinearity: " << nl(F) << endl;
	   nlr(a,F,2);
	   cout << "Second order Nonlinearity: " << a << endl;
	   cout << "Linearity distance: " << ld(F) << endl;
	   cout << "Algebraic degree: " << deg(F) << endl;
	   cout << "Algebraic immunity: " << AI(F) << endl;
	   cout << "Absolute indicator: " << maxAC(F) << endl;
	   cout << "Sum-of-squares indicator: " << sigma(F) << endl;
	   cout << "Linear potential: " << lp(F) << endl;
	   cout << "Differential potential: " << dp(F) << endl;
	   cout << "Maximum Nonlinearity (if n is even): " << nlmax(F) << endl;
	   cout << "Maximum Linearity distance: " << ldmax(F) << endl;

	   int type;
	   typenl(type, F);

	   if (type == BENT) {
	     cout << "It is a bent function" << endl;
	   } else if (type == ALMOST_BENT) {
	     cout << "It is an almost bent function" << endl;
	   } else if (type == LINEAR) {
	     cout << "It is a linear function" << endl;
	   }

	   cout << "The fixed points are: " << endl;
	   cout << fixedpoints(F) << endl;
	   cout << "The negated fixed points are: " << endl;
	   cout << negatedfixedpoints(F) << endl;
	   cout << "Correlation immunity: " << CI(F) << endl;
	   if (Bal(F)) {
	     cout << "It is a balanced function" << endl;
	   } else {
	     cout << "It is a non-balanced function" << endl;
	   }
	   cout << "The function is PC of degree " << PC(F) << endl;
	 
	  return 0;
	}

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

	   cout << argv[1] << "," << Bal(F) << "," << nl(F) << 	"," << ld(F) << "," << deg(F) << "," << AI(F) << "," << maxAC(F) << "," << sigma(F) << "," << lp(F) << "," << dp(F) << endl;

	  return 0;
	}

Calculate criteria from hexadecimal representation
==================================================

The following program calculates the balancedness, nonlinearity, linearity distance, algebraic degree, algebraic immunity, absolute indicator, sum-of-square indicator, linear potential and differential potential of a Boolean function having as input the hexadecimal representation of its Truth Table. 

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

	   cout << argv[1] << "," << Bal(F) << "," << nl(F) << "," << ld(F) << "," << deg(F) << "," << AI(F) << "," << maxAC(F) << "," << sigma(F) << "," << lp(F) << "," << dp(F) << endl;

	  return 0;
	}

Calculate criteria from polynomials in ANF
==========================================

The following program calculates the balancedness, nonlinearity, linearity distance, algebraic degree, algebraic immunity, absolute indicator, sum-of-square indicator, linear potential and differential potential of a Boolean function having as input the polynomials in ANF. 

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F;
 	   vec_pol p;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input >> p;
	   F.putpol(p);
	   input.close();

	   cout << argv[1] << "," << Bal(F) << "," << nl(F) << "," << ld(F) << "," << deg(F) << "," << AI(F) << "," << maxAC(F) << "," << sigma(F) << "," << lp(F) << "," << dp(F) << endl;

	  return 0;
	}

Calculate criteria of component functions
=========================================

The following program calculates several criteria of the component functions of an S-box. 

.. code-block:: c

	#include<iostream>
	#include<fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F,G;
	   NTL::mat_GF2 T, Tt, A, B;
	   NTL::mat_ZZ W;
	   NTL::ZZ     max;
	   NTL::vec_GF2 v;
	   long i,j,m;
	   long spacen, spacem;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr<< "Error opening "<< argv[1]<< endl;
	      return 0;
	   }
	   input >> T;
	   F.puttt(T);
	   input.close();

	   spacen = F.spacen();
	   m = F.m();
	   spacem = F.spacem();
	   Tt = transpose(T);
	   v.SetLength(m);
	   A.SetDims(1,spacen);
	   B.SetDims(spacen,1);

	   for (i=1; i<spacem; i++) {
	     v = to_vecGF2(i,m);

	     clear(A);
	     for (j=0;j<m;j++) {
	       if (v[j] == 1) {
	         A[0] += Tt[j];
	       }
	     }
	     B = transpose(A);
	     G.puttt(B);

	     cout << A[0] << "," << Bal(G) << "," << nl(G) << "," << ld(G) << "," << deg(G) << "," << AI(G) << "," << maxAC(G) << "," << sigma(G) << "," << lp(G) << "," << dp(G) << endl;

	     G.kill();
	   }   
	}

