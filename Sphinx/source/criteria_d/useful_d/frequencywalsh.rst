Frequency distribution of the absolute values of the Walsh Spectrum 
===================================================================

The method used to obtain this information is the following:

.. code-block:: c

   void FWH(NTL::mat_ZZ& X, VBF& F)

The following program prints the Frequency distribution of the absolute values of the Walsh Spectrum of a Vector Boolean Function given its ANF Table.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::mat_GF2 X;
      NTL::mat_ZZ  A;
      int i;
      int nofirst;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }

      input >> X;
      F.putanf(X);

      nofirst = 0;

      A = FWH(F);
      for (i = 0; i < A.NumRows(); i++) {
         if (A[i][0] != 0) {
            if (nofirst) {
               cout << ",";
            } else {
               nofirst = 1;
            }
            cout << "(" << 2*i << "," << A[i][0] << ")";
         }
      }

      input.close();

      return 0;
   }

An example of output for a Boolean Function could be: :math:`(0,129),(8,298),(16,60),(24,9),(32,2),(40,13),(512,1)`.

