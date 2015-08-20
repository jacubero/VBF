/* sudo g++ -Wall crypton1.cpp -o crypton1.exe */

#include <stdio.h>

typedef unsigned char u1byte;
typedef unsigned int u4byte;

FILE* FileS0;
FILE* FileS1;
FILE* FileS2;
FILE* FileS3;

int cont = 0;

void init(FILE* f) {

   cont = 0;
   fprintf(f,"]");
   fprintf(f,"\n");
}

void binary(u1byte number, FILE* f) {
   u1byte remainder;
   int i;

   cont++;
   if(number <= 1) {
      fprintf(f,"[ ");
      for (i = 0;i < (8-cont);i++) {
	 fprintf(f,"%d ",0);
      }
      fprintf(f,"%d ",number);
      return;
   }

   remainder = number%2;
   binary(number/2,f);
   fprintf(f,"%d ",remainder);
}


u1byte  p0[16] = { 15, 14, 10,  1, 11,  5,  8, 13,  9,  3,  2,  7,  0,  6,  4, 12 };
u1byte  p1[16] = { 11, 10, 13,  7,  8, 14,  0,  5, 15,  6,  3,  4,  1,  9,  2, 12 };
u1byte ip0[16] = { 12,  3, 10,  9, 14,  5, 13, 11,  6,  8,  2,  4, 15,  7,  1,  0 };
u1byte ip1[16] = {  6, 12, 14, 10, 11,  7,  9,  3,  4, 13,  1,  0, 15,  2,  5,  8 };

u1byte  s_box[4][256];

int gen_tab(void)
{   u4byte  i, xl, xr, y, yl, yr;

   if((FileS0 = fopen("S0.tt","wt")) == NULL) {
      return 0;
   }

   if((FileS1 = fopen("S1.tt","wt")) == NULL) {
      return 0;
   }

   fprintf(FileS0,"[ ");
   fprintf(FileS1,"[ ");

    for(i = 0; i < 256; ++i)
    {
        xl = p1[i >> 4]; xr = p0[i & 15];

        yl  = (xl & 0x0e) ^ ((xl << 3) & 0x08) ^ ((xl >> 3) & 0x01)
            ^ ((xr << 1) & 0x0a) ^ ((xr << 2) & 0x04) 
            ^ ((xr >> 2) & 0x02) ^ ((xr >> 1) & 0x01);
            
        yr  = (xr & 0x0d) ^ ((xr << 1) & 0x04) ^ ((xr >> 1) & 0x02)
            ^ ((xl >> 1) & 0x05) ^ ((xl << 2) & 0x08)
            ^ ((xl << 1) & 0x02) ^ ((xl >> 2) & 0x01);
            
        y = ip0[yl] | (ip1[yr] << 4); 
        
        yr = ((y << 3) | (y >> 5)) & 255; xr = ((i << 3) | (i >> 5)) & 255;
        yl = ((y << 1) | (y >> 7)) & 255; xl = ((i << 1) | (i >> 7)) & 255;

        s_box[0][i]  = (u1byte)yl; s_box[1][i] = (u1byte)yr;
        s_box[2][xl] = (u1byte)y; s_box[3][xr] = (u1byte)y;
        binary(s_box[0][i],FileS0);
        init(FileS0);
        binary(s_box[1][i],FileS1);
        init(FileS1);

    }

   fprintf(FileS0,"]");
   fclose(FileS0);
   fprintf(FileS1,"]");
   fclose(FileS1);


   if((FileS2 = fopen("S2.tt","wt")) == NULL) {
      return 0;
   }
   if((FileS3 = fopen("S3.tt","wt")) == NULL) {
      return 0;
   }


   fprintf(FileS2,"[ ");
   fprintf(FileS3,"[ ");

    for(i = 0; i < 256; ++i)
    {
        binary(s_box[2][i],FileS2);
        init(FileS2);
        binary(s_box[3][i],FileS3);
        init(FileS3);
    }

   fprintf(FileS2,"]");
   fclose(FileS2);   
   fprintf(FileS3,"]");
   fclose(FileS3);   

   return 1;

};

int main() 
{

   gen_tab();

}
