**************
Walsh Spectrum
**************

A VBF class can be initialized giving its Walsh Spectrum with the following method:

.. code-block:: c

   void putwalsh(const NTL::mat_ZZ& W)

To obtain its representation as Walsh Spectrum, the following method must be used:

.. code-block:: c

   void Walsh(NTL::mat_ZZ& W, VBF& F)

It is a matrix whose rows are characterized by :math:`\vec{u} \in \gf{V_n}` and whose columns are characterized by :math:`\vec{v} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{WS}(F) \in \matr{M}_{2^n \times 2^m}(\bbbr)`. It holds that :math:`\walsh{\theta}_F(\vec{u},\vec{v}) = \matr{WS}(F)(\vec{u},\vec{v})`.  As :math:`\matr{WS}(F)(\vec{u},\vec{v})` measures the similarity between :math:`\vec{v} F(\vec{x})` and the linear function :math:`\vec{u}\vec{x}`, the spectrum :math:`\matr{WS}(F)` contains this similarity for all linear functions. The lower bound of the Walsh Spectrum values is :math:`-2^n` and the upper bound is :math:`2^n`.

The following program shows how to use this function to print the Walsh Spectrum of $F$ initialized by its Walsh Spectrum.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::mat_ZZ A, B;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }

      input >> A;
      F.putwalsh(A);
      B = Walsh(F);

      cout << B << endl;

      input.close();
      return 0;
   }
