***********
Truth Table
***********

1. A VBF class can be initialized by a Boolean Matrix representing the binary Truth Table with the following method:

.. code-block:: c

   void puttt(const NTL::mat_GF2& T)

To obtain its Truth table, the following method must be used:

.. code-block:: c

   void TT(NTL::mat_GF2& X, VBF& F)

where *Truth Table* is defined as a matrix with :math:`2^n` rows and :math:`m` columns :math:`\matr{T}_F \in \matr{M}_{2^n \times m}(\gf{GF(2)})`:

.. math::
   :nowrap:

   \begin{equation*}
      \matr{T}_F = \begin{bmatrix} f_1(\boldsymbol{\alpha_0}) & \dots & f_{m}(\boldsymbol{\alpha_0}) \\
      f_1(\boldsymbol{\alpha_1}) & \dots & f_{m}(\boldsymbol{\alpha_1}) \\
      \hdotsfor[2]{3} \\
      f_1(\boldsymbol{\alpha_{2^n-1}}) & \dots & f_{m}(\boldsymbol{\alpha_{2^n-1}}) \end{bmatrix}
   \end{equation*}

satisfying that :math:`f_i \  \  i \in \{1,\dots,m\}` are its component functions; each :math:`\boldsymbol{\alpha_i} = (x_1,\dots ,x_n) \in \gf{V_n} \  \  i \in \{1,\dots,2^n-1\}` is a vector whose decimal equivalent is :math:`dec(\boldsymbol{\alpha_i})=i=\sum_{j=1}^{n} x_j 2^{n-j}`, and all the vectors of :math:`\gf{V_n}` can be listed so that :math:`\boldsymbol{\alpha_0} < \boldsymbol{\alpha_1} < \dotsb < \boldsymbol{\alpha_{2^{n-1}}}`. 

As a total order is defined over the assignments (inputs) of the Vector Boolean Function, the truth table can be uniquely represented by this matrix.

Having a Vector Boolean Function *F* and a matrix with its Truth Table called "mat", this example program will load this matrix and obtain its Truth Table as follows:

.. code-block:: c

   VBF  F;
   NTL::mat_GF2 mat, T;

   F.puttt(mat);
   T = TT(F);

2. A VBF class can be initialized by a string representing the hexadecimal representation of the Truth Table of a Boolean Function (only for :math:`m=1`) defined by $s$ with the following method:

.. code-block:: c

   void putHexTT(istream& s)

To obtain its Truth table in hexadecimal representation, the following method must be used:

.. code-block:: c

   void getHexTT(ostream& s)

The following program shows how to calculate the nonlinearity of a Boolean function given its Hexadecimal representation and to return an output of its Hexadecimal representation to a file.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening" << argv[1] << endl;
         return 0;
      }

      F.putHexTT(input);

      input.close();
      cout << nl(F) << endl;

      ofstream output(argv[2]);
      if(!output)
      {
         cerr << "Error opening" << argv[2] << endl;
         return 0;
      }

      F.getHexTT(output);
      output << endl;
      output.close();

      return 0;
   }

If the input file contains the following information:

.. code-block:: console

   B8FE8F795F6CDA63FA26AC2B2EBB477B7058C266BE53DC0480DF6BFCB8A70E54A4E7EFDF91788517C9CF410DA90A10EBCE7A663
   C2B1F4B2C634DA1C1DE5C54AA

The nonlinearity obtain from the program will be 242.

3. A VBF class can be initialized by a Boolean vector representing the decimal representation of Truth Table for a Vector Boolean Fuction defined by a vector of outputs in lexicographic order :math:`d` and knowing the number of component boolean functions :math:`m`:

.. code-block:: c

   void putDecTT(const NTL::vec_long& d,const long& m)

To obtain its Truth table in hexadecimal representation, the following method must be used:

.. code-block:: c

   NTL::vec_long getDecTT() const

Having a Vector Boolean Function *F* and a vector with its decimal representation called "inputv", the following program shows how to load the decimal representation of a Vector Boolean Function and how to obtain this representation and send it to output.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      NTL::vec_long inputv, outputv;
      VBF          F;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> inputv;

      long n = atoi(argv[2]);
      F.putDecTT(inputv,n);
      input.close();

      ofstream output(argv[3]);
      if(!output)
      {
         cerr << "Error opening" << argv[3] << endl;
         return 0;
      }

      outputv = F.getDecTT();
      output << outputv << endl;
      output.close();

      return 0;
   }

If "inputv" is the decimal representation of *S7*, the output would be:

.. code-block:: console

   [ 54 50 62 56 22 34 94 96 38 6 63 93 2 18 123 33 55 113 39 114 21 67 65 12 47 73 46 27 25 111 124 81 53 
   9 121 79 52 60 58 48 101 127 40 120 104 70 71 43 20 122 72 61 23 109 13 100 77 1 16 7 82 10 105 98 117 
   116 76 11 89 106 0 125 118 99 86 69 30 57 126 87 112 51 17 5 95 14 90 84 91 8 35 103 32 97 28 66 102 
   31 26 45 75 4 85 92 37 74 80 49 68 29 115 44 64 107 108 24 110 83 36 78 42 19 15 41 88 119 59 3 ] 
