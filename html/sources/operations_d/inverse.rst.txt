*******
Inverse
*******

Description
===========

Let :math:`n \geq 1$, $F \in \funct{F}_{n,n}`. :math:`F^{-1}` is the *functional inverse* of *F* if the composition of both functions results in the identity function. 

.. image:: /images/Inverse.png
   :width: 750 px
   :align: center

Library
=======

If a Vector Boolean Function $F \in \funct{F}_{n,n}$ is invertible, then we can find its inverse with the following method:

.. code-block:: c

	void inv(VBF& X, VBF& F)

Example
-------

The following program provides the Truth Table of a the inverse of a Vector Boolean function given its Truth Table.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F, X;
      NTL::mat_GF2 Tf;

      ifstream input1(argv[1]);
      if(!input1) {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input1 >> Tf;
      F.puttt(Tf);
      input1.close();

      inv(X,F);
      cout << "The Truth Table of the inverse of F is " << endl
      << TT(X) << endl;

      return 0;
   }

The output for the execution of the example program with the code above and the Truth Table of *NibbleSub* S-box as input will be:

.. code-block:: console

   The Truth Table of the inverse of F is
   [[1 1 1 0]
   [0 0 1 1]
   [0 1 0 0]
   [1 0 0 0]
   [0 0 0 1]
   [1 1 0 0]
   [1 0 1 0]
   [1 1 1 1]
   [0 1 1 1]
   [1 1 0 1]
   [1 0 0 1]
   [0 1 1 0]
   [1 0 1 1]
   [0 0 1 0]
   [0 0 0 0]
   [0 1 0 1]
   ]
