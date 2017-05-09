********************
Trace representation
********************

Description
===========

We identify a Boolean function in *n* variables with a function from :math:`\gf{GF(2^n)}` to :math:`\gf{GF(2)}` and Vector Boolean function in *n* variables with a function from :math:`\gf{GF(2^n)}` to :math:`\gf{GF(2^n)}`.

A *trace* is a function over a finite field :math:`\gf{GF(2^n)}` defined as: :math:`tr(\vec{x}) = \sum_{i=0}^{2^n-1} x^i`

Since there is is an isomorphism between :math:`\gf{V_n}` and :math:`\gf{GF(2^n)}`, it is possible to identify the trace function with a Boolean function in *n* variables. Analogously, a Vector Boolean function can be identified with trace as follows:
 
When *m=n*, we endow :math:`\gf{V_n}` with the structure of the field :math:`\gf{GF(2^n)}`. Any :math:`F \in \funct{F}_{n,n}` admits a unique *univariate polynomial representation* over :math:`\gf{GF(2^n)}`, of degree at most :math:`2^n-1`: 

.. math::

   F(\vec{x}) = \sum_{i=0}^{2^n-1} \delta_i x^i, \ \delta_i \in \gf{GF(2^n)}

A general way to derive this polynomial representation is given by a Lagrange interpolation from the knowledge of the irreducible polynomial of degree *n* over :math:`\gf{GF(2)}` associated with the field :math:`GF(2^n)` and the Truth Table of *F*.

The *interpolation attack* [JakobsenK:97]_ is efficient when the degree of the univariate polynomial representation of the S-box over :math:`\gf{GF(2^n)}` is low or when the distance of the S-box to the set of low univariate degree functions is small. This attack exploits the low degree of the algebraic relation between some input (respective output) and intermediate data to infer some keybits relating the output (respective input) and the intermediate data.

Library
=======

A VBF class can be initialized giving its trace *f* and the irreducible polynomial *g* with the following methods:

.. code-block:: c

	void putirrpol(GF2X& g)
	void puttrace(string& f)

To obtain a Vector Boolean function trace representation the following method must be used:

.. code-block:: c

	void Trace(GF2EX& f, VBF& F)

and to print the trace representation use the following method:

.. code-block:: c

	void print(NTL_SNS ostream& s, GF2EX& f, const long& m)

Example
-------

The following program provides the Trace representation over :math:`\gf{GF(2^n)}` of a Vector Boolean function with Truth Table in a file with extension ".tt". :math:`\gf{GF(2^n)}` is constructed with the irreducible polynomial whose corresponding GF2X representation is in a file with extension ".irr". The class GF2X implements polynomial arithmetic modulo 2 and a polynomial is represented as a coefficient vector.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;

	   VBF          F;
	   NTL::mat_GF2 T;
	   GF2X g;
	   GF2EX f;
	   int d;
	   char file[33];

	   sprintf(file,"%s.irr",argv[1]);
	   ifstream input1(file);
	   if(!input1) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }
	   input1 >> g;
	   F.putirrpol(g);
	   input1.close();

	   sprintf(file,"%s.tt",argv[1]);
	   ifstream input(file);
	   if(!input) {
	      cerr << "Error opening " << file << endl;
	      return 0;
	   }
	   input >> T;
	   F.puttt(T);
	   input.close();

	   cout << "The trace representation is " << endl;
	   f = Trace(F);
	   d = deg(g);
	   print(cout,f,d);

	   return 0;
	}

In this cipher, :math:`\gf{GF(2^8)}` is constructed with the irreducible polynomial :math:`g(\vec{x}) = {\vec{x}}^8+{\vec{x}}^4+{\vec{x}}^3+\vec{x}+\vec{1}`. The inputs of this program would be the Truth Table of :math:`S_{RD}` in a file with extension ".tt" and the corresponding GF2X representation of :math:`g: [1 1 0 1 1 0 0 0 1]` in a file with extension ".irr". The output of the program would be a GF2EX which represents polynomials over GF2E, and so can be used, for example, for arithmetic in :math:`\gf{GF(2^n)}`:

.. math::

	05 \cdot x^{254} + 09 \cdot x^{253} + f9 \cdot x^{251} + 25 \cdot x^{247} + f4 \cdot x^{239} + 01 \cdot x^{223} + b5 \cdot x^{191} + 8f \cdot x^{127} + 63

The coefficients are elements of :math:`\gf{GF(2^8)}`.