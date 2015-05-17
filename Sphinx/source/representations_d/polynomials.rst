******************
Polynomials in ANF
******************

A VBF class can be initialized giving its Polynomials in ANF with the following method:

.. code-block:: c

   void putpol(vec_pol& p)

To obtain its representation as Polynomials in ANF, the following method must be used:

.. code-block:: c

   void Pol(NTL_SNS ostream& s, VBF& F)

*F* can be uniquely represented by :math:`m` multivariate polynomials over :math:`\gf{GF(2)}` (called coordinate functions) where each variable has power at most one. Each of these polynomials can be expressed as a sum of all distinct :math:`k`th-order product terms :math:`(0 < k \leq n)` of the variables in the form:

.. math::
   :nowrap:

   \begin{equation}
      \begin{array}{ll}
         f(x_1,\dots,x_n) &= a_0+a_1 x_1+\dotsb+a_nx_n+a_{12}x_1x_2+\dotsb+a_{n-1,n}x_{n-1}x_n+\dotsb \\ &+a_{12\dots n}x_1x_2\dots x_n = \sum_{\set{I} \in \set{P}(N)} a_{\set{I}}\left(\prod_{i \in \set{I}} x_i\right) = \\
         & \sum_{\set{I} \in \set{P}(N)} a_{\set{I}} x^{\set{I}}, \ \ a_{\set{I}} \in \gf{GF(2)}
      \end{array}
   \end{equation}

where :math:`\set{P}(N)` denotes the power set of :math:`N=\{1,\dots,n\}`. This representation of *f* is called the *algebraic normal form (ANF)* of *f*. The algebraic normal form is thus a set of multivariate polynomials and the constant functions (those obtained by decomposition) are the coefficients of the :math:`2^n` products of input variables (i.e. monomials).

The following program shows how to use this function to print the Polynomials of *F* initialized by its polynomials in ANF.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      vec_pol      p;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> p;

      F.putpol(p);
      input.close();

      Pol(cout,F);

      return 0;
   }
