***********************
Characteristic Function
***********************

A VBF class can be initialized giving its Characteristic Function with the following method:

.. code-block:: c

   void putchar(const NTL::mat_ZZ& C)

To obtain its representation as Characteristic Function, the following method must be used:

.. code-block:: c

   void Charact(NTL::mat_ZZ& C, VBF& F)

It is a matrix whose rows are indexed by :math:`\vec{x} \in \gf{V_n}` and whose columns are indexed by :math:`\vec{y} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{Img(F)} \in \matr{M}_{2^n \times 2^m}(\gf{GF(2)})` and defined as follows: 

.. math::
   :nowrap:

   \begin{equation*}
      \matr{Img(F)} = \begin{bmatrix}
        \theta_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_0})&\dots&\theta_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_{2^m-1}}) \\ 
        \theta_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_0})&\dots&\theta_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_{2^m-1}}) \\ 
        \hdotsfor[2]{3}\\
        \theta_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_0})&\dots&\theta_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_{2^m-1}}) \\ 
      \end{bmatrix}
   \end{equation*}

where :math:`\theta_F(\vec{x},\vec{y})` stands for the indicator function defined in :ref:`Indicator Function <IndicatorFunction>`.

The following program shows how to use this function to print the Characteristic Function of *F* initialized by its Characteristic Function.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF F;
      NTL::mat_ZZ A, B;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }

      input >> A;
      F.putchar(A);
      B = Charact(F);

      cout << B << endl;

      input.close();
      return 0;
   }
