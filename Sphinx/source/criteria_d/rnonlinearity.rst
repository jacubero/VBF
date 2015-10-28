***********************
r-th order nonlinearity
***********************

Description
===========

As well as the affine functions, we can consider that functions with low algebraic degree are weak functions from the cryptographic point of view. A criterion can be defined en terms of the Hamming distance to the Reed-Muller code of order :math:`r (r < n)`.

For every positive integer *r*, the *r-th order nonlinearity* of a Vector Boolean function *F* is the minimum *r*-th order nonlinearity of its component functions. The *r*-th order nonlinearity of a Boolean function equals its minimum Hamming distance to functions of algebraic degrees at most *r* (see [carlet2008higher]_ for details).

.. math::

	\crit{NL}_r(F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \crit{NL}_r(\vec{v} \cdot
	F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \min_{f \in \funct{F}_n} d(f,\vec{v} \cdot F) 

Computing *r*th-order nonlinearity is not an easy task for :math:`r \geq 2`. Unlike the first-order nonlinearity there are no efficient algorithms to compute second-order nonlinearities for :math:`n \geq 11`. VBF library naive exhaustive search is employed for this purpose.

Library
=======

The method used to obtain this criterion is the following:

.. code-block:: c

	void nlr(long& x, VBF& F, int r)

This method return -1 if the number of functions to check is too large (greater than the maximum value of a long int variable).

Example
-------

The following program provides the *2*-nd order nonlinearity of a Vector Boolean function given its Truth Table.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F;
	   NTL::mat_GF2 T;
	   long a;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input >> T;
	   F.puttt(T);
	   input.close();

	   nlr(a,F,2);
	   cout << "The 2-nd order nonlinearity of the function is "
	   << a << endl;

	   return 0;
	}

If we use the *NibbleSub* S-box Truth Table as input, the output would be the following:

.. code-block:: console

	The 2-nd order nonlinearity of the function is 0

This result is congruent to the fact that its algebraic degree is *2*.