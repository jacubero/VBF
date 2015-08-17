/* sudo g++ -Wall camellia.cpp -o camellia.exe */

#include <stdio.h>

#define MAX_SBOX_COUNT 4

typedef unsigned char Byte;


const Byte SBOX[256] = {
112,130, 44,236,179, 39,192,229,228,133, 87, 53,234, 12,174, 65,
 35,239,107,147, 69, 25,165, 33,237, 14, 79, 78, 29,101,146,189,
134,184,175,143,124,235, 31,206, 62, 48,220, 95, 94,197, 11, 26,
166,225, 57,202,213, 71, 93, 61,217,  1, 90,214, 81, 86,108, 77,
139, 13,154,102,251,204,176, 45,116, 18, 43, 32,240,177,132,153,
223, 76,203,194, 52,126,118,  5,109,183,169, 49,209, 23,  4,215,
 20, 88, 58, 97,222, 27, 17, 28, 50, 15,156, 22, 83, 24,242, 34,
254, 68,207,178,195,181,122,145, 36,  8,232,168, 96,252,105, 80,
170,208,160,125,161,137, 98,151, 84, 91, 30,149,224,255,100,210,
 16,196,  0, 72,163,247,117,219,138,  3,230,218,  9, 63,221,148,
135, 92,131,  2,205, 74,144, 51,115,103,246,243,157,127,191,226,
 82,155,216, 38,200, 55,198, 59,129,150,111, 75, 19,190, 99, 46,
233,121,167,140,159,110,188,142, 41,245,249,182, 47,253,180, 89,
120,152,  6,106,231, 70,113,186,212, 37,171, 66,136,162,141,250,
114,  7,185, 85,248,238,172, 10, 54, 73, 42,104, 60, 56,241,164,
 64, 40,211,123,187,201, 67,193, 21,227,173,244,119,199,128,158};

#define SBOX1(n) SBOX[(n)]
#define SBOX2(n) (Byte)((SBOX[(n)]>>7^SBOX[(n)]<<1)&0xff)
#define SBOX3(n) (Byte)((SBOX[(n)]>>1^SBOX[(n)]<<7)&0xff)
#define SBOX4(n) SBOX[((n)<<1^(n)>>7)&0xff]


FILE * fichero[MAX_SBOX_COUNT];

int cont = 0;

void init(FILE* f) {

   cont = 0;
   fprintf(f,"]");
   fprintf(f,"\n");
   fprintf(f,"[ ");
}

void binary(Byte number, FILE* f) {
   Byte remainder;
   int i;

   cont++;
   if(number <= 1) {
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


int
main ()
{
   Byte i;
   int index;
   char nombre[7];
   Byte y;

   for (index = 1; index <= MAX_SBOX_COUNT; index++) {
      sprintf(nombre,"S%d.tt",index);
      if((fichero[index] = fopen(nombre,"wt")) == NULL) {
         return 0;
      }
   }

   fprintf(fichero[1],"[[ ");

   for (i = 0; i < 255; i++) {

      y = SBOX1(i);
      binary(y,fichero[1]);
      init(fichero[1]);
   } 
   y = SBOX1(255);
   binary(y,fichero[1]);
   fprintf(fichero[1],"]]");
   cont = 0;
   fclose(fichero[1]);
   fprintf(fichero[2],"[[ ");

   for (i = 0; i < 255; i++) {

      y = SBOX2(i);
      binary(y,fichero[2]);
      init(fichero[2]);
   } 
   y = SBOX2(255);
   binary(y,fichero[2]);
   fprintf(fichero[2],"]]");
   cont = 0;
   fclose(fichero[2]);
   fprintf(fichero[3],"[[ ");

   for (i = 0; i < 255; i++) {

      y = SBOX3(i);
      binary(y,fichero[3]);
      init(fichero[3]);
   } 
   y = SBOX3(255);
   binary(y,fichero[3]);
   fprintf(fichero[3],"]]");
   cont = 0;
   fclose(fichero[3]);
   fprintf(fichero[4],"[[ ");

   for (i = 0; i < 255; i++) {

      y = SBOX4(i);
      binary(y,fichero[4]);
      init(fichero[4]);
   } 
   y = SBOX4(255);
   binary(y,fichero[4]);
   fprintf(fichero[4],"]]");
   cont = 0;
   fclose(fichero[4]);
}
