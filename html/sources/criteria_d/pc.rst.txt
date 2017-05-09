*********************
Propagation criterion
*********************

Description
===========

This criterion is based on the properties of the derivatives of Boolean functions and describes the behavior of a function whenever some input bits are complemented. This concept was introduced by Preneel et al. in [PreneelLLGV90]_ and it is a generalization of the Strict Avalanche Criterion (SAC) defined by Webster and Tavares in [c85-Webster-Tavares]_.

:math:`f \in \funct{F}_{n}` is said to satisfy the propagation characteristics with respect to :math:`\vec{u} \in \gf{V_n}` if and only if :math:`f(\vec{x})+f(\vec{x}+\vec{u})` is balanced.

A function :math:`f \in \funct{F}_n` satisfies the propagation criterion of degree *l* (:math:`\crit{PC}(l)`) if and only if complementing any *l* or fewer of the input bits complements exactly half of the function values.

Let :math:`f \in \funct{F}_n` and :math:`l \in \left\{1,\dots,n\right\}`, *f* satisfies the propagation criterion of degree *l* if and only if :math:`f(\vec{x})+f(\vec{x}+\vec{u}) \mbox{ balanced } \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq l`.

Let :math:`f \in \funct{F}_n$ and $l \in \left\{1,\dots,n\right\}`, *f* satisfies the propagation criterion of degree *l* if its Autocorrelation Matrix elements, at values of the nonzero vector indexes whose weight at most *l*, is zero: :math:`\R_f(\vec{u}) = 0, \ \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq l`

:math:`F \in \funct{F}_{n,m}` satisfies the propagation criterion of degree :math:`l \ (\crit{PC}(l))` if any component function of *F* satisfies the :math:`\crit{PC}(l)`. This criterion can be obtained from the Autocorrelation Spectrum in the following way: :math:`\R_F(\vec{u},\vec{v})=0, \ \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq l, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}`

Library
=======

The method used to obtain this criterion is the following:

.. code-block:: c

	void PC(int& k, VBF& F)

Example
-------

The following program provides the degree of propagation criterion of a Vector Boolean function given its Truth Table.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      vec_pol p;
      int t;

      ifstream input(argv[1]);
      if(!input) {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> p;
      F.putpol(p);
      input.close();

      cout << "The function is PC of degree " << PC(F) << endl;

      return 0;
   }

If we use the function :math:`f = x_1x_2+x_3x_4` polynomial in ANF as input, the output would be the following:

.. code-block:: console

	The function is PC of degree 4

The following figure represents the Autocorrelation Spectrum of *f* and emphasizes in red the rows whose indexes are of weight 1,2,3 and 4.

.. image:: /images/pc.png
   :align: center

For all this rows, the Autocorrelation values are 0. As a consequence *f* satisfies :math:`\crit{PC}(4)`.
