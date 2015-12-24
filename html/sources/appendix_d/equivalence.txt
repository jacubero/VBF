******************
Affine equivalence
******************

Generation of matrices associated with affine Vector Boolean functions
======================================================================

The following program prints the matrices associated with affine Vector Boolean functions with *n* variables. It generates the matrices :math:`\matr{A}` in the expresion: :math:`F(\vec{x}) = \matr{A} \cdot \vec{x}`. It is not an exhaustive enumeration because it only generates the non-singular matrices whose rows have only one nonzero bit. There are non-singular matrices which do not satisfy this requirement.

.. code-block:: c

	#include<iostream>
	#include<algorithm>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF F;
	   NTL::mat_GF2 A;
	   long mylongs[] = {0,1,2,3,4,5,6,7,8,9,10};
	   long i, n;

	   n = atol(argv[1]);

	   A.SetDims(n,n);
	   do {
	     clear(A);
	     for (i = 0;i < n;i++) {
	       A[i][mylongs[i]] = 1;
	     }
	     cout << A << endl;
	   } while ( std::next_permutation(mylongs,mylongs+n) );
	   
	}

Generation of vectors associated with affine Vector Boolean functions
=====================================================================

The following program prints the vectors associated with affine Vector Boolean functions with *n* variables. It generates the vectors :math:`\vec{b}` in the expresion: :math:`F(\vec{x}) = \matr{A} \cdot \vec{x}+\vec{b}`.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;

	   NTL::vec_GF2 	v; 
	   long i, n, spacen;

	   n = atol(argv[1]);
	   spacen = 1 << n; 

	   for (i = 0; i < spacen; i++)
	   {
	      v = to_vecGF2(i,n);
	      cout << v << endl;
	   }

	   return 0;
	}

Generation of affine Boolean functions
======================================

The following program generate all affine Boolean functions with *n* variables.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;

	   NTL::vec_GF2 	v; 
	   NTL::mat_ZZ 	 	A, B, C;
	   NTL::mat_GF2	 	T;
	   unsigned long 	n, i, j, r;

	   n = atoi(argv[1]);
	 
	   A.SetDims(2,2);
	   A[0][0]=1;
	   A[0][1]=1;
	   A[1][0]=1;
	   A[1][1]=-1; 
	   B = A;  

	   for (i = 1; i < n; i++) {
	      Kronecker(C,A,B);
	   	  r = C.NumRows();
	   	  B.SetDims(r,r);
	   	  B = C;
	   }

	   r = C.NumRows();
	   T.SetDims(r,r);

	   for (i = 0; i < r; i++) {
	   	 for (j = 0; j < r; j++) {
	   		if (C[i][j] == 1) {
	   			T[i][j] = 0;
	   		} else {
	   			T[i][j] = 1;
	   		}
	   	 }
	   }
	   cout << "[";

	   for (i = 1; i < r; i++) {  	  	
	   		cout << T[i] << endl;
	   		opposite(v,T[i]);
	   		cout << v << endl;   		
	   }

	   opposite(v,T[0]);
	   cout << v << endl;   		
	   cout << "]" << endl;

	   return 0;
	}

Generation of affine equivalent functions
=========================================

The following program generates affine equivalent functions and are invoked with the following parameters:

* argv[1] = Name of the output file
* argv[2] = Name of the file which contains all possible vectors :math:`\vec{b}` 
* argv[3] = Name of the file which contains all functions for which we want to find affine equivalent functions 
* argv[4] = Name of the file which contains the matrices :math:`\matr{A}`

Internally the following variables are set:

* *numb* = Number of possible vectors b in affine equivalence relation
* *numg* = Number of functions for which we want to find affine equivalent functions  

This program finds out the Boolean functions with *9* variables whose weights are at most at a distance of 2 from a Balanced function.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F, G, H;
	   NTL::mat_GF2 A, Tg, Tgt, Th, Tht, matb, matg, mataff;
	   NTL::vec_GF2 v; 
	   long i, j, k, w;
	   long numb = 512, numg = 5;
	   ifstream inputA;
	   ifstream inputb;
	   ifstream inputg;
	   ifstream inputaff;
	   ofstream output;
	   ifstream input;
	   char file[33];

	   sprintf(file,"%s.txt",argv[1]);

	   matb.SetDims(numb,9);
	   matg.SetDims(numg,512);
	   inputb.open(argv[2]);
	   i=0;
	   while (!inputb.eof()) {
	     inputb >> matb[i];
	     i++;
	   } 
	   inputb.close();
	   i=0;
	   inputg.open(argv[3]);
	   while (!inputg.eof()) {
	      inputg >> Tg;
	      matg[i]=Tg[0];
	      i++;
	   }
	   inputg.close();

	   inputaff.open(argv[4]);
	   inputaff >> mataff;

	   inputA.open(argv[1]);
	   while (!inputA.eof()) {
	     inputA >> A;

	     for (j = 0; j < numb; j++) {
	       F.putaffine(A,matb[j]);

	       for (k = 0; k < numg; k++) {
	         output.open(file);
	         output << "[" << matg[k] << "]";
	         output.close();
	         input.open(file);
	         input >> Tgt;
	         input.close();
	         Tg = transpose(Tgt);
	         G.puttt(Tg);
	         Comp(H,F,G);
	         Th = TT(H);
	         Tht = transpose(Th); 
	         w = weight(Tht[0]);
	         if ((w == 256) || (w == 254) || (w == 258)) {
	           cout << "[" << Tht[0] << "]" << "," << w << endl;
	         }
	         for (i=0; i<mataff.NumRows(); i++) {
	            v = mataff[i]+Tht[0];
	            w = weight(v); 
	            if ((w == 256) || (w == 254) || (w == 258)) {
	               cout << "[" << v << "]" << "," << w << endl;
	            }
	         }
	         
	         G.kill();
	         H.kill();
	       }
	       F.kill();
	     }
	   }   
	   inputA.close();
	   
	   return 0;
	}
