******************************************************
Cycle structure, fixed points and negated fixed points
******************************************************

Description
===========

The *cycle structure* of an invertible vector Boolean function :math:`F \in \funct{F}_{n,n}` (permutation) describes the number of cycles and their length.

A permutation can also be written in a way that groups together the images of a given number under repeated applications of *F*. For example, the permutation:

.. math::

F = \begin{bmatrix} 
1 & 2 & 3 & 4 & 5 & 6 & 7 & 8 & 9 \\
3 & 6 & 4 & 7 & 5 & 9 & 1 & 8 & 2
\end{bmatrix}

can be written

.. math::

	F = (1 3 4 7)(2 6 9)(5)(8)

The first group of numbers in parentheses indicates that 1 gets mapped to 3, 3 gets mapped to 4, 4 gets mapped to 7, and 7 gets mapped back to 1. Each of the other groupings is interpreted in a similar way. These groups of numbers are called cycles, and this notation for permutations is referred to as cycle notation. Following are several facts relating to cycles and cycle notation:

1. A cycle of *k* numbers is referred to as a *k*-cycle or a cycle of length *k*; for example, :math:`(1 3 4 7)` is a *4*-cycle or a cycle of length *4*.

2. A cycle of one number indicates that the number is mapped to itself, and 1-cycles are often referred to as *fixed points*. In the example above, there are two fixed points: *5* and *8*.

3. It does not matter which number is written first in a cycle, as long as the order of the numbers is preserved. For example, :math:`(1 3 4 7) = (4 7 1 3)`, but :math:`(1 3 4 7) \neq (1 4 3 7)`.

A cycle structure with a low number of cycles of high length is considered well suited to be used in cipher design. This fact means that many transpositions are present.

The *fixed points* of *F* are those which belong to the set :math:`\{ \vec{x} \given F(\vec{x})=\vec{x} \}`. The *negated fixed points* of *F* belong to the set :math:`\{ \vec{x} \given F(\vec{x})= \overline{\vec{x}} \}` where :math:`\overline{\vec{x}}` is the inverse of :math:`\vec{x}` or the vector resulting from adding $1$ to each of its components. 

A cryptographic primitive with a high number of fixed and/or
negated fixed points is considered to be not well designed, since it lacks the needed randomness.

Library
=======

The method used to obtain the Cycle Structure is the following:

.. code-block:: c

	void Cycle(NTL::vec_ZZ& v, VBF& F)

The method used to print the Cycle structure so that each row has two values separated by a comma: the first one is the Cycle length and the second one is the number of cycles for this length.

.. code-block:: c

	void printCycle(NTL_SNS ostream& s, VBF& F)

The fixed points of *F* are obtained by this method:

.. code-block:: c

	NTL::mat_GF2 fixedpoints(VBF& F)

The negated fixed points of *F* are obtained by this method:

.. code-block:: c

	NTL::mat_GF2 negatedfixedpoints(VBF& F)

Example
-------

The following program prints the cycle structure of a Vector Boolean function having as input its Truth Table.

.. code-block:: c

#include <iostream>
#include <fstream>
#include "VBF.h"

int main(int argc, char *argv[])
{
   using namespace VBFNS;

   VBF          F;
   NTL::mat_GF2 T;

   ifstream input(argv[1]);
   if(!input) {
      cerr << "Error opening " << argv[1] << endl;
      return 0;
   }
   input >> T;
   F.puttt(T);
   input.close();

   cout << "The Cycle Structure is:" << endl;
   printCycle(cout,F);

   cout << endl << "The fixed points are the following:"
   << endl;
   cout << fixedpoints(F) << endl;

   cout << endl << "The negated fixed points are the following:"
   << endl;
   cout << negatedfixedpoints(F) << endl;

   return 0;
}

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

The Cycle Structure is:
2,1
14,1

The fixed points are the following:
[]

The negated fixed points are the following:
[[0 0 1 0]
[0 1 1 1]
]

which means:

+---------------------------------+
| Cycle structure of *NibbleSub*  |
+==============+==================+
| Cycle length | Number of cycles |
+--------------+------------------+
| 2            | 1                |
+--------------+------------------+
| 14           | 1                |
+--------------+------------------+

It has no fixed points and 2 negated fixed points which are the following:

.. code-block:: console

[0 0 1 0]
[0 1 1 1]

This is because :math:`NibbleSub[(1,1,0,1)]=(0,0,1,0)` and :math:`NibbleSub[(1,0,0,0)]=(0,1,1,1)`.
