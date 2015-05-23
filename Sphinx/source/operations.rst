##########################################################
Operations and constructions over Vector Boolean Functions
##########################################################

.. contents::
   :local:
   :depth: 2

In this chapter, the operations over Vector Boolean Functions supported by the VBF library are described. We consider operations to identify if two VBF class are equal, to compose two functions, to find out the inverted function, to implement the sum and the direct sum of functions, to add coordinate functions to a given Vector Boolean Function, to bricklayer bricklayering (parallel application of Vector Boolean Functions as employed in Rijndael cipher [DaemenR:02]_).

In order to illustrate the use of these methods, we are going to use two Vector Boolean Functions :math:`F,G \in \funct{F}_{4,4}` with the following Truth Tables:

:math:`\matr{T}_F=`

.. code-block:: console

   [[0 0 1 1]
   [1 0 0 0]
   [1 1 1 1]
   [0 0 0 1]
   [1 0 1 0]
   [0 1 1 0]
   [0 1 0 1]
   [1 0 1 1]
   [1 1 1 0]
   [1 1 0 1]
   [0 1 0 0]
   [0 0 1 0]
   [0 1 1 1]
   [0 0 0 0]
   [1 0 0 1]
   [1 1 0 0]]

:math:`\matr{T}_G=`

.. code-block:: console

   [[1 1 1 1]
   [1 1 0 0]
   [0 0 1 0]
   [0 1 1 1]
   [1 0 0 1]
   [0 0 0 0]
   [0 1 0 1]
   [1 0 1 0]
   [0 0 0 1]
   [1 0 1 1]
   [1 1 1 0]
   [1 0 0 0]
   [0 1 1 0]
   [1 1 0 1]
   [0 0 1 1]
   [0 1 0 0]]

In this chapter, we will use the program below as a template to illustrate the use of operations' methods. The line "[ Operation code ]" can be substituted by the code described for each method in order to execute this example program.

.. code-block:: c
 
   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F, G, X;
      NTL::mat_GF2 Tf, Tg;

      // Load VBF definitions

      ifstream input1(argv[1]);
      if(!input1)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input1 >> Tf;
      F.puttt(Tf);
      input1.close();

      ifstream input2(argv[2]);
      if(!input2)
      {
         cerr << "Error opening " << argv[2] << endl;
         return 0;
      }
      input2 >> Tg;
      G.puttt(Tg);
      input2.close();

      [ Operation code ]
   
      return 0;
   }

.. include::
   operations_d/equality.rst

.. include::
   operations_d/composition.rst

.. include::
   operations_d/inverse.rst

.. include::
   operations_d/sum.rst

.. include::
   operations_d/directsum.rst

.. include::
   operations_d/addition.rst

.. include::
   operations_d/bricklayer.rst

.. include::
   operations_d/summary.rst
