Cycle structure
===============

The *cycle structure* of an invertible Vector Boolean Function :math:`F \in \funct{F}_{n,n}` (permutation) describing the number of cycles and their length.

A cycle structure with a low number of cycles of high length is considered
well suited to be used in cipher design. This fact means that a lot of transpositions are present.

The method used to obtain this informaton is the following:

.. code-block:: c

   void Cycle(NTL::vec_ZZ& v, VBF& F)

The following program prints the cycle structure of a Vector Boolean Function given the decimal representation of its Truth Table.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::vec_long vec_F;
      NTL::vec_ZZ   c;
      int  i, n;
      char file[33];

      // Load VBF definitions

      sprintf(file,"%s.dec",argv[1]);
      ifstream input(file);
      if(!input)
      {
         cerr << "Error opening " << file << endl;
         return 0;
      }
      input >> vec_F;
      n = atoi(argv[2]);
      F.putDecTT(vec_F,n);
      input.close();

      sprintf(file,"%s.cy",argv[1]);
      ofstream output(file);
      if(!output)
      {
         cerr << "Error opening " << file << endl;
         return 0;   
      }

      c = Cycle(S0);

      for (i = 0; i < c.length(); i++)
      {
         if (c[i] > 0)
         {
            output << i << "," << c[i] << endl;
         }
      }
      output.close();

     return 0;
   }

For instance, if we execute this program having as input the decimal representation of "S7" Truth Table, the output would be the following:

.. code-block:: console

   13,1
   22,1
   91,1

