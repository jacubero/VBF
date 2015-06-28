
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned int S[16]=  { 0,15,8,10,6,3,2,12,11,7,1,14,4,5,9,13};
unsigned int Sinverse[16]=  { 0, 10,6,5,12,13,4,9,2,14,3,8,7,15,11,1};

//0->0,1->15,2->8,3->10,4->6,5->3,6->2,7->12,8-> 11,9->7,10->1,11->14,12->4,13->5,14->9,15->13



void SubByte( unsigned int **V,unsigned int **U) //V=S(U)
{
  int i,j;
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
	V[i][j]=S[U[i][j]];
    }
}

void ShiftRow( unsigned int **V,unsigned int **U)
{
  V[0][0]=U[0][0];
  V[0][1]=U[0][1];
  V[1][0]=U[1][1];
  V[1][1]=U[1][0];
}

void SubByteInverse( unsigned int **V,unsigned int **U) //V=Sinverse(U)
{

  int i,j;
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
	V[i][j]=Sinverse[U[i][j]];
    }

}


unsigned int  minimix(unsigned int u,  unsigned int  v)
{
  unsigned int w;
  w=u^v^(v << 1);
  // reduction
  if( (w & 16) == 16) 
    {
      w=w ^ 19;
    }
  return(w);
}

void MixColumn(unsigned int **V,unsigned int **U)
{


  V[0][0]=minimix(U[1][0],U[0][0]);
  V[1][0]=minimix(U[0][0],U[1][0]);


  V[0][1]=minimix(U[1][1],U[0][1]);
  V[1][1]=minimix(U[0][1],U[1][1]);
}



void AddKey( unsigned int **U,unsigned int **W,unsigned int **K) //U=W+K
{
  int i,j;

  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
	U[i][j]=W[i][j]^K[i][j];
    }
}




void chiffrement(unsigned int **C, unsigned int **M, unsigned int **K)
{
  unsigned int i,j;
  unsigned int **U,**V,**W1,**W;

  //allocation memoire
  U=(unsigned int **) malloc( 2*sizeof(unsigned int*));
  V=(unsigned int **) malloc( 2*sizeof(unsigned int*));
  W1=(unsigned int **) malloc( 2*sizeof(unsigned int*));
  W=(unsigned int **) malloc( 2*sizeof(unsigned int*));

  for(i=0;i<2;i++)
    {
  U[i]=(unsigned int *) malloc( 2*sizeof(unsigned int));
  V[i]=(unsigned int *) malloc( 2*sizeof(unsigned int));
  W[i]=(unsigned int *) malloc( 2*sizeof(unsigned int));
  W1[i]=(unsigned int *) malloc( 2*sizeof(unsigned int));

    }

  AddKey(U,M,K);
  for(i=0;i<3;i++)
    {
      SubByte(V,U);
      ShiftRow(W1,V);
      MixColumn(W,W1);
      AddKey(U,W,K);
    }
  //  printf("%u,%u,%u,%u,U[0][0]);
  // derniere ronde sans shilft row, ni mix column.
       SubByte(V,U);
      AddKey(U,V,K);
  
  
  for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
    C[i][j]=U[i][j];
}
// desallocation memoire
  for(i=0;i<2;i++)
    {
      free(U[i]);
      free(V[i]);
      free(W1[i]);
      free(W[i]);
    }
      free(U);
      free(V);
      free(W1);
      free(W);
}



int main()
{
   unsigned int **K,i,j;
   unsigned int r,compteur[256],clef,u1,u2;
   unsigned int ***M,***C;
   unsigned int somme1,somme2;
   srand(23429);



   //allocation dynamique tableau
  M=(unsigned int ***) malloc(16* sizeof(unsigned int**));
  C=(unsigned int ***) malloc(16* sizeof(unsigned int**));

  for(i=0;i<16;i++)
    {
      M[i]=(unsigned int **) malloc(2* sizeof(unsigned int *));
      C[i]=(unsigned int **) malloc(2* sizeof(unsigned int *));
      for(j=0;j<2;j++)
	{
	  M[i][j]=(unsigned int *) malloc( 2*sizeof(unsigned int));
	  C[i][j]=(unsigned int *) malloc( 2*sizeof(unsigned int));
	}
    }
 
  // la clef  
  K=(unsigned int **) malloc(2* sizeof(unsigned int*));
  for(i=0;i<2;i++)
    {
      K[i]=(unsigned int *) malloc( 2*sizeof(unsigned int));
    }

   //On définit la clef
   K[0][0] = 7;
   K[1][1]= 13;
   K[1][0] = 9;
   K[0][1] = 9;

   // On chiffre les 16 messages
   for(i=0;i<16;i++)
     {
       M[i][0][0] = i;
       M[i][0][1]= 0;
       M[i][1][0] =0;
       M[i][1][0] =0;

       chiffrement(C[i],M[i],K);      
     }
  

   // maintenant on va chercher les 2blocs  K[0,0] et K[1,0] de la premiere colone de K.
   // pour chacune des valeurs  possibles pour  K[0,0] et K[1,0] on "pele la derniere ronde"
   for(clef=0;clef<256;clef++)
     {
       somme1=0;
       somme2=0;

       for(i=0;i<16;i++)
	 {
	   somme1=somme1^Sinverse[C[i][0][0] ^ (clef & 15)];
	   somme2=somme2^Sinverse[C[i][1][0] ^ ((clef >> 4) & 15)];
	 }
       if( (somme1 == 0) && (somme2 == 0))
	 {
	   compteur[clef]=1;
	   printf("clef posible = %u, %u \n",clef & 15,((clef>>4) & 15)); 
	 }
       else
	 compteur[clef]=0;
     }
  
}

