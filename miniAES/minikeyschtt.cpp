
#include <iostream>
#include <fstream>
#include "VBF.h" 

/******************************************************************/
int main(int argc, char *argv[]) 
{
   using namespace VBFNS;

   NTL::mat_GF2 A,B,I,N;
   NTL::vec_GF2 k,k1,k2,v1,v2,w1,w2; 
   long i,n1,n2;
   
   ifstream input2("NibbleSub.tt");
   if(!input2)
   {
      cerr << "Error opening " << "nibblesub.tt" << endl;
      return 0;
   }
   input2 >> N;
   input2.close();

   v1.SetLength(4);
   v2.SetLength(4);
   k1.SetLength(16);
   k2.SetLength(16);
 
   A.SetDims(65536,16);
   B.SetDims(65536,16);
   I.SetDims(65536,16);
 
   for (i = 0; i < 65536; i++)
   {
      I[i] = to_vecGF2(i,16); 
      k = I[i];

      v1[0] = k[12];
      v1[1] = k[13];
      v1[2] = k[14];
      v1[3] = k[15];
      n1 = conv_long(v1);
      w1 = N[n1];

      k1[0] = k[0]+w1[0];
      k1[1] = k[1]+w1[1];
      k1[2] = k[2]+w1[2];
      k1[3] = k[3]+w1[3]+1;
      k1[4] = k[4]+k1[0];
      k1[5] = k[5]+k1[1];
      k1[6] = k[6]+k1[2];
      k1[7] = k[7]+k1[3];
      k1[8] = k[8]+k1[4];
      k1[9] = k[9]+k1[5];
      k1[10] = k[10]+k1[6];
      k1[11] = k[11]+k1[7];
      k1[12] = k[12]+k1[8];
      k1[13] = k[13]+k1[9];
      k1[14] = k[14]+k1[10];
      k1[15] = k[15]+k1[11];

      A[i] = k1;
   
      v2[0] = k1[12];
      v2[1] = k1[13];
      v2[2] = k1[14];
      v2[3] = k1[15];
      n2 = conv_long(v2);
      w2 = N[n2];

      k2[0] = k1[0]+w2[0];
      k2[1] = k1[1]+w2[1];
      k2[2] = k1[2]+w2[2]+1;
      k2[3] = k1[3]+w2[3];
      k2[4] = k1[4]+k2[0];
      k2[5] = k1[5]+k2[1];
      k2[6] = k1[6]+k2[2];
      k2[7] = k1[7]+k2[3];
      k2[8] = k1[8]+k2[4];
      k2[9] = k1[9]+k2[5];
      k2[10] = k1[10]+k2[6];
      k2[11] = k1[11]+k2[7];
      k2[12] = k1[12]+k2[8];
      k2[13] = k1[13]+k2[9];
      k2[14] = k1[14]+k2[10];
      k2[15] = k1[15]+k2[11];

      B[i] = k2;   
   }

   ofstream output("ks0.tt");
   if(!output)
   {
      cerr << "Error opening " << "ks0.tt" << endl;
      return 0;
   }
   output << I << endl;
   output.close();

   ofstream output1("ks1.tt");
   if(!output1)
   {
      cerr << "Error opening " << "ks1.tt" << endl;
      return 0;
   }
   output1 << A << endl;
   output1.close();

   ofstream output2("ks2.tt");
   if(!output2)
   {
      cerr << "Error opening " << "ks2.tt" << endl;
      return 0;
   }
   output2 << B << endl;
   output2.close();

/* Finish **********************************************************/
  return 0;
}
//


