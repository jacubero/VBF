***
Sum
***

Description
===========

Let :math:`n \geq 1, m \geq 1`, :math:`F,G \in \funct{F}_{n,m}`. The *Sum* of *F* and *G*, denoted by :math:`F + G \in \funct{F}_{n,m}` is the Vector Boolean Function whose Truth Table results from the addition of the Truth Tables of *F* and *G*: :math:`\matr{T}_{F+G} = \matr{T}_F+\matr{T}_G`. 

Library
=======

It can be obtained with the following method:

.. code-block:: c

	void sum(VBF& X, VBF& F, VBF& G)  

Example
-------

The following program provides the nonlinearity, absolute indicator and linearity distance of two Vector Boolean functions given its polynomial representation in ANF and its hexadecimal representation of Truth Table respectively and calculates the same criteria for the its sum.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F, G, X;
	   vec_pol      f;

	   ifstream input1(argv[1]);
	   if(!input1)   {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input1 >> f;
	   F.putpol(f);
	   input1.close();

	   ifstream input2(argv[2]);
	   if(!input2)  {
	      cerr << "Error opening " << argv[2] << endl;
	      return 0;
	   }
	   G.putHexTT(input2);
	   input2.close();

	   cout << "The polynomial in ANF of F is ";
	   cout << endl;
	   Pol(cout,F);

	   cout << "nl(F)=" << nl(F) << endl;
	   cout << "ACmax(F)=" << maxAC(F) << endl;
	   cout << "LD(F)=" << ld(F) << endl;
	   cout << endl;

	   cout << "The polynomial in ANF of G is ";
	   cout << endl;
	   Pol(cout,G);
	   cout << endl;

	   sum(X,F,G);
	   cout << "The polynomial in ANF of the sum of F and G is ";
	   cout << endl;
	   Pol(cout,X);

	   cout << "nl(F+G)=" << nl(X) << endl;
	   cout << "ACmax(F+G)=" << maxAC(X) << endl;
	   cout << "LD(F+G)=" << ld(X) << endl;
	   cout << endl;

	   return 0;
	}

If we use the Boolean function *F* with ANF :math:`x_1x_2+x_3x_4` and function *G* with hexadecimal representation of Truth Table *0001* as inputs, the output would be the following:

.. code-block:: console

	The polynomial in ANF of F is
	x1x2+x3x4
	nl(F)=6
	ACmax(F)=0
	LD(F)=4

	The polynomial in ANF of G is
	x1x2x3x4

	The polynomial in ANF of the sum of F and G is
	x3x4+x1x2+x1x2x3x4
	nl(F+G)=5
	ACmax(F+G)=4
	LD(F+G)=3

These results are congruent with the properties of changing one bit of the Truth Table:

1. :math:`\crit{NL}(F+G)=\crit{NL}(F)-1=6-1=5`.

2. :math:`\crit{AC_{max}}(F+G)=\crit{AC_{max}}(F)+4=0+4=4`.

3. :math:`\crit{LD}(F+G)=\crit{LD}(F)-1=4-1=3`.
