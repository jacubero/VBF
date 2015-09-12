#ifndef VBF_GF2EX__H
#define VBF_GF2EX__H

#include <NTL/GF2EX.h>
#include "vbf_vec_GF2E.h"
#include  <iomanip>

NTL_CLIENT

class vbf_GF2EX: public GF2EX {

  GF2EX str2GF2EX(string& str, const long& n);
  // convert string str to GF2EX

  void print(NTL_SNS ostream& s, GF2EX& f);

}; // end class vbf_GF2EX

GF2EX str2GF2EX(string& str, const long& n)
{
   vector<string> monoms;
   unsigned long i, spacen;
   mat_GF2 A,B;
   vec_GF2E x;
   GF2EX f;

   Tokenize(str, monoms,"+");
   spacen = (1 << n);
   A.SetDims(spacen,n);

   for (i = 0; i < monoms.size(); i++)
   {
      vector<string> values;
      Tokenize(monoms[i], values, "x^");

      if (values.size() == 1)
      {
         NTL_SNS string::size_type pos = values[0].find_first_of("x",0); 
         if (NTL_SNS string::npos != pos )
	 {
            istringstream Scoef(values[0].substr(0,values[0].length()-2));
            long coef;

            Scoef >> std::hex >> coef >> std::dec;
            A[1] = to_vecGF2(coef,n);
	 } else {
            istringstream Scoef(values[0]);
            long coef;

            Scoef >> std::hex >> coef >> std::dec;
	    A[0] = to_vecGF2(coef,n);
         }
      } else 
      {
         istringstream Scoef(values[0]);
         istringstream Sexp(values[1]);
         long coef, exp;

	 Sexp >> exp;
         Scoef >> std::hex >> coef >> std::dec;
         A[exp] = to_vecGF2(coef,n); 
      }
   }

   reverse(B,A);
   conv(x,B);
   f = to_GF2EX(x);

   return f;
}

void print(NTL_SNS ostream& s, GF2EX& f, const long& m)
{
   long i, coef, digits;
   int first = 1;
   vec_GF2 c, d;
   vec_vec_GF2 z;

   ofstream outemp("GF2EX_to_vec_vec_GF2.tmp");
   outemp << f;
   outemp.close();

   ifstream inputemp("GF2EX_to_vec_vec_GF2.tmp");
   inputemp >> z;

   d.SetLength(m);
   digits = (m+3)/4;

   for (i = z.length()-1; i > 1; i--)
   {
      VectorCopy(c,z[i],m);
      reverse(d,c);
      coef = conv_long(d);
      if (coef != 0 && !first) {
        s << "+" << setfill('0') << setw(digits) << std::hex << coef << std::dec << "·x^{" <<  i << "}";
      } else if (coef != 0 && first) {
        s << setfill('0') << setw(digits) << std::hex << coef << std::dec << "·x^{" <<  i << "}";
        first = 0;
      }
   }

   VectorCopy(c,z[1],m);
   reverse(d,c);
   coef = conv_long(d);
   if (coef != 0) {
      s << "+" << setfill('0') << setw(digits) << std::hex << coef << std::dec << "·x";
   }

   VectorCopy(c,z[0],m);
   reverse(d,c);
   coef = conv_long(d);
   if (coef != 0) {
      s << "+" << setfill('0') << setw(digits) << std::hex << coef << std::dec;
   }

   s << endl;
}

#endif
