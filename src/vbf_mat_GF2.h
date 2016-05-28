#ifndef VBF_mat_GF2__H
#define VBF_mat_GF2__H

#include <vector>
#include <NTL/mat_GF2.h>
#include <NTL/vec_long.h>
#include <algorithm>
#include "vbf_vec_GF2.h"
#include "vbf_ZZ.h"
#include "vbf_tools.h"

NTL_CLIENT

class vbf_mat_GF2: public mat_GF2 {

  int IsNotDefined(const mat_GF2& a);

  void concat_mat_GF2(mat_GF2& X, const mat_GF2& A, const mat_GF2& B);
  inline mat_GF2 concat_mat_GF2(const mat_GF2& A, const mat_GF2& B)
     { mat_GF2 X; concat_mat_GF2(X, A, B); NTL_OPT_RETURN(mat_GF2, X); }

  void directsum_mat_GF2(mat_GF2& X, const mat_GF2& A, const mat_GF2& B);

  void composition_mat_GF2(mat_GF2& X, const mat_GF2& A, const mat_GF2& B);
  // X = A comp B being A

  mat_GF2 rev(const mat_GF2& X, int n, int m);
  // Obtain Truth Table from ANF Table

  void juxtapose(mat_GF2& X, const mat_GF2& A, const mat_GF2& B);
  // X = A | B

  void reverse(mat_GF2& B, const mat_GF2& A);
  // B = reverse of A rows

  int IsConstant(const mat_GF2& A);

  mat_GF2 matGF2_seq(long rows, long cols);
  // Returns a matrix whose rows are the binary representation of 0,1,2,...rows-1

  void print(NTL_SNS ostream& s, const mat_GF2& a);

  void project(mat_GF2& X, const mat_GF2& A, const vec_long& b);

  int IsLinear(mat_GF2& X, const mat_GF2& A);
// If A is linear it returns 1 and the generator matrix X, else it returns 0.

  void mat_GF2tovec_long(vec_long& x, const mat_GF2& a);

  void conv_longtomat_GF2(mat_GF2& x, const vec_long& a);

  int aibf(const vec_GF2& f, int n, int d);

  mat_GF2 invltt(const mat_GF2& A, long spacen, int m);

}; // end class vbf_mat_GF2

int IsNotDefined(const mat_GF2& a)
{
   long n = a.NumRows();

   if (n > 0) return 0;
  
   return 1;
}

void concat_mat_GF2(mat_GF2& X, const mat_GF2& A, const mat_GF2& B)
{
   long n = A.NumRows();  
   long m = A.NumCols();  
   long p = B.NumRows();  
   long q = B.NumCols(); 
   long row;   
   mat_GF2 C;
  
   X.SetDims(n*p, m+q);  
   C.SetDims(p,q);
  
   long i, j, k;  
  
   for (i = 1; i <= n; i++) {  
      for (j = 1; j <= p; j++) { 
	 row = j+(i-1)*p;
	 for (k = 1; k <= m; k++) { 
	    X(row,k)=A(i,k);
         }
	 for (k = 1; k <= q; k++) { 
	    X(row,k+m)=B(j,k);
         }
      }
   }  
}

void directsum_mat_GF2(mat_GF2& X, const mat_GF2& A, const mat_GF2& B)
{
   long n = A.NumRows();  
   long m = A.NumCols();  
   long p = B.NumRows();  
   long i,j,k,row;  

   if (m != B.NumCols()) Error("directsum: Image dimension mismatch");
  
   X.SetDims(n*p, m);  

   int numbits = logtwo(n);
  
   for (i = 0; i < n; i++) {  
      for (j = 0; j < p; j++) {  
	 for (k = 0; k < m; k++) {
	    row = (i<<numbits)+j;
	    X[row][k] = A[i][k]+B[j][k];
	 }
      }
   }  
}

// A o B
void composition_mat_GF2(mat_GF2& X, const mat_GF2& A, const mat_GF2& B)
{
   long ra = A.NumRows();  
   long ca = A.NumCols();  
   long rb = B.NumRows();  
   long cb = B.NumCols();
   long r, i, pos; 
   vec_GF2 v;

   r = logtwo(ra);
   if (cb != r) Error("composition: dimensions mismatch");
  
   X.SetDims(rb, ca); 

   for (i = 0; i < rb; i++) 
   {
      v = B[i];
      pos = conv_long(v);
      X[i] = A[pos];
   } 

}

mat_GF2 rev(const mat_GF2& X, int n, int m)
{
   mat_GF2 Y, Z;
   long    k, mi, numrows;
   int     i, j;

   numrows = (1 << n);

   Y.SetDims(numrows, m);
   Z.SetDims(numrows, m);
   Y = X;
  
   for (j = 0; j < m; j++) 
   {
      mi = 1;
      for (i = 0; i < n; i++) 
      {
         for (k = 0; k < numrows; k++)
           if ((k >> i) % 2) Z[k][j] = Y[k-mi][j] + Y[k][j];
           else Z[k][j] = Y[k][j];
         for (k = 0; k < numrows; k++) Y[k][j]= Z[k][j];
         mi *= 2;
      }   
   }
  
   return Y;
}

void juxtapose(mat_GF2& X, const mat_GF2& A, const mat_GF2& B)
{
    long i, j;  
    int an = A.NumRows();
    int am = A.NumCols();
    int bn = B.NumRows();  
    int bm = B.NumCols();

    if (an != bn)   
       Error("juxtapose: Row dimension mismatch");  
         
    X.SetDims(an,(am+bm));
    for (i = 0; i < an; i++)  
    {
       for (j = 0; j < am; j++)
       {
   	  X[i][j]=A[i][j];
       }	
       for (j = am; j < (am+bm); j++)
       {
   	  X[i][j]=B[i][j-am];
       }	
    }  

}

int IsConstant(const mat_GF2& A)
{	
   long i, j;
     
   for (i = 0; i < A.NumRows(); i++) 
   { 
      for (j = 0; j < (A.NumCols()-1); j++)
      {
      	 if (A[i][j] != A[i][j+1]) return 0;
      }
   }
   return 1;
}

void reverse(mat_GF2& B, const mat_GF2& A)
// B = reverse of A rows
{
   long i,n,m;

   n = A.NumRows();
   m = A.NumCols();
   B.SetDims(n,m);

   for (i= 0;i < n;i++) 
   {
      reverse(B[i],A[i]);
   }

}

mat_GF2 matGF2_seq(long rows, long cols)
{
   mat_GF2 A;
   long i;

   A.SetDims(rows,cols);
   for (i = 0; i < rows; i++)
   {
      A[i] = to_vecGF2(i,cols);
   }
   return A;
}
	
void print(NTL_SNS ostream& s, const mat_GF2& a)  
{  
   long i, j;  
      
   for (i = 0; i < a.NumRows(); i++) 
   {
      for (j = 0; j < a.NumCols(); j++)
      {
         s << " " << a[i][j];
      }   
      s << "\n";	 
   }
}  

void project(mat_GF2& X, const mat_GF2& A, const vec_long& b)
{
    long i;  
    int an = A.NumRows();
    int am = A.NumCols();
    int bn = b.length();  
    mat_GF2 ATr, XTr;

    if (am < bn)   
       Error("project: Excesive coordinates to be projected");  
         
    X.SetDims(an,bn);
    ATr = transpose(A);
    XTr = transpose(X);

    for (i = 0; i < bn; i++)  
    {
       XTr[i] = ATr[b[i]];
    }  
    X = transpose(XTr);
  
}

// If A is linear it returns 1 and the generator matrix X, else it returns 0.
int IsLinear(mat_GF2& X, const mat_GF2& A)
{
    long i;
    int spacen = A.NumRows();
    int m = A.NumCols();
    int n;
    vec_GF2 bin;
    mat_GF2 B;

    n = logtwo(spacen);
    X.SetDims(n,m);
    B.SetDims(spacen,m);

    X[0]=A[1];

    for (i = 1; i < n; i++)
	X[i] = A[1 << i];

    for (i = 0; i < spacen; i++)
    {
        bin = to_vecGF2(i,n);
        mul(B[i],bin,X);
    }
   
    if (A == B)
    {
	return 1;
    } else {
	return 0;
    } 
}

void mat_GF2tovec_long(vec_long& x, const mat_GF2& a)
{
   long n = a.NumRows();

   if (n == 0) {
      x.SetLength(0);
      return;
   }

   long i;

   x.SetLength(n);
   for (i = 0; i < n; i++)
      x[i] = conv_long(a[i]);
} 

void conv_longtomat_GF2(mat_GF2& x, const vec_long& a)
{
   long n = a.length();

   if (n == 0) {
      x.SetDims(0,0);
      return;
   }

   long i, max = 0;
   int m = 1;

   for (i = 0; i < n; i++)
      if (a[i] > max) max = a[i];

   while (conv_long(to_vecGF2(max,m)) != max)
      m++;

   x.SetDims(n,m);
   for (i = 0; i < n; i++)
      x[i] = to_vecGF2(a[i],m);
}

vec_long Combinations(const int& n, const int& r)
{
   long a, cont = 0;
   vec_long w;

   std::vector<bool> v(n);
   std::fill(v.begin(), v.end() - n + r, true);

   w.SetLength(to_long(numofweight(n,r)));
   w[cont] = 0;

   do {
       a = 0;
       for (int i = 0; i < n; ++i) {
           if (v[i]) {
               a = a + (1 << i);
           }
       }
       w[cont] = a;
       cont++;
   } while (std::prev_permutation(v.begin(), v.end()));

   return w;
}

int has_annihilator(const vec_GF2& f,const int& n, const int& deg)
{
   int i;
   long a,b,j,k,spacen,cont,r;
   NTL::mat_GF2 M,X,T;
   NTL::vec_long c;
   vector<long> support;

   spacen = 1 << n;
   NTL::mat_GF2 A(INIT_SIZE, spacen,1);

   support.clear();
   for (i = 0; i < f.length(); i++)
   {
      if (f[i] == 1) support.push_back(i);
   }

   a = 0;
   for (i = 0; i <= deg; i++)
   {
      a = a + to_long(numofweight(n,i));
   }
   b = weight(f);
   M.SetDims(a,b);

   cont = 0;
   for (i = 0; i <= deg; i++)
   {
       c = Combinations(n,i);
       for (j = 0; j < c.length(); j++)
       {
           clear(A);
           A[c[j]][0] = 1;
           T = rev(A, n, 1);
           for (k = 0; k < b; k++)
           {
              M[cont][k] = T[support[k]][0];
           }
           cont++;
       }
   }

   kernel(X,M);
   r = gauss(X);

   return r;
}

int aibf(const vec_GF2& f, int n, int d)
{
   int i;
   long j;
   vec_GF2 g;

   g=f;
   for (j = 0; j < g.length(); j++) g[j] = f[j]+1;

   for (i = 0; i <= d; i++)
   {
      if (has_annihilator(f,n,i)) return i;
      if (has_annihilator(g,n,i)) return i;
   }

   return 0;
}

mat_GF2 invltt(const mat_GF2& A, long spacen, int m)
{
   long index;
   int i;
   NTL::vec_GF2 bin;
   NTL::mat_GF2 Atrans, X, Xtrans;

   Atrans = transpose(A);
   X.SetDims(spacen, m);
   Xtrans.SetDims(m,spacen);
   bin.SetLength(m);

   for (i = 0; i < m; i++)
   {
       clear(bin);
       bin[i] = 1;
       index = conv_long(bin);
       Xtrans[i] = Atrans[index];
   }
   X = transpose(Xtrans);
   return X;
}

#endif
