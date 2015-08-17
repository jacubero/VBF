/* sudo g++ -Wall convert.cpp -o convert.exe */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#define MAX_SBOX_COUNT 1

typedef unsigned long int word32;

FILE * filein[MAX_SBOX_COUNT];
FILE * fileout[MAX_SBOX_COUNT];

int cont = 0;

void init(FILE* f) {

   cont = 0;
   fprintf(f,"]");
   fprintf(f,"\n");
}

void binary(word32 number, FILE* f) {
   word32 remainder;
   int i;

   cont++;
   if(number <= 1) {
      fprintf(f,"[ ");
      for (i = 0;i < (8-cont);i++) {
	 fprintf(f,"%d ",0);
      }
      fprintf(f,"%lx ",number);
      return;
   }

   remainder = number%2;
   binary(number/2,f);
   fprintf(f,"%lx ",remainder);
}


int
main ()
{
   int index, i;
   char nombre[7];
   word32 y[8];
   string c[8];
   char	buf[256];			/* input buffer, hex block */

   for (index = 1; index <= MAX_SBOX_COUNT; index++) {
      sprintf(nombre,"S%d.txt",index);
      if((filein[index] = fopen(nombre,"r")) == NULL) {
         return 0;
      }
   }

   for (index = 1; index <= MAX_SBOX_COUNT; index++) {
      sprintf(nombre,"S%d.tt",index);
      if((fileout[index] = fopen(nombre,"wt")) == NULL) {
         return 0;
      } 
   }


   for (index = 1; index <= MAX_SBOX_COUNT; index++) {

     fprintf(fileout[index],"[ ");

     while ( fgets(buf, sizeof(buf), filein[index]) != NULL) { /* read next line  */
	istringstream Str( buf );
        for (i = 0; i < 8; i++) {
           word32 number;
           Str >> c[i];
           istringstream hexadecimal( c[i] );
           hexadecimal >> std::hex >> number;
           ofstream output("temp.txt");
           output << std::dec << number << std::hex;
           output.close();
           ifstream input("temp.txt");
           input >> y[i];
           input.close();
           binary(y[i],fileout[index]);
           init(fileout[index]);
        }
     }

     fprintf(fileout[index],"]");
     fclose(filein[index]);
     fclose(fileout[index]);
     cont = 0;
   }
 

}

