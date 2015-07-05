
#include <iostream>
#include <fstream>
#include "VBF.h" 

/******************************************************************/
int main(int argc, char *argv[]) 
{
   using namespace VBFNS;

   NTL::mat_GF2 M2,M3;
   NTL::vec_GF2 a, b, c, d, e; 
   long i, j, posb, posc;
   
   ifstream input("m2.tt");
   if(!input)
   {
      cerr << "Error opening " << "m2.tt" << endl;
      return 0;
   }
   input >> M2;
   input.close();

   ifstream input2("m3.tt");
   if(!input2)
   {
      cerr << "Error opening " << "m3.tt" << endl;
      return 0;
   }
   input2 >> M3;
   input2.close();

   ofstream output("mixcolumn.tt");
   if(!output)
   {
      cerr << "Error opening " << "mixcolumn.tt" << endl;
      return 0;
   }

   b.SetLength(4);
   c.SetLength(4);
   d.SetLength(4);
   e.SetLength(4);

   output << "[";
   for (i = 0; i < 256; i++)
   {
      a = to_vecGF2(i,8); 
      for (j = 0; j < 4; j++) b[j]=a[j];
      for (j = 0; j < 4; j++) c[j]=a[j+4];
      posb = conv_long(b);
      posc = conv_long(c);
      d = M3[posb] + M2[posc];
      e = M2[posb] + M3[posc];
      output << "[";
      for (j = 0; j < 4; j++) output << d[j] << " ";
      for (j = 0; j < 4; j++) output << e[j] << " ";
      output << "]" << endl;
   }
   output << "]" << endl;

   output.close();
/* Finish **********************************************************/
  return 0;
}
//


