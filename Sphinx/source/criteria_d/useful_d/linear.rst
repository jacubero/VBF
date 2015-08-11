Linear relations associated with an specific value of the Linear Profile
========================================================================

If we want to obtain the linear relations associated with the value of the Linear Profile "w", we will use this method:

.. code-block:: c

   void linear(NTL_SNS ostream& s, VBF& a, ZZ& w)

The following program prints the linear relations associated with a value of the Linear Profile of a Vector Boolean Function given its Truth Table and this value as arguments.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::mat_GF2 Tf;
      NTL::ZZ      w;

      // Load VBF definitions

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> Tf;
      F.puttt(Tf);

      w = to_ZZ(atoi(argv[2]));

      linear(cout,F,w);

      input.close();
      return 0;
   }

For instance, if we execute this program having the truth Table of the NibbleSub Sbox and the value 144, the output would be the following:

.. code-block:: console

   x4=y2+y3+y4
   x3=y1+y2+y3
   x3+x4=y1+y4
   x1=y1+y2+y3+y4
