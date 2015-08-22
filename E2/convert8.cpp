/* sudo g++ -Wall convert8.cpp -o convert8.exe */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

typedef unsigned int Byte;

FILE * filein;
FILE * fileout;

int cont = 0;

void init(FILE* f) {

   cont = 0;
   fprintf(f,"]");
   fprintf(f,"\n");
}

void binary(Byte number, FILE* f) {
   Byte remainder;
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


int
main ()
{
   int i;
   Byte y[8];
   string c[8];
   char	buf[256];			/* input buffer, hex block */

   if((filein = fopen("S.txt","r")) == NULL) {
      return 0;
   }

   if((fileout = fopen("S.tt","wt")) == NULL) {
      return 0;
   } 
   fprintf(fileout,"[ ");

   while ( fgets(buf, sizeof(buf), filein) != NULL) { /* read next line  */
      istringstream Str( buf );
      for (i = 0; i < 8; i++) {
         Byte number;
         Str >> c[i];
         istringstream hexadecimal( c[i] );
         hexadecimal >> std::hex >> number;
         ofstream output("temp.txt");
         output << std::dec << number << std::hex;
         output.close();
         ifstream input("temp.txt");
         input >> y[i];
         input.close();
         binary(y[i],fileout);
         init(fileout);
      }
   }

   fprintf(fileout,"]");
   fclose(filein);
   fclose(fileout);
 
}

