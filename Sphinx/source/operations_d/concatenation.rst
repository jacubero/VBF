*************
Concatenation
*************

Description
===========

Let :math:`n_1,n_2 \geq 1`, :math:`F_1 \in \funct{F}_{n,m}, F_2 \in \funct{F}_{n,m}` be Vector Boolean functions. Consider the Vector Boolean function :math:`F_1 |_{c} F_2 \in \funct{F}_{n+1,m}` defined as :math:`(\vec{x},x_{n+1}) \rightarrow \left( x_{n+1}+1 \right) F_1(\vec{x})+ x_{n+1} F_2(\vec{x})` where :math:`\vec{x} \in \gf{V_n}`.

Library
=======

The method included in VBF to perform this construction is the following:

.. code-block:: c

	void concat(VBF& X, VBF& F, VBF& G)  

Example
-------

The following program provides the weight, algebraic degree, balancedness, correlation immunity, nonlinearity and algebraic immunity of two Vector Boolean functions given its polynomial representation in ANF and calculates the same criteria for its concatenation.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F, G, X;
	   vec_pol f,g;

	   ifstream input1(argv[1]);
	   if(!input1) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input1 >> f;
	   F.putpol(f);
	   input1.close();

	   ifstream input2(argv[2]);
	   if(!input2) {
	      cerr << "Error opening " << argv[2] << endl;
	      return 0;
	   }
	   input2 >> g;
	   G.putpol(g);
	   input2.close();

	   cout << "weight(F)=" << weight(F) << endl;
	   cout << "deg(F)=" << deg(F) << endl;
	   if (Bal(F))  {
	     cout << "F is a balanced function" << endl;
	   } else {
	     cout << "F is a non-balanced function" << endl;
	   }
	   cout << "Degree of Correlation immunity of F=" << CI(F) << endl;
	   cout << "nl(F)=" << nl(F) << endl;
	   cout << "AI(F)=" << AI(F) << endl;
	   cout << endl;

	   cout << "weight(G)=" << weight(G) << endl;
	   cout << "deg(G)=" << deg(G) << endl;
	   if (Bal(G)) {
	     cout << "G is a balanced function" << endl;
	   } else {
	     cout << "G is a non-balanced function" << endl;
	   }
	   cout << "Degree of Correlation immunity of G=" << CI(G) << endl;
	   cout << "nl(G)=" << nl(G) << endl;
	   cout << "AI(G)=" << AI(G) << endl;
	   cout << endl;

	   concat(X,F,G);
	   cout << "The polynomial in ANF of the concatenation of F and G is ";
	   cout << endl;
	   Pol(cout,X);

	   cout << "weight(F concat G)=" << weight(X) << endl;
	   cout << "deg(F concat G)=" << deg(X) << endl;
	   if (Bal(X)) {
	     cout << "F concat G is a balanced function" << endl;
	   } else {
	     cout << "F concat G is a non-balanced function" << endl;
	   }
	   cout << "Degree of Correlation immunity of F concat G=" 
	   << CI(X) << endl;
	   cout << "nl(F concat G)=" << nl(X) << endl;
	   cout << "AI(F concat G)=" << AI(X) << endl;

	   return 0;
	}

If we use the Boolean functions :math:`1+x_3x_4+x_2+x_2x_4+x_1+x_1x_3+x_1x_3x_4` and :math:`x_3+x_2x_4+x_1+x_1x_4+x_1x_3x_4` as inputs, the output would be the following:

.. code-block:: c

	weight(F)=8
	deg(F)=3
	F is a balanced function
	Degree of Correlation immunity of F=0
	nl(F)=4
	AI(F)=2

	weight(G)=8
	deg(G)=3
	G is a balanced function
	Degree of Correlation immunity of G=0
	nl(G)=4
	AI(G)=2

	The polynomial in ANF of the concatenation of F and G is
	1+x4x5+x3+x3x5+x2+x2x4+x2x4x5
	weight(F concat G)=16
	deg(F concat G)=3
	F concat G is a balanced function
	Degree of Correlation immunity of F concat G=0
	nl(F concat G)=8
	AI(F concat G)=2

These results are congruent with the properties of this construction:

1. :math:`wt(F |_{c} G) = 8 + 8 = 16`.

2. :math:`\crit{deg}(F |_{c} G) = 3 \leq 1 + \max \left\{ 3, 3 \right\} = 1+3=4`.

3. *F* is *0*-resilient, *G* is *0*-resilient, and :math:`F |_{c} G` is *0*-resilient.

4. :math:`\crit{NL}(F |_{c} G) =8 \geq 4 + 4 = 8`.

5. If :math:`\crit{AI}(F) = \crit{AI}(G) = 2`, then :math:`\crit{AI}(F |_{c} G) = 2 \leq 2 + 1`.
