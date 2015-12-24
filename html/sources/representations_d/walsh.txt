**************
Walsh Spectrum
**************

Description
===========

Linear and affine functions are considered as cryptographically weak functions. It is important to measure if a Vector Boolean function has some similarity with these functions. The similarity is measured by means of correlation. The values of Walsh Spectrum provide a measure of the correlation of the Vector Boolean function with the different Vector Boolean Linear functions. 

Let :math:`\matr{H_n}` be the Walsh-Hadamard matrix of order :math:`2^n`, then the vectors associated with its columns constitute an orthogonal basis for :math:`\bbbr^{2^n}` over :math:`\bbbr` so that:

.. math::

	\vec{x} \matr{H_n} = \vec{y} , \fa \vec{x}, \vec{y} \in 	\bbbr^{2^n} 

Let :math:`f \in \funct{F}_n`, its sequence :math:`\xi_f \in \bbbr^{2^n}` can be defined as a linear combination of the sequences of all the linear functions over :math:`\gf{V_n}`, as they coincide with the rows of :math:`\matr{H_n}`.

.. math::

	\xi_f = a_{\boldsymbol{\alpha_{0}}} \xi_{l_{\boldsymbol	{\alpha_{0}}}} + \dots + a_{\boldsymbol{\alpha_{2^n-1}}} 	\xi_{l_{\boldsymbol{\alpha_{2^n-1}}}}  

where :math:`a_{\vec{u}} = \frac{1}{2^n} \left\langle \xi_f, \xi_{l_{\vec{u}}} \right\rangle`

Let a Boolean function :math:`f \in \funct{F}_n`, the *Walsh Transform* of *f* at :math:`\vec{u} \in \gf{V_n}` is the *n*-dimensional Discrete Fourier Transform and can be calculated as follows:

.. math::

	\W_f(\vec{u}) = \walsh{\chi}_f(\vec{u}) = \W\{ \xi_f \}	(\vec{u}) = \left\langle \xi_f, \xi_{l_{\vec{u}}} \right	\rangle = \sum_{\vec{x} \in \gf{V_n}} \chi_f(\vec{x}) 	\chi_{\vec{u}}(\vec{x}) 

or, as it is most often written as:

.. math::

	\W_f(\vec{u}) = \sum_{\vec{x} \in \gf{V_n}} (-1)^{f(\vec	{x}) + \vec{u} \cdot \vec{x}} 

As a result, the Walsh Transform of :math:`f \in \funct{F}_n` at :math:`\vec{u}` is the coefficient of the sequence of *f* (:math:`\xi_f`) with respect to the basis constituted by the sequences of linear functions, scaled by a factor of :math:`\frac{1}{2^n}`. If :math:`\W_f` is the Walsh transform of *f*, we say that :math:`\xi_f` and :math:`\W_f` form a Transform pair and write:

.. math::

	\begin{array}{rcl}
    	\xi_f&\stackrel{W}{\longleftrightarrow}&\W_f \ \ ( \xi_f \mbox{ corresponds to } \W_f ) 
	\end{array}

The *Walsh Spectrum* of *f* can be represented by a matrix whose rows are indexed by :math:`\vec{u} \in \gf{V_n}` in lexicographic order, denoted by :math:`\matr{WS}(f) \in \matr{M}_{2^n \times 1}(\bbbr)` and defined as follows:

.. math::

    \matr{WS}(f) = \begin{bmatrix} \walsh{\chi}_f(\boldsymbol	{\alpha_0})&\dots&\walsh{\chi}_f(\vec{u})&\dots&\walsh	{\chi}_f(\boldsymbol{\alpha_{2^n-1}}) \end{bmatrix}^{T} 

where :math:`\walsh{\chi}_f(\vec{u})` is the value of the spectrum at :math:`\vec{u}`. A Boolean function is uniquely determined by its Walsh Spectrum.

Let the vector Boolean function :math:`F \in \funct{F}_{n,m}`, the *Walsh Transform* of *F* is the two-dimensional Walsh Transform defined by:

.. math::

  \begin{array}{rcl}
  \W_F(\vec{u}, \vec{v}) &=& \walsh{\theta}_F(\vec{u}, \vec{v}) = \W\{ \matr{Img(F)} \}(\vec{u}, \vec{v}) = \sum_{\vec{x} \in \gf{V_n}} \sum_{\vec{y} \in \gf{V_m}} \theta_F(\vec{x},\vec{y}) \chi_{(\vec{u},\vec{v})}(\vec{x},\vec{y})
  \end{array} 

or, as it is most often written as:

.. math::

  \W_F(\vec{u}, \vec{v}) = \walsh{\theta}_F(\vec{u}, \vec{v}) = \sum_{\vec{x} \in \gf{V_n}} (-1)^{\vec{u} \cdot \vec{x} + \vec{v} \cdot F(\vec{x})} 

The *Walsh Spectrum* of *F* can be represented by a matrix whose rows are indexed by :math:`\vec{u} \in \gf{V_n}` and whose columns are indexed by :math:`\vec{v} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{WS}(F) \in \matr{M}_{2^n \times 2^m}(\bbbr)` and defined as follows:

.. math::

  \matr{WS}(F) = \begin{bmatrix} \walsh{\theta}_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_0})&\dots&\walsh{\theta}_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_{2^m-1}}) \\
  \walsh{\theta}_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_0})&\dots&\walsh{\theta}_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_{2^m-1}}) \\
  \hdotsfor[2]{3}\\
  \walsh{\theta}_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_0})&\dots&\walsh{\theta}_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_{2^m-1}}) \\
  \end{bmatrix} 

where :math:`\walsh{\theta}_F(\vec{u},\vec{v})` is the value of the spectrum at :math:`(\vec{u},\vec{v})`.

We can deduce that the columns of this matrix are the spectra of the Boolean functions :math:`l_{\vec{v}} \circ F` for all the linear functions :math:`l_{\vec{v}} \in \funct{L}_m`.

Library
=======

A VBF class can be initialized giving its Walsh Spectrum with the following method:

.. code-block:: c

	void putwalsh(const NTL::mat_ZZ& W)

To obtain its representation as Walsh Spectrum the following method must be used:

.. code-block:: c

	void Walsh(NTL::mat_ZZ& W, VBF& F)

Example
-------

The following program provides the Walsh Spectrum of a Vector Boolean function from its Truth Table.

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

     cout << "The Walsh Spectrum is:" << endl;
     cout << Walsh(F) << endl;

     return 0;
  }

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

  The Walsh Spectrum is:
  [[16 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
  [0 0 -4 -4 0 0 -4 12 4 4 0 0 4 4 0 0]
  [0 0 -4 -4 0 0 -4 -4 0 0 4 4 0 0 -12 4]
  [0 0 0 0 0 0 0 0 4 -12 -4 -4 4 4 -4 -4]
  [0 4 0 -4 -4 -8 -4 0 0 -4 0 4 4 -8 4 0]
  [0 -4 -4 0 -4 0 8 4 -4 0 -8 4 0 -4 -4 0]
  [0 4 -4 8 4 0 0 4 0 -4 4 8 -4 0 0 -4]
  [0 -4 0 4 4 -8 4 0 -4 0 4 0 8 4 0 4]
  [0 0 0 0 0 0 0 0 -4 4 4 -4 4 -4 -4 -12]
  [0 0 -4 -4 0 0 -4 -4 -8 0 -4 4 0 8 4 -4]
  [0 8 -4 4 -8 0 4 -4 4 4 0 0 4 4 0 0]
  [0 8 0 -8 8 0 8 0 0 0 0 0 0 0 0 0]
  [0 -4 8 -4 -4 0 4 0 4 0 4 8 0 4 0 -4]
  [0 4 4 0 -4 8 0 4 -8 -4 4 0 4 0 0 4]
  [0 4 4 0 -4 -8 0 4 -4 0 0 -4 -8 4 -4 0]
  [0 -4 -8 -4 -4 0 4 0 0 -4 8 -4 -4 0 4 0]
  ]

We can see that the Walsh Spectrum of :math:`f_1(NibbleSub)` where 

.. math::

  NibbleSub=(f_1(NibbleSub),f_2(NibbleSub),f_3(NibbleSub),f_4(NibbleSub))

corresponds to the Spectrum of :math:`l_{(1,0,0,0)} \circ NibbleSub`. As a consequence, the Walsh Spectrum of :math:`f_1(NibbleSub)` coincides with the *9*-th column of :math:`\matr{WS}(NibbleSub)`, that is, the column indexed by the vector :math:`(1,0,0,0)`.