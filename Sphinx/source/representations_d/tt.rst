***********
Truth Table
***********

Description
===========

A Vector Boolean function :math:`F \in \funct{F}_{n,m}` can be uniquely represented by its Truth Table which is a matrix with :math:`2^n` rows and *m* columns whose elements are the values of *F* taken on all possible vector of :math:`\gf{V_n}` ordered lexicographically.

Let :math:`F \in \funct{F}_{n,m}`, if we take into account the one-to-one mapping of :math:`\gf{V_n}` onto the set of integers, we are able to define any vector Boolean function by the corresponding set of values:

.. math::

    F(\boldsymbol{\alpha_i}) \in \gf{V_m} \  \  \fa i \in \{0,\dots,2^n-1\} 

The matrix with :math:`2^n` rows and :math:`m` columns will be referred as the *Truth Table* of *F* and will be generally written as :math:`\matr{TT}_F`:

.. math::

   \matr{TT}_F=\begin{bmatrix} f_1(\boldsymbol{\alpha_0})&\dots&f_{m}(\boldsymbol{\alpha_0}) \\
   f_1(\boldsymbol{\alpha_1})&\dots&f_{m}(\boldsymbol{\alpha_1}) \\
   \hdotsfor[2]{3} \\
   f_1(\boldsymbol{\alpha_{2^n-1}})&\dots&f_{m}(\boldsymbol{\alpha_{2^n-1}}) \end{bmatrix} 

each :math:`\boldsymbol{\alpha_i} = (x_1,\dots ,x_n) \in \gf{V_n} \  \  i \in
\{1,\dots,2^n-1\}` is a vector whose decimal equivalent is
:math:`dec(\boldsymbol{\alpha_i})=i=\sum_{j=1}^{n} x_j 2^{n-j}`, and all
the vectors of :math:`\gf{V_n}` can be listed so that :math:`\boldsymbol{\alpha_0} <
\boldsymbol{\alpha_1} < \dotsb < \boldsymbol{\alpha_{2^{n-1}}}`.

As a total order is defined over the assignments (inputs) of the Vector Boolean Function, the Truth Table can be uniquely represented by this matrix. Any function *F* can be uniquely described by its Truth Table :math:`\matr{TT}_F \in \matr{M}_{2^n \times m}(\gf{GF(2)})` (or by the Truth Tables of its coordinate functions :math:`\matr{TT}_{f_i} \  \  i \in \{1,\dots,m\}`) and it holds that:

.. math::

   \begin{array}{rcl}
    \gamma:\funct{F}_{n,m} &\to& \matr{M}_{2^n \times m}(\gf{GF(2)}) \\
      F &\to& \matr{TT}_F 
   \end{array}

is an isomorphism between the vector spaces :math:`\funct{F}_{n,m}` and :math:`\matr{M}_{2^n \times m}(\gf{GF(2)})`, so that :math:`\#\funct{F}_{n,m}=2^{2^n \cdot m}`.

The Truth Table for an *n*-variable Boolean function *f* should be in
lexicographical form, i.e., :math:`\matr{TT}_f = (f(0),f(1),f(2),\ldots,f(2^{n-1}))`. Since the
Truth Table length might be too large, we represent it in hexadecimal
rather than in binary notation. The hexadecimal Truth Table is obtained
by replacing each four bits by their corresponding
hexadecimal form. For instance, to enter :math:`\matr{TT}_f = (0, 0, 1, 1, 1, 1, 1, 1)`
one should just write :math:`\matr{TT}_f=3f`. 

The distance between two Vector Boolean functions :math:`F, G \in \funct{F}_{n,m}` is defined as the number of bits that are different in their respective Truth Tables:

.. math::

   d(F,G) = \sum_{\vec{x} \in \gf{V_n}} d \left( F(\vec{x}), G(\vec{x}) \right) 

where :math:`d\left( F(\vec{x}), G(\vec{x}) \right)` is the Hamming distance between the two vectors :math:`F(\vec{x}), G(\vec{x}) \in \gf{V_m}`.

The weight of a Vector Boolean function :math:`F \in \funct{F}_{n,m}` is equal to the distance between *F* and the corresponding zero Vector Boolean function :math:`0 \in \funct{F}_{n,m}` where :math:`0(\vec{x})=\vec{0} \ \fa \vec{x} \in \gf{V_n}`. 

In order to obtain certain characterizations (such as Autocorrelation Spectrum), it is important to take into account two additional representations related to the Truth Table: :math:`\matr{LTT}` and :math:`\matr{CTT}`.

We will denote by :math:`\matr{LTT}` of :math:`F \in \funct{F}_{n,m}` the matrix whose columns are the Truth Tables of the :math:`2^m` component functions of *F*. We will denote by :math:`\matr{CTT}` of *F* the matrix whose columns are the sequence vectors of the :math:`2^m` component functions of *F* (Sometimes it is called the Polarity Truth Table). 

Library
=======

A VBF class can be initialized by a Boolean Matrix representing the Truth Table with the following method:

.. code-block:: c

   void puttt(const NTL::mat_GF2& T)

To obtain the Truth Table of a Vector Boolean function the following method must be used:

.. code-block:: c

   void TT(NTL::mat_GF2& X, VBF& F)

A VBF class can be initialized by a collection of strings separated by carriage returns defined by *s* with the following method: 

.. code-block:: c

   void putHexTT(istream& s)

Each row must be the hexadecimal representation of the Truth Table of the coordinate functions of a Vector Boolean function. To obtain the Truth Table in hexadecimal representation the following method must be used:

.. code-block:: c

   void getHexTT(ostream& s)

Analogously a VBF class can be initialized by a collecting of strings with binary representation of the Truth Table of coordinate functions:

.. code-block:: c

   void putBinTT(istream& s)

To obtain its Truth Table in binary representation the following method must be used:

.. code-block:: c

   void getBinTT(ostream& s)

A VBF class can be initialized by a Boolean vector representing the decimal representation of the Truth Table of a Vector Boolean Function defined by a vector of outputs in lexicographic order, called *d*, and knowing the number of component Boolean functions *m*:

.. code-block:: c

   void putDecTT(const NTL::vec_long& d,const long& m)

To obtain the Truth Table in decimal representation the following method must be used:

.. code-block:: c

   NTL::vec_long getDecTT() const

To obtain the weight of a Vector Boolean function *F* the following method must be used:

.. code-block:: c

   void weight(long& w, VBF& F)

A VBF class can be initialized by a Boolean Matrix representing the Truth Table of their component functions with the following method:

.. code-block:: c

   void putltt(const NTL::mat_GF2& L)

To obtain the Truth Table of the component functions of a Vector Boolean function the following method must be used:

.. code-block:: c

   void LTT(NTL::mat_GF2& X, VBF& F)

A VBF class can be initialized by a Boolean Matrix representing its Polarity Truth Table with the following method:

.. code-block:: c

   void putctt(const NTL::mat_ZZ& C)

To obtain the Polarity Truth Table of a Vector Boolean function the following method must be used:

.. code-block:: c

   void CTT(NTL::mat_ZZ& X, VBF& F)
  
Example
-------

The Truth Table of the NibbleSub S-box is the following:

.. code-block:: c

   [[1 1 1 0]
   [0 1 0 0]
   [1 1 0 1]
   [0 0 0 1]
   [0 0 1 0]
   [1 1 1 1]
   [1 0 1 1]
   [1 0 0 0]
   [0 0 1 1]
   [1 0 1 0]
   [0 1 1 0]
   [1 1 0 0]
   [0 1 0 1]
   [1 0 0 1]
   [0 0 0 0]
   [0 1 1 1]
   ]

If we use a file with this matrix as the input of the following program, we can obtain its hexadecimal, binary and decimal representation, as well as the Truth Tables of the components functions and its Polarity Truth Table.

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
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> T;
      F.puttt(T);
      input.close();

      cout << "The hexadecimal representation is: " << endl;
      F.getHexTT(cout);

      cout << endl << "The binary representation is: " << endl;
      F.getBinTT(cout);

      cout << endl << "The decimal representation is: " << endl 
      << F.getDecTT() << endl;

      cout << endl << "The Truth Table of the component functions is: "
      << endl << LTT(F) << endl;

      cout << endl << "The Polarity Truth Table is: " 
      << endl << CTT(F) << endl;

      return 0;
   }

The output of this program would be:

.. code-block:: console

   The hexadecimal representation is:
   a754
   e439
   8ee1
   368d

   The binary representation is:
   1010011101010100
   1110010000111001
   1000111011100001
   0011011010001101

   The decimal representation is:
   [14 4 13 1 2 15 11 8 3 10 6 12 5 9 0 7]

   The Truth Table of the component functions is:
   [[0 0 1 1 1 1 0 0 1 1 0 0 0 0 1 1]
   [0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1]
   [0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1]
   [0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1]
   [0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1]
   [0 1 1 0 1 0 0 1 1 0 0 1 0 1 1 0]
   [0 1 1 0 0 1 1 0 1 0 0 1 1 0 0 1]
   [0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1]
   [0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0]
   [0 0 1 1 0 0 1 1 1 1 0 0 1 1 0 0]
   [0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0]
   [0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0]
   [0 1 0 1 1 0 1 0 0 1 0 1 1 0 1 0]
   [0 1 0 1 0 1 0 1 1 0 1 0 1 0 1 0]
   [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   [0 1 1 0 1 0 0 1 0 1 1 0 1 0 0 1]
   ]

   The Polarity Truth Table is:
   [[1 1 -1 -1 -1 -1 1 1 -1 -1 1 1 1 1 -1 -1]
   [1 1 1 1 -1 -1 -1 -1 1 1 1 1 -1 -1 -1 -1]
   [1 -1 1 -1 -1 1 -1 1 -1 1 -1 1 1 -1 1 -1]
   [1 -1 1 -1 1 -1 1 -1 1 -1 1 -1 1 -1 1 -1]
   [1 1 -1 -1 1 1 -1 -1 1 1 -1 -1 1 1 -1 -1]
   [1 -1 -1 1 -1 1 1 -1 -1 1 1 -1 1 -1 -1 1]
   [1 -1 -1 1 1 -1 -1 1 -1 1 1 -1 -1 1 1 -1]
   [1 1 1 1 1 1 1 1 -1 -1 -1 -1 -1 -1 -1 -1]
   [1 -1 -1 1 1 -1 -1 1 1 -1 -1 1 1 -1 -1 1]
   [1 1 -1 -1 1 1 -1 -1 -1 -1 1 1 -1 -1 1 1]
   [1 1 -1 -1 -1 -1 1 1 1 1 -1 -1 -1 -1 1 1]
   [1 1 1 1 -1 -1 -1 -1 -1 -1 -1 -1 1 1 1 1]
   [1 -1 1 -1 -1 1 -1 1 1 -1 1 -1 -1 1 -1 1]
   [1 -1 1 -1 1 -1 1 -1 -1 1 -1 1 -1 1 -1 1]
   [1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1]
   [1 -1 -1 1 -1 1 1 -1 1 -1 -1 1 -1 1 1 -1]
   ]