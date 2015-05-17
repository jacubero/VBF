*********
ANF table
*********

A VBF class can be initialized giving its ANF table with the following method:

.. code-block:: c

   void putanf(const NTL::mat_GF2& A)

To obtain its representation as ANF table, the following method must be used:

.. code-block:: c

   void ANF(NTL::mat_GF2& X, VBF& F)

The ANF table of *F*, denoted by :math:`\matr{ANF}_F \in \matr{M}_{2^n \times m}(\gf{GF(2)})`, represents the :math:`2^n` coefficients of the polynomials of each of the :math:`m` coordinate functions in *ANF*.

The following program shows how to use this function to print the ANF Table of *F* initialized by its ANF table.

.. code-block:: c
 
   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::mat_GF2 A, B;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }

      input >> A;
      F.putanf(A);
      B = ANF(F);

      cout << B << endl;

      input.close();
      return 0;
   }
      
