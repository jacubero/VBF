Type of function in terms of nonlinearity
=========================================

The *Type of function in terms of nonlinearity* of a Boolean Function (only for :math:`m=1`), that is, if it linear, almost optimal or a bent function (*F* with maximum nonlinearity and *n* even).  The method used to obtain this informaton is the following:

.. code-block:: c

   void typenl(int& typenl, VBF& F)

The following program prints the type of function in terms of nonlinearity of a Boolean Function given its Truth Table in hexadecimal.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      int type;

      ifstream input(argv[1]);
      if(!input)
      {
         cerr << "Error opening" << argv[1] << endl;
         return 0;
      }

      F.putHexTT(input);
      input.close();

      ofstream output(argv[2]);
      if(!output)
      {
         cerr << "Error opening" << argv[2] << endl;
         return 0;
      }

      typenl(type, F);

      if (type == BENT)
      {
         output << "It is a bent function" << endl;
      } else if (type == ALMOST_OPTIMAL)
      {
         output << "It is an almost optimal function" << endl;
      } else if (type == LINEAR)
      {
         output << "It is a linear function" << endl;
      }

      output.close();

      return 0;
   }

For instance, if we execute this program having as hexadecimal representation of the truth table :math:`6DA6C82D52953BD2`, the output would be the following:

.. code-block:: console

   It is an almost optimal function

