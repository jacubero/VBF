************************
Autocorrelation Spectrum
************************

Description
===========

The Autocorrelation provides a useful description of a Vector Boolean function in relation to some cryptographic criteria. It is derived from the sequences of the component functions of the Vector Boolean function and does not uniquely determine the Vector Boolean function itself.

The *directional derivative* of :math:`f \in \funct{F}_n` in the direction of :math:`\vec{u} \in \gf{V_n}` is defined as :math:`\Delta_{\vec{u}}f(\vec{x}) = f(\vec{x}+\vec{u}) + f(\vec{x}), \  \  \vec{x} \in \gf{V_n}`. 

Similarly, the *directional derivative* of the sequence of a Boolean function :math:`\xi_f` in the direction of :math:`\vec{u} \in \gf{V_n}` is defined as: :math:`\Delta_{\vec{u}} \chi_f(\vec{x}) = \chi_f(\vec{x}+\vec{u}) \cdot \chi_f(\vec{x}), \  \  \vec{x} \in \gf{V_n}`.

The *autocorrelation* of :math:`f \in \funct{F}_n` with respect to the shift :math:`\vec{u} \in \gf{V_n}`, :math:`\R_{f}(\vec{u})`, is defined by the Polarity Truth Table to be:

.. math::

  \R_f(\vec{u}) = \sum_{\vec{x} \in \gf{V_n}} \chi_f(\vec{x})
  \chi_f(\vec{x}+\vec{u})

From this definition of the autocorrelation function we note two important properties:

* For every Boolean function :math:`\R_f(\vec{0})=2^n`, since :math:`\left(\chi_f(\vec{x}) \right)^2 = 1 \ \fa \vec{x} \in \gf{V_n}`.

* The value of :math:`\R_f(\vec{u})` when :math:`\vec{u} \neq \vec{0}` must be proportional to the correlation between :math:`f(\vec{x}+\vec{u})` and :math:`f(\vec{x})`, i.e.: :math:`\R_f(\vec{u}) = 2^n \cdot \Cor \left(f(\vec{x}+\vec{u}),f(\vec{x}) \right)`.  

The Aucorrelation Spectrum gives an indication of the imbalance of all first order derivatives of the component functions of a Vector Boolean function. As differential cryptanalysis exploits imbalanced derivatives of Vector Boolean functions, the Aucorrelation Spectrum is vital in the analysis.

*Autocorrelation Spectrum* is denoted by :math:`\matr{R}(F) \in
  \matr{M}_{2^n \times 2^m}(\bbbz)`. The columns of the matrix correspond to the Autocorrelation Spectrum of their component functions. The lower bound of the Autocorrelation Spectrum values is :math:`-2^n` and the upper bound is :math:`2^n`.

Linear structures
=================

If the *directional derivative* of :math:`f \in \funct{F}_n` in the direction of :math:`\vec{u} \in \gf{V_n}`: :math:`\Delta_{\vec{u}}f(\vec{x}) = f(\vec{x}+\vec{u}) + f(\vec{x})` is a constant function, then :math:`\vec{u}` is a *linear structure* of :math:`f` [Lai:95]_ [Chaum:E85]_. The zero vector :math:`\vec{0}` is a trivial linear structure since :math:`\Delta_{\vec{0}}f(\vec{x}) = 0 \ \ \fa \vec{x} \in \gf{V_n}`. From the point of view of autocorrelation, a vector in :math:`\gf{V_n}` is a linear structure if it satisfies the following:

The vector :math:`\vec{u} \in \gf{V_n}` is a linear structure of :math:`f` if and only if :math:`|\R_f(\vec{u})|= 2^n`.

The notion of linear structures can be extended for the case of Vector Boolean functions. The definition of a Vector Boolean function that has a linear structure was originally proposed by Chaum [Chaum:E85]_ and Evertse [Evertse:87]_. They defined that a Vector Boolean function *F* has a linear structure by considering the existence of nontrivial linear structure in any of the component functions of *F*.

:math:`F \in \funct{F}_{n,m}` is said to have a linear structure if there exists a nonzero vector :math:`\vec{u} \in \gf{V_n}` together with a nonzero vector :math:`\vec{v} \in \gf{V_m}` such that :math:`\vec{v} \cdot F(\vec{x}) + \vec{v} \cdot F(\vec{x}+ \vec{u})` takes the same value :math:`c \in \gf{GF(2)} \ \ \fa \vec{x} \in \gf{V_n}`. 

:math:`F \in \funct{F}_{n,m}` is said to have a linear structure if there exists a nonzero vector :math:`\vec{u} \in \gf{V_n}` together with a nonzero vector :math:`\vec{v} \in \gf{V_m}` such that :math:`|\R_{\vec{v} \cdot F}(\vec{u})|= 2^n`.

Nonlinear cryptographic functions used in block ciphers should have no nonzero linear structures [Evertse:87]_. The existence of nonzero linear structures, for the functions implemented in stream ciphers, is a potential risk that should also be avoided, despite the fact that such existence could not be used in attacks, so far.

Library
=======

To obtain its representation as Autocorrelation Spectrum, the following method must be used:

.. code-block:: c

  void AC(NTL::mat_ZZ& R, VBF& F)

The method used to obtain the linear structures is the following:

.. code-block:: c

	void LS(NTL_SNS ostream& s, VBF& F)

Example
-------

The following program finds out the Autocorrelation Spectrum of a Vector Boolean function together with its linear structures having as input its Truth Table.

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

     cout << "The Autocorrelation Spectrum is:" << endl;
     cout << AC(F) << endl;
     cout << endl << "The linear structures are: " << endl;
     LS(cout,F);

     return 0;
  }

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

  The Autocorrelation Spectrum is:
  [[16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16]
  [16 0 0 0 0 0 -8 -8 -8 -8 -8 8 0 0 8 8]
  [16 -8 0 -8 -8 0 0 8 8 -8 0 0 -8 8 -8 8]
  [16 0 0 0 0 0 0 -16 -8 8 0 0 0 0 -8 8]
  [16 0 -8 0 0 -16 0 8 0 8 -8 -8 -8 0 8 8]
  [16 0 0 -8 0 0 0 -8 0 -8 8 -8 0 -8 8 8]
  [16 -8 0 0 -8 0 -8 8 0 -8 0 0 8 0 -8 8]
  [16 0 -8 0 0 0 0 -8 0 8 0 0 0 -8 -8 8]
  [16 -8 -8 0 -8 0 0 8 -8 8 0 0 0 0 8 -8]
  [16 0 0 8 0 0 0 -8 0 -8 0 0 -8 0 8 -8]
  [16 8 0 0 8 0 8 8 -8 -8 0 -8 0 0 -8 -16]
  [16 0 -8 -8 0 16 -8 -8 8 8 -8 -8 8 8 -8 -8]
  [16 -8 8 -8 -8 0 -8 8 0 8 0 0 0 -8 8 -8]
  [16 0 0 0 0 0 8 -8 0 -16 0 0 0 0 8 -8]
  [16 8 0 8 8 0 0 8 0 -8 -8 0 0 -8 -16 -8]
  [16 0 8 0 0 -16 0 -8 0 8 8 8 -8 0 -8 -8]
  ]

  The linear structures are:
  ([0 0 1 1],[0 1 1 1])
  ([0 1 0 0],[0 1 0 1])
  ([1 0 1 0],[1 1 1 1])
  ([1 0 1 1],[0 1 0 1])
  ([1 1 0 1],[1 0 0 1])
  ([1 1 1 0],[1 1 1 0])
  ([1 1 1 1],[0 1 0 1])

We can notice that *NibbleSub* S-box has seven linear structures which are the following:

The figure represents the Autocorrelation Spectrum of *NibbleSub* and emphasizes in red the values corresponding these linear structures.

.. image:: /images/ls.png
   :width: 750 px
   :align: center

