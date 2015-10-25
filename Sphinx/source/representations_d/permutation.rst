******************
Permutation matrix
******************

Description
===========

If *F* is a Boolean permutation, that is, it is bijective and has the same number of input bits as output bits *(n=m)*, then it can be defined as an array: :math:`F = \begin{bmatrix} F(1) & \dots & F(n) \end{bmatrix}` where :math:`F(i)` is the output bit of the input bit *i* for *F*. 

Library
=======

A VBF class can be initialized giving its permutation vector with the following method:

.. code-block:: c

	void putper(const NTL::vec_ZZ& v)

To obtain its representation as permutation vector, the following method must be used:

.. code-block:: c

	void PER(NTL::vec_ZZ& v, VBF& F)

Example
-------

The following program finds out the Truth Table of a Vector Boolean function having as input its Permutation Vector:

.. code-block:: console

	[ 1 2 3 4 13 14 15 16 9 10 11 12 5 6 7 8 ]

For example, you can see bit 13 moves to bit 5, while bit 5 moves to bit 13.

.. code-block:: c

#include <iostream>
#include <fstream>
#include "VBF.h"

int main(int argc, char *argv[])
{
   using namespace VBFNS;

   VBF          F;
   NTL::vec_ZZ  a;

   ifstream input(argv[1]);
   if(!input) {
      cerr << "Error opening " << argv[1] << endl;
      return 0;
   }
   input >> a;
   F.putper(a);
   input.close();

   cout << "The Truth Table is:" << endl;
   cout << TT(F) << endl;

   return 0;
}

The first 10 lines of the output of the program would be the following:

.. code-block:: console

The Truth Table is:
[[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
[0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0]
[0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0]
[0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0]
[0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0]
[0 0 0 0 0 1 0 1 0 0 0 0 0 0 0 0]
[0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0]
[0 0 0 0 0 1 1 1 0 0 0 0 0 0 0 0]
[0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0]
