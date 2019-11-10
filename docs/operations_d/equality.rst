****************
Equality testing
****************

Description
===========

Let :math:`n \geq 1, m \geq 1`, :math:`F,G \in \funct{F}_{n,m}`. *F* and *G* are *equal* if their Truth Tables are the same.

Library
=======

We can compare two functions for equality with the following method: 

.. code-block:: c

   long operator==(VBF& F, VBF& G)
   long operator!=(VBF& F, VBF& G)

Example
-------

The following program informs if two Vector Boolean functions are equal given their Truth Tables.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F, G, X;
      NTL::mat_GF2 Tf, Tg;

      ifstream input1(argv[1]);
      if(!input1) {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input1 >> Tf;
      F.puttt(Tf);
      input1.close();

      ifstream input2(argv[2]);
      if(!input2) {
         cerr << "Error opening " << argv[2] << endl;
         return 0;
      }
      input2 >> Tg;
      G.puttt(Tg);
      input2.close();

      if (F == G) {
        cout << "F and G are equal" << endl;
      }  else {
        cout << "F and G are not equal" << endl;
      }
      
      return 0;
   }

The output for the execution of the example program with the code above and the Truth Tables of :math:`S_1` and :math:`S_2` DES S-boxes as inputs would be:

.. code-block:: console

	F and G are not equal 