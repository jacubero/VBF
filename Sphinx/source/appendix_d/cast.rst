**********************
CAST analysis programs
**********************

Spectral radius
===============

The following program calculates spectral radius of the component functions of an :math:`8 \times 32` S-box (for instance CAST S-box). 

.. code-block:: c

#include<iostream>
#include<fstream>
#include "VBF.h"

int main(int argc, char *argv[])
{
   using namespace VBFNS;

   VBF          F,G;
   NTL::mat_GF2 T, Tt, A, B;
   NTL::mat_ZZ W;
   NTL::ZZ     max;
   NTL::vec_GF2 v;
   int j;
   int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23,i24,i25,i26,i27,i28,i29,i30,i31,i32;

   ifstream input(argv[1]);
   if(!input){
      cerr<< "Error opening "<< argv[1]<< endl;
      return 0;
   }
   input >> T;
   F.puttt(T);
   input.close();

   Tt = transpose(T);
   v.SetLength(32);
   A.SetDims(1,256);
   B.SetDims(256,1);

   for (i1=0; i1<2; i1++) {
   for (i2=0; i2<2; i2++) {
   for (i3=0; i3<2; i3++) {
   for (i4=0; i4<2; i4++) {
   for (i5=0; i5<2; i5++) {
   for (i6=0; i6<2; i6++) {
   for (i7=0; i7<2; i7++) {
   for (i8=0; i8<2; i8++) {
   for (i9=0; i9<2; i9++) {
   for (i10=0; i10<2; i10++) {
   for (i11=0; i11<2; i11++) {
   for (i12=0; i12<2; i12++) {
   for (i13=0; i13<2; i13++) {
   for (i14=0; i14<2; i14++) {
   for (i15=0; i15<2; i15++) {
   for (i16=0; i16<2; i16++) {
   for (i17=0; i17<2; i17++) {
   for (i18=0; i18<2; i18++) {
   for (i19=0; i19<2; i19++) {
   for (i20=0; i20<2; i20++) {
   for (i21=0; i21<2; i21++) {
   for (i22=0; i22<2; i22++) {
   for (i23=0; i23<2; i23++) {
   for (i24=0; i24<2; i24++) {
   for (i25=0; i25<2; i25++) {
   for (i26=0; i26<2; i26++) {
   for (i27=0; i27<2; i27++) {
   for (i28=0; i28<2; i28++) {
   for (i29=0; i29<2; i29++) {
   for (i30=0; i30<2; i30++) {
   for (i31=0; i31<2; i31++) {
   for (i32=0; i32<2; i32++) {
     v[0] = to_GF2(i1);
     v[1] = to_GF2(i2);
     v[2] = to_GF2(i3);
     v[3] = to_GF2(i4);
     v[4] = to_GF2(i5);
     v[5] = to_GF2(i6);
     v[6] = to_GF2(i7);
     v[7] = to_GF2(i8);
     v[8] = to_GF2(i9);
     v[9] = to_GF2(i10);
     v[10] = to_GF2(i11);
     v[11] = to_GF2(i12);
     v[12] = to_GF2(i13);
     v[13] = to_GF2(i14);
     v[14] = to_GF2(i15);
     v[15] = to_GF2(i16);
     v[16] = to_GF2(i17);
     v[17] = to_GF2(i18);
     v[18] = to_GF2(i19);
     v[19] = to_GF2(i20);
     v[20] = to_GF2(i21);
     v[21] = to_GF2(i22);
     v[22] = to_GF2(i23);
     v[23] = to_GF2(i24);
     v[24] = to_GF2(i25);
     v[25] = to_GF2(i26);
     v[26] = to_GF2(i27);
     v[27] = to_GF2(i28);
     v[28] = to_GF2(i29);
     v[29] = to_GF2(i30);
     v[30] = to_GF2(i31);
     v[31] = to_GF2(i32);

     clear(A);
     for (j=0;j<32;j++) {
       if (v[j] == 1) {
         A[0] += Tt[j];
       }
     }
     B = transpose(A);
     G.puttt(B);
     W = Walsh(G);
     max = maxvalue_abs(W);
     cout << max << endl;
     G.kill();
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
   }
}