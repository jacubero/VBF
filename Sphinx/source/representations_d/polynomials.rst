******************
Polynomials in ANF
******************

Description
===========

Any vector Boolean function :math:`F \in \funct{F}_{n,m}` can be uniquely represented by *m* multivariate polynomials over :math:`\gf{GF(2)}` (called coordinate functions) where each variable has power at most one. Each of these polynomials can be expressed as a sum of all distinct $k$th-order product terms :math:`(0 < k \leq n)` of the variables in the form: 

.. math::

   \begin{array}{ll}
   f(x_1,\dots,x_n) &= a_0+a_1 x_1+\dotsb+a_n
   x_n+a_{12}x_1x_2+\dotsb+a_{n-1,n}x_{n-1}x_n+\dotsb \\ &+a_{12\dots n}x_1x_2\dots x_n 
   = \sum_{\set{I} \in \set{P}(N)} a_{\set{I}}\left(\prod_{i \in \set{I}} x_i\right) = \sum_{\set{I} \in \set{P}(N)} a_{\set{I}} x^{\set{I}}, \ \ a_{\set{I}} \in \gf{GF(2)}
   \end{array}

where :math:`\set{P}(N)` denotes the power set of :math:`N=\{1,\dots,n\}`. This representation of *f* is called the *algebraic normal form (ANF)* of *f*. The algebraic normal form is thus a set of multivariate polynomials and the constant functions (those obtained by decomposition) are the coefficients of the $2^n$ products of input variables (i.e. monomials).

Library
=======

A VBF class can be initialized giving its Polynomials in ANF with the following method:

.. code-block:: c

   void putpol(vec_pol& p)

To obtain its representation as Polynomials in ANF, the following method must be used:

.. code-block:: c

   void Pol(NTL_SNS ostream& s, VBF& F)

Example
-------

The following program provides the Polynomials in ANF Vector Boolean function from its Truth Table. 

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::mat_GF2 T;
    
      ifstream input(argv[1]);
      if(!input) {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> T;
      F.puttt(T);
      input.close();

      Pol(cout,F);

      return 0;
   }

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

   1+x4+x2+x2x3+x2x3x4+x1+x1x2+x1x2x3
   1+x3x4+x2+x2x4+x1+x1x3+x1x3x4
   1+x4+x3+x3x4+x2x4+x2x3+x1x4+x1x3+x1x2+x1x2x4+x1x2x3
   x3+x2x4+x1+x1x4+x1x3x4

which corresponds to the coordinate functions of *NibbleSub* as follows:

.. math::

   \begin{array}{ll}
   &f_1(NibbleSub) = 1+x_4+x_2+x_2x_3+x_2x_3x_4+x_1+x_1x_2+x_1x_2x_3 \\
   &f_2(NibbleSub) = 1+x_3x_4+x_2+x_2x_4+x_1+x_1x_3+x_1x_3x_4 \\
   &f_3(NibbleSub) = 1+x_4+x_3+x_3x_4+x_2x_4+x_2x_3+x_1x_4+x_1x_3+x_1x_2+x_1x_2x_4+x_1x_2x_3 \\
   &f_4(NibbleSub) = x_3+x_2x_4+x_1+x_1x_4+x_1x_3x_4 \\
   \end{array}
