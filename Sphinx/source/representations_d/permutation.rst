******************
Permutation matrix
******************

If *F* is a Boolean permutation, that is, it is bijective and has the same number of input bits as output bits :math:`(n=m)`, then it can be defined as an array: :math:`F = \begin{bmatrix} F(1)&\dots&F(n) \end{bmatrix}` where :math:`F(i)` is the image of the bit :math:`i` for *F*. 

A VBF class can be initialized giving its permutation matrix with the following method:

.. code-block:: c

   void putper(const NTL::vec_ZZ& v)

To obtain its representation as permutation matrix, the following method must be used:

.. code-block:: c

   void PER(NTL::vec_ZZ& v, VBF& F)

The following program shows how to use this function to print the permutation vector of *F* initialized by its permutation vector representation.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::vec_ZZ a, b;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }

      input >> a;
      F.putper(a);
      b = PER(F);

      cout << b << endl;

      input.close();
      return 0;
   }

