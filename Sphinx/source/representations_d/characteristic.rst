***********************
Characteristic Function
***********************

Description
===========

The *characteristic or indicator* function of :math:`F \in \funct{F}_{n,m}`, denoted by :math:`\theta_F : \gf{V_n} \times \gf{V_m} \to \left\{0,1\right\}`, is defined by: :math:`\theta_{F}(\vec{x},\vec{y}) = \left\{ \begin{array}{cc} 1 & \mbox{if }\vec{y}=F(\vec{x}) \\ 0 & \mbox{if }\vec{y} \neq F(\vec{x}) \end{array} \right.` 

The Image of *F* can be represented by a matrix whose rows are indexed by :math:`\vec{x} \in \gf{V_n}` and whose columns are indexed by :math:`\vec{y} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{Img(F)} \in \matr{M}_{2^n \times 2^m}(\gf{GF(2)})` and defined as follows:

.. math::

  \matr{Img(F)} = \begin{bmatrix} \theta_{F}(\boldsymbol{\alpha_0},\boldsymbol{\alpha_0})&\dots&\theta_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_{2^m-1}}) \\
  \theta_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_0})&\dots&\theta_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_{2^m-1}}) \\
  \hdotsfor[2]{3}\\
  \theta_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_0})&\dots&\theta_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_{2^m-1}}) \\
  \end{bmatrix} 

where :math:`\theta_{F}(\vec{x},\vec{y})` is the value of the indicator function at :math:`(\vec{x},\vec{y})`.

It is clear that all the rows of the matrix :math:`\matr{Img(F)}` have one element equal to one and the rest is zero, that is :math:`\ \fa i \in \{1,\dots,2^n\}`:

.. math::

  \begin{array}{rcl}
  \matr{Img(F)}_i &=& \begin{bmatrix} a_{i1}&\dots&a_{i2^m} \end{bmatrix} \\
  \mbox{ where } \left( \exists!j \in \{1,\dots,2^m\} \ a_{ij}=1 \right) &\wedge& \left( a_{ik} = 0 \ \fa k \neq j \in \{1,\dots,2^m\} \right) 
  \end{array}

The Image of *F* can be derived from the Truth Table by a method implemented in the VBF library called *charfunct*. The Truth Table can be obtained from the Characteristic function using a method we call *truthtable*.

Library
=======

A VBF class can be initialized giving its Image with the following method:

.. code-block:: c

  void putchar(const NTL::mat_ZZ& C)

To obtain its representation as Image, the following method must be used:

.. code-block:: c

  void Charact(NTL::mat_ZZ& C, VBF& F)

Example
-------

The following program provides the Image of a Vector Boolean function from its Truth Table.

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
     if(!input)  {
        cerr << "Error opening " << argv[1] << endl;
        return 0;
     }
     input >> T;
     F.puttt(T);
     input.close();

     cout << "The Image is:" << endl;
     cout << Charact(F) << endl;

     return 0;
  }

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

  The Image is:
  [[0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0]
  [0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0]
  [0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0]
  [0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
  [0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0]
  [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1]
  [0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0]
  [0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0]
  [0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0]
  [0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0]
  [0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0]
  [0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0]
  [0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0]
  [0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0]
  [1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
  [0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0]
  ]

This matrix can be easily interpreted with the aid of the figure in which the rows and columns are indexed with the corresponding vector:

.. image:: /images/image.png
   :width: 750 px
   :align: center

You can see for instance that the output of *0000* is *1110*.
