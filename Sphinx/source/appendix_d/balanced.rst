*************************************
Balanced Boolean functions generation
*************************************

Boolean with distance 2 to a Balanced Boolean function
======================================================

The following bash script obtain Balanced Boolean functions from Boolean functions which are 2 bits far from a Balanced Boolean function.

.. code-block:: bash
   :caption: balanced.sh
   :name: balanced.sh

cont=1
while read line
do
echo $line > $1.$cont
./balanced.exe $1.$cont $3 $4 >> $2.$cont
rm $1.$cont
((cont++))
done < $1

The bash script *balanced.sh* must be invoked as follows:  

.. code-block:: console

	./balanced.sh infile.bin outfile.txt a b

where *infile.bin* is an input file where each row is the binary representation of the Truth Table of a Boolean function which is 2 bits far from a Balanced function. The *outfile.txt* is the name of a file whose each row has the Truth Table, nonlinearity, linearity distance, algebraic degree, algebraic immunity, absolute indicator and sum-of-square indicator of a Balanced Boolean function.

Let :math:`f \in \funct{F}_n` an input function within infile.bin. If its weight is :math:`\frac{n}{2}+2` then the parameters must be :math:`a=\frac{n}{2}+2` and *b=1*. If its weight is :math:`\frac{n}{2}-2` then the parameters must be :math:`a=\frac{n}{2}+2` and *b=0*. 

.. code-block:: c
   :caption: balanced.exe
   :name: balanced.exe

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F,G;
	   NTL::mat_GF2 T, Tt, A, B;
	   NTL::vec_long v;
	   NTL::GF2 valor;
	   long i, j, n, spacen;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   F.putBinTT(input);
	   input.close();

	   T = TT(F);
	   Tt = transpose(T);
	   spacen = Tt.NumCols();
	   A.SetDims(1,spacen);
	   B.SetDims(spacen,1);

	   n = atol(argv[2]);
	   valor = to_GF2(atoi(argv[3]));   
	   v.SetLength(n);
	   j = 0;

	   for (i = 0; i < spacen; i++) {
	      if (Tt[0][i] == valor) {
	        v[j] = i;
	        j++;
	      }
	   }
	   valor = valor + 1;

	   for (i = 0; i < n; i++) {      
	      for (j = i+1; j < n; j++) {
	         A = Tt;
	         A[0][v[i]] = valor;
	         A[0][v[j]] = valor;
	         B = transpose(A);
	         G.puttt(B);
	         
	         cout << "[" << A[0] << "]" << "," << nl(G) << 			"," << ld(G) << "," << deg(G) << "," << AI(G) 			<< "," << maxAC(G) << "," << sigma(G) << endl;

	         G.kill();
	       }
	   }

	   return 0;
	}

Boolean with distance 4 to a Balanced Boolean function
======================================================

The bash script *balanced.sh* can be used to obtain Balanced Boolean functions from Boolean functions which are 4 bits far from a Balanced Boolean function.

The bash script *balanced.sh* must be invoked as follows:  

.. code-block:: console

	./balanced.sh infile.bin outfile.txt a b

where *infile.bin* is an input file where each row is the binary representation of the Truth Table of a Boolean function which is 4 bits far from a Balanced function. The *outfile.txt* is the name of a file whose each row has the Truth Table, nonlinearity, linearity distance, algebraic degree, algebraic immunity, absolute indicator and sum-of-square indicator of a Balanced Boolean function.

Let :math:`f \in \funct{F}_n` an input function within infile.bin. If its weight is :math:`\frac{n}{2}+4` then the parameters must be :math:`a=\frac{n}{2}+4` and *b=1*. If its weight is :math:`\frac{n}{2}-4` then the parameters must be :math:`a=\frac{n}{2}+4` and *b=0*. 

.. code-block:: c
   :caption: balanced.exe
   :name: balanced.exe

	#include <iostream>
	#include <fstream>
	#include "VBF.h"
	  
	int main(int argc, char *argv[]) 
	{
	   using namespace VBFNS;
	   
	   VBF		F,G;
	   NTL::mat_GF2 T, Tt, A, B;
	   NTL::vec_long v;
	   NTL::GF2 valor;
	   long i, j, k, l, n, spacen;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   F.putBinTT(input);
	   input.close();

	   T = TT(F);
	   Tt = transpose(T);
	   spacen = Tt.NumCols();
	   A.SetDims(1,spacen);
	   B.SetDims(spacen,1);

	   n = atol(argv[2]);
	   valor = to_GF2(atoi(argv[3]));   
	   v.SetLength(n);
	   j = 0;

	   for (i = 0; i < spacen; i++) {
	      if (Tt[0][i] == valor) {
	        v[j] = i;
	        j++;
	      }
	   }
	   valor = valor + 1;

	   for (i = 0; i < n; i++) {      
	      for (j = i+1; j < n; j++) {
	         for (k = j+1; k < n; k++) {
	            for (l = k+1; l < n; l++) { 
	               A = Tt;
	               A[0][v[i]] = valor;
	               A[0][v[j]] = valor;
	               A[0][v[k]] = valor;
	               A[0][v[l]] = valor;
	               B = transpose(A);
	               G.puttt(B);
	         
	               cout << "[" << A[0] << "]" << "," << nl(G) 				<< "," << deg(G) << "," << AI(G) << "," 				<< maxAC(G) << "," << sigma(G) << endl;

	               G.kill();
	            }
	          }
	       }
	   }

	   return 0;
	}
