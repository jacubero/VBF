***********************************
Concatenation of polynomials in ANF
***********************************

Description
===========

Let :math:`n_1,n_2 \geq 1`, :math:`F_1 \in \funct{F}_{n_1,m}, F_2 \in \funct{F}_{n_2,m}` be Vector Boolean functions. Consider the Vector Boolean function :math:`F_1 |_{p} F_2 \in \funct{F}_{n_1+n_2,m}` defined as :math:`(x_1,\ldots,x_{n_1},x_{n_1+1},\ldots,x_{n_1+n_2}) \rightarrow F_1(x_1,\ldots,x_{n_1})+ F_2(x_{n_1+1},\ldots,x_{n_1+n_2})` where :math:`\vec{x} \in \gf{V_{n_1+n_2}}`.

Library
=======

The method included in VBF to perform this construction is the following:

.. code-block:: c

	void concatpol(VBF& X, VBF& F, VBF& G)

Example
-------

The following program provides the ANF of the concatenation of polynomials in ANF of two Vector Boolean functions given its polynomial representation.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F,G,H;
	   vec_pol    f,g;
	   NTL::mat_GF2 T;

	   ifstream inputf(argv[1]);
	   if(!inputf) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   inputf >> f;
	   F.putpol(f);
	   inputf.close();

	   ifstream inputg(argv[2]);
	   if(!inputg) {
	      cerr << "Error opening " << argv[2] << endl;
	      return 0;
	   }
	   inputg >> g;
	   G.putpol(g);
	   inputg.close();

	   concatpol(H,F,G);
	   cout << "The ANF of the concatenation of polynomials 
	   in ANF of F and G is ";
	   cout << endl;
	   Pol(cout,H);

	   return 0;
	}

If we use the Boolean functions :math:`x_1x_2+x_3x_4` and :math:`x_1+1` as inputs, the output would be the following:

.. code-block:: console

	The ANF of the concatenation of polynomials in ANF of F and G is 
	x1x2+x3x4+x5+1