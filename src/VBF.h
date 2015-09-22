/**************************************************************************\

CLASS: VBF

SUMMARY:

The class VBF implements Vector Boolean Functions.
n = Argument dimension
m = Image dimension
They can be defined in different representations:

	-anf = 2^n x m mat_GF2 with coefficients in normal form
	-tt = 2^n x m mat_GF2 representing the truth table 
	-per = 1 x m vec_ZZ representing the permutation transformation (n==m)
	-exp_comp = 1 x m vec_ZZ representing the expansion and compression transformation (n!=m)
	-linmat = n x m mat_GF2 representing the matrix associated with a linear Vector Boolean Function 
	-trac = GF2EX representing trace with GF2X primitive polynomial
        -hex = Hexadecimal representation of the Truth Table
	-dec = Decimal representation of The Truth Table	
	
\**************************************************************************/

#ifndef VBF__H
#define VBF__H

#include "vbf_mat_GF2.h"
#include "vbf_mat_ZZ.h"
#include "vbf_mat_RR.h"
#include "vec_pol.h"
#include "vbf_GF2EX.h"
#include "vbf_GF2X.h"
#include <NTL/vec_vec_long.h>

const int ANFMATRIX=1;
const int TTMATRIX=2;
const int PERTRANSF=3;
const int WALSHMATRIX=4;
const int EXP_COMP_TRANSF=5;
const int SBOXMATRIX=6;
const int LTTMATRIX=7;
const int CTTMATRIX=8;
const int TRACE=9;
const int AFFINEMATRIX=10;
const int CHARMATRIX=11;

NTL_CLIENT

const NTL::RR NOTDEFINED = to_RR(-1);
const NTL::RR ZERO = to_RR(0);
const NTL::RR ONE = to_RR(1);
const int UNDEFINED = -1;
const int BENT = 1;
const int LINEAR = 2;
const int ALMOST_BENT = 3;

namespace VBFNS {

   class VBF;

// start class VBF   	
   class VBF {  
   public:  
     NTL::mat_GF2 _VBF__anf;   
     NTL::mat_GF2 _VBF__tt; 
     NTL::mat_GF2 _VBF__ltt; 
     NTL::mat_ZZ _VBF__ctt; 
     NTL::mat_ZZ _VBF__char;
     NTL::vec_ZZ _VBF__per;
     NTL::mat_GF2 _VBF__lin;
     NTL::mat_GF2 _VBF__affinemat;
     NTL::vec_GF2 _VBF__affinevec;
     NTL::mat_ZZ _VBF__walsh;
     NTL::mat_ZZ _VBF__sbox;     
     vec_pol _VBF__pol;
     NTL::mat_ZZ _VBF__LAT;
     NTL::mat_ZZ _VBF__DAT;
     NTL::mat_ZZ _VBF__AC;
     NTL::mat_ZZ _VBF__FWH;
     NTL::mat_ZZ _VBF__FAC;
     vector< pair<long, long> > _VBF__ls;
     vector<long> _VBF__fp;
     vector<long> _VBF__nfp;
     NTL::GF2X _VBF__irrpol;
     NTL::GF2EX _VBF__trace;
     NTL::vec_ZZ _VBF__cycle;
     int _VBF__rep;  
     int _VBF__n;  
     int _VBF__m; 
     long _VBF__spacen;  
     long _VBF__spacem; 
     NTL::RR _VBF__nl; 
     NTL::RR _VBF__ld; 
     NTL::RR _VBF__lp; 
     NTL::ZZ _VBF__maxLAT; 
     NTL::RR _VBF__dp; 
     NTL::ZZ _VBF__maxDAT;
     NTL::ZZ _VBF__maxAC;
     NTL::ZZ _VBF__sigma;
     int _VBF__CI;
     int _VBF__bal;
     int _VBF__typenl;
     int _VBF__deg; 
     int _VBF__PC; 
     long _VBF__wt;

     // Initialization of the scalar values        
     VBF() { _VBF__n = 0; _VBF__m = 0; _VBF__rep = UNDEFINED; _VBF__spacen = 0; _VBF__spacem = 0; _VBF__nl = -1; _VBF__ld = -1; _VBF__lp = -1; _VBF__maxLAT = -1; _VBF__dp = -1; _VBF__maxDAT = -1; _VBF__maxAC = -1; _VBF__sigma = -1; _VBF__CI = -1; _VBF__bal = -1; _VBF__typenl = -1; _VBF__deg = -1; _VBF__PC = -1; _VBF__wt = -1; } 

     VBF(const int n, const int m) { _VBF__n = n; _VBF__m = m; _VBF__spacen = (1 << n); _VBF__spacem = (1 << m); } 

     VBF& operator=(const VBF& a)   
     {   	
   	kill();
      	VBF(a.n(),a.m());
      	_VBF__rep = a.getrep();
      	    	
        _VBF__anf.SetDims(_VBF__spacen, _VBF__m);	
	_VBF__anf = a.getanf();  
	
        _VBF__tt.SetDims(_VBF__spacen, _VBF__m);	
	_VBF__tt = a.gettt();

        _VBF__ltt.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__ltt = a.getltt();

        _VBF__ctt.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__ctt = a.getctt();
		  
        _VBF__per.SetLength(_VBF__m);
	_VBF__per = a.getper(); 

        _VBF__lin.SetDims(_VBF__n, _VBF__m);
	_VBF__lin = a.getexp_comp();
	
        _VBF__affinemat.SetDims(_VBF__n, _VBF__m);
        _VBF__affinemat = a.getaffinemat();

        _VBF__affinevec.SetLength(_VBF__n);
        _VBF__affinevec = a.getaffinevec();

        _VBF__char.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__char = a.getchar();

        _VBF__walsh.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__walsh = a.getwalsh();

        long c = _VBF__spacen/_VBF__m;

        _VBF__sbox.SetDims(_VBF__m, c);
        _VBF__sbox = a.getsbox();

        _VBF__pol = a.getpol();

        _VBF__irrpol = a.getirrpol();
	_VBF__trace = a.gettrace();

        _VBF__LAT.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__LAT = a.getLAT();

        _VBF__DAT.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__DAT = a.getDAT();

        _VBF__AC.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__AC = a.getAC();

	c = (_VBF__n >> 1)+1;
	long d = _VBF__spacem-1;
	
	_VBF__FWH.SetDims(c, d);
	_VBF__FWH = a.getfwh();
	_VBF__FAC.SetDims(c, d);
	_VBF__FAC = a.getfac();
	_VBF__ls = a.getls();
        _VBF__fp = a.getfp();
        _VBF__nfp = a.getnfp();
	NTL::vec_ZZ _VBF__cycle(INIT_SIZE,_VBF__spacen);
        _VBF__cycle = a.getcycle();

        _VBF__nl = a.getnl(); 
        _VBF__ld = a.getld(); 
        _VBF__lp = a.getlp(); 
        _VBF__dp = a.getdp(); 
     	_VBF__CI = a.getCI();
     	_VBF__bal = a.getbal();
        _VBF__typenl = a.gettypenl();
     	_VBF__deg = a.getdeg();   
     	_VBF__PC = a.getPC(); 
        _VBF__maxLAT = a.getmaxlat();
        _VBF__maxDAT = a.getmaxdat();
	_VBF__maxAC = a.getmaxac();
	_VBF__sigma = a.getsigma();
        _VBF__wt = a.getwt();
     	     	 
        return *this;
     }  

     ~VBF() { }

     // free space and Initialize values to 0.
     void kill()
     {  
   	_VBF__n = 0;  
   	_VBF__m = 0; 
   	_VBF__rep = UNDEFINED;
        _VBF__spacen = 0;
        _VBF__spacem = 0;
        _VBF__nl = -1; 
        _VBF__ld = -1; 
        _VBF__lp = -1; 
        _VBF__dp = -1; 
     	_VBF__CI = -1;
     	_VBF__bal = -1;
        _VBF__typenl = -1;
     	_VBF__deg = -1;   
     	_VBF__PC = -1;   
        _VBF__maxLAT = -1;
        _VBF__maxDAT = -1; 
	_VBF__maxAC = -1;
	_VBF__sigma = -1;
        _VBF__wt = -1;
          
     	_VBF__anf.kill();  
     	_VBF__tt.kill();
	_VBF__ltt.kill();
	_VBF__ctt.kill();
     	_VBF__per.kill();
     	_VBF__lin.kill();  
        _VBF__char.kill();
      	_VBF__walsh.kill();
      	_VBF__sbox.kill();
        _VBF__irrpol.kill();
	_VBF__trace.kill();
      	_VBF__LAT.kill();
      	_VBF__DAT.kill();
      	_VBF__AC.kill();
	_VBF__FWH.kill();
	_VBF__FAC.kill();
	_VBF__cycle.kill();
     }

     // returns the argument dimension     
     int n() const { return _VBF__n; } 

     // returns the image dimension
     int m() const { return _VBF__m; } 

     // returns the argument number of elements    
     int spacen() const { return _VBF__spacen; } 

     // returns the image number of elements
     int spacem() const { return _VBF__spacem; } 

     // getrep() returns the representation associated with the VBF
     int getrep() const { return _VBF__rep; } 

     // returns 2^n x m matrix with coefficients in ANFMATRIX.
     NTL::mat_GF2 getanf() const { return _VBF__anf; }
   
     // returns 2^n x m representing the truth table
     NTL::mat_GF2 gettt() const { return _VBF__tt; }

     // returns 2^n x 2^m representing the linear combinations of truth table
     NTL::mat_GF2 getltt() const { return _VBF__ltt; }

     // returns 2^n x 2^m representing the character form of linear combinations of truth table
     NTL::mat_ZZ getctt() const { return _VBF__ctt; }
    
     // returns 1 x m NTL::vec_ZZ representing the permutation transformation
     NTL::vec_ZZ getper() const { return _VBF__per; } 

     // returns n x m NTL::mat_GF2 representing the expansion and compression DES permutations 
     NTL::mat_GF2 getexp_comp() const { return _VBF__lin; } 

     // returns n x m NTL::mat_GF2 representing the linear transformation
     NTL::mat_GF2 getlinmat() const { return _VBF__lin; }

     // returns polynomial representing the VBF
     vec_pol getpol() const { return _VBF__pol; } 

     // set the polynomial to p
     void putpol(vec_pol& p) { NTL::mat_GF2 a; _VBF__pol = p; a = mat(p); putanf(a); }

     // returns the irreducible polynomial associated with the VBF
     GF2X getirrpol() const { return _VBF__irrpol; } 

     // set the irreducible polynomial to p
     void putirrpol(GF2X& p)
     { 
	_VBF__irrpol = p;

        NTL::GF2E::init(p);

       if (_VBF__rep == UNDEFINED)
           _VBF__rep = TRACE;

     }

     // set the irreducible polynomial to p
     void putirrpol(string& str)
     {
        _VBF__irrpol = str2GF2X(str);

        NTL::GF2E::init(_VBF__irrpol);

       if (_VBF__rep == UNDEFINED)
           _VBF__rep = TRACE;

     }

     // returns the trace associated with the VBF
     GF2EX gettrace() const { return _VBF__trace; }

     // set the trace to str 
     void puttrace(string& str) 
     {
	long d;

	d = deg(_VBF__irrpol);

        if (d <= 0) 
           Error("puttrace: bad args");

        _VBF__n = d;
        _VBF__m = _VBF__n;
        _VBF__spacen = (1 << _VBF__n);
        _VBF__spacem = _VBF__spacen;
 
       if (_VBF__rep == UNDEFINED)
           _VBF__rep = TRACE;
	
       _VBF__trace = str2GF2EX(str,d);
     }

     // set the Truth Table with binary representation to s
     // The format must be 1 row for each of the Coordinate functions:
     // f1
     // f2
     // ...
     // fm

     void putBinTT(istream& s)
     {
       long c,i,j,val,cont;
       int salta_c = 0;
       vector<int> ibuf;

       _VBF__m = 0;
       c = s.peek();
       val = CharToIntVal(c);
       while (val != -1) {
          if (!salta_c)
          {
            ibuf.push_back(val);
          } else {
            salta_c = 0;
          }

          s.get();
          c = s.peek();
          if (c == '\n')
          { 
             _VBF__m += 1;
             salta_c = 1;
             if (_VBF__spacen <= 0)
                _VBF__spacen = ibuf.size();
          } else {
             val = CharToIntVal(c);
          }
       }

       _VBF__spacem = 1 << _VBF__m;
       _VBF__n = logtwo(_VBF__spacen);

       if (_VBF__rep == UNDEFINED)
          _VBF__rep = TTMATRIX;

       _VBF__tt.SetDims(_VBF__spacen, _VBF__m);

       cont = 0;
       for (j = 0; j < _VBF__m; j++)
       {
          for (i = 0; i < _VBF__spacen; i++)
          {
              _VBF__tt[i][j] = to_GF2(ibuf[cont]);
              cont++;
          }
       }

     }

     // get the Truth Table in binary representation
     // Only for Boolean Functions m=1
     void getBinTT(ostream& s)
     {
       long i, j;

       for (j = 0; j < _VBF__m; j++)
       {
          for (i = 0; i < _VBF__spacen; i++)
          {
             s << _VBF__tt[i][j]; 
          }
          s << endl;
       }

     }

     // set the Truth Table with Hexadecimal representation to s
     // Only for Boolean Functions m=1
     void putHexTT(istream& s)
     {
       long c,i,j,val,cont;
       int salta_c = 0;
       NTL::vec_GF2 bin;
       vector<int> ibuf;

       _VBF__m = 0;
       c = s.peek();
       val = CharToIntVal(c);
       while (val != -1) {
          if (!salta_c)
          {
             bin = to_vecGF2(val,4);
             for (i = 0; i < 4; i++)
                ibuf.push_back(rep(bin[i]));
          } else {
             salta_c = 0;
          }

          s.get();
          c = s.peek();
          if (c == '\n')
          {
             _VBF__m += 1;
             salta_c = 1;
             if (_VBF__spacen <= 0)
                _VBF__spacen = ibuf.size();
          } else {
             val = CharToIntVal(c);
          }
       }

       _VBF__spacem = 1 << _VBF__m;
       _VBF__n = logtwo(_VBF__spacen);

       if (_VBF__rep == UNDEFINED)
          _VBF__rep = TTMATRIX;

       _VBF__tt.SetDims(_VBF__spacen, _VBF__m);

       cont = 0;
       for (j = 0; j < _VBF__m; j++)
       {
          for (i = 0; i < _VBF__spacen; i++)
          {
              _VBF__tt[i][j] = to_GF2(ibuf[cont]);
              cont++;
          }
       }

     }

     // get the Truth Table in Hexadecimal representation
     // Only for Boolean Functions m=1
     void getHexTT(ostream& s)
     {
       long i,j,k;
       NTL::vec_GF2 bin;

       bin.SetLength(4);
       
       for (j = 0; j < _VBF__m; j++)
       {
          for (i = 0; i < _VBF__spacen; i += 4)
          {
	     for (k = 0; k < 4; k++)
             {
                bin[k] = _VBF__tt[i+k][j];
             }
             s << IntValToChar(conv_long(bin));
          }
          s << endl;
       }

     }

     // set Truth Table to the Decimal representation d
     // knowing that the number of columns is m 
     void putDecTT(const NTL::vec_long& d,const long& m)
     {
	long i;
        long spacen = d.length();

        if (spacen < 0 || m < 0)
           Error("putDecTT: bad args");

        _VBF__spacen = spacen;
        _VBF__m = m;
        _VBF__spacem = (1 << _VBF__m);
        _VBF__n = logtwo(spacen);

        if (_VBF__rep == UNDEFINED)
           _VBF__rep = TTMATRIX;

        _VBF__tt.SetDims(_VBF__spacen, _VBF__m);
        for (i = 0; i < _VBF__spacen; i++)
    	{
	   _VBF__tt[i] = to_vecGF2(d[i],_VBF__m);
   	}
     }

     NTL::vec_long getDecTT() const 
     { 
        long i;
 	NTL::vec_long d;

        d.SetLength(_VBF__spacen);

        for (i = 0; i < _VBF__spacen; i++)
        {
           d[i] = conv_long(_VBF__tt[i]);
        }

        return d; 
     }
 
     // returns VBF's linear structures
     vector< pair<long, long> > getls() const { return _VBF__ls; } 

     // set the linear structures to v
     void putls(vector< pair<long, long> >& v) { _VBF__ls = v; }

     // returns VBF's fixed points
     vector<long> getfp() const { return _VBF__fp; }

     // set the fixed points to v
     void putfp(vector<long>& v) { _VBF__fp = v; }

     // returns VBF's negated fixed points
     vector<long> getnfp() const { return _VBF__nfp; }

     // set the negated fixed points to v
     void putnfp(vector<long>& v) { _VBF__nfp = v; }

     // returns VBF's cycle structure
     NTL::vec_ZZ getcycle() const { return _VBF__cycle; }

     // set the cycle structure to c
     void putcycle(const NTL::vec_ZZ& c) { _VBF__cycle = c; }

     // set ANF Table to a
     void putanf(const NTL::mat_GF2& a) 
     {  
   	long spacen = a.NumRows();
   	long m = a.NumCols();
   	   	
   	if (spacen < 0 || m < 0)  
      	   Error("putanf: bad args");  

   	_VBF__spacen = spacen;
   	_VBF__m = m;
   	_VBF__spacem = (1 << _VBF__m);   
        _VBF__n = logtwo(spacen);
        
	if (_VBF__rep == UNDEFINED)
      	   _VBF__rep = ANFMATRIX;
     
        _VBF__anf.SetDims(_VBF__spacen, _VBF__m);
        _VBF__anf = a;  	  
     }
  
     // set Truth Table to a
     void puttt(const NTL::mat_GF2& a) 
     {  
   	long spacen = a.NumRows();
   	long m = a.NumCols();
   	   	
   	if (spacen < 0 || m < 0)  
      	   Error("puttt: bad args");  

   	_VBF__spacen = spacen;
   	_VBF__m = m;
   	_VBF__spacem = (1 << _VBF__m);
        _VBF__n = logtwo(spacen);

	if (_VBF__rep == UNDEFINED)           
      	   _VBF__rep = TTMATRIX;
     
        _VBF__tt.SetDims(_VBF__spacen, _VBF__m);
        _VBF__tt = a; 
     }

     // set Linear Combinations of Truth Table to a
     void putltt(const NTL::mat_GF2& a)
     {
        long spacen = a.NumRows();
        long spacem = a.NumCols();

        if (spacen < 0 || spacem < 0)
           Error("putltt: bad args");

        _VBF__spacen = spacen;
        _VBF__spacem = spacem;
        _VBF__n = logtwo(spacen);
	_VBF__m = logtwo(spacem);

        if (_VBF__rep == UNDEFINED)
           _VBF__rep = LTTMATRIX;

        _VBF__ltt.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__ltt = a;
     }

     // set character form of Linear Combinations of Truth Table to a
     void putctt(const NTL::mat_ZZ& a)
     {
        long spacen = a.NumRows();
        long spacem = a.NumCols();

        if (spacen < 0 || spacem < 0)
           Error("putctt: bad args");

        _VBF__spacen = spacen;
        _VBF__spacem = spacem;
        _VBF__n = logtwo(spacen);
        _VBF__m = logtwo(spacem);

        if (_VBF__rep == UNDEFINED)
           _VBF__rep = CTTMATRIX;

        _VBF__ctt.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__ctt = a;
     }

     // set Permutation Transformation to a
     void putper(const NTL::vec_ZZ& a) 
     {  
     	long i;
   	long m = a.length();
   	long n = m;
   	
   	if (m < 0)  
      	   Error("putper: bad args");  

      	_VBF__n = n; 
      	_VBF__m = m;  
      	_VBF__spacen = (1 << n);
      	_VBF__spacem = (1 << m);
        _VBF__nl = ZERO; 
        _VBF__ld = ZERO; 
        _VBF__lp = ONE; 
        _VBF__dp = ONE; 

	if (_VBF__rep == UNDEFINED)
	  _VBF__rep = PERTRANSF;   	
   
   	_VBF__per.SetLength(_VBF__m);     
   	for (i = 0; i < _VBF__m; i++)
   	{
      	   _VBF__per[i] = a[i];  
   	} 
     }	

     // set Expansion or Compresion transformation 
     void putexp_comp(const NTL::vec_ZZ& a) 
     {  
     	long i, n;
   	long m = a.length();
   	
   	if (m < 0)  
      	   Error("putexp_comp: bad args");  

        n = to_long(maxvalue(a));
      	_VBF__n = n; 
      	_VBF__m = m;  
      	_VBF__spacen = (1 << n);
      	_VBF__spacem = (1 << m);
        _VBF__nl = ZERO; 
        _VBF__ld = ZERO; 
        _VBF__lp = ONE; 
        _VBF__dp = ONE; 

	if (_VBF__rep == UNDEFINED)
	  _VBF__rep = EXP_COMP_TRANSF;   	

       _VBF__lin.SetDims(n, m);
   	for (i = 1; i <= m; i++)
   	{
      	   _VBF__lin(to_long(a(i)),i) = 1;  
   	}   
     }	

     // set Matrix and vector associated with Affine VBF 
     void putaffine(const NTL::mat_GF2& A,const NTL::vec_GF2& b)
     {
        _VBF__n = A.NumRows();
        _VBF__m = A.NumCols();
        int n = b.length();

        if ((_VBF__n < 0) || (_VBF__m < 0) || (_VBF__n != _VBF__m) || (n != _VBF__n))
           Error("putaffine: bad args");

        _VBF__spacen = (1 << _VBF__n);
        _VBF__spacem = (1 << _VBF__m);
        _VBF__nl = ZERO;
        _VBF__ld = ZERO;
        _VBF__lp = ONE;
        _VBF__dp = ONE;

        if (_VBF__rep == UNDEFINED)
          _VBF__rep = AFFINEMATRIX;

     	_VBF__affinemat = A;
        _VBF__affinevec = b;
     }

     // returns the n x m matrix which constitutes the Matrix of the affine VBF
     NTL::mat_GF2 getaffinemat() const { return _VBF__affinemat; }

     // returns the n vector which constitutes the vector of the affine VBF
     NTL::vec_GF2 getaffinevec() const { return _VBF__affinevec; }

     // returns the 2^n x 2^m matrix which constitutes the Characteristic Function
     NTL::mat_ZZ getchar() const { return _VBF__char; }

     // set Characteristic Function to a
     void putchar(const NTL::mat_ZZ& a)
     {
        long spacen = a.NumRows();
        long spacem = a.NumCols();

        if (spacen < 0 || spacem < 0)
           Error("putchar: bad args");

        _VBF__spacen = spacen;
        _VBF__m = logtwo(spacem);
        _VBF__spacem = spacem;
        _VBF__n = logtwo(spacen);

        if (_VBF__rep == UNDEFINED)
           _VBF__rep = CHARMATRIX;

        _VBF__char.SetDims(_VBF__spacen, _VBF__spacem);
        _VBF__char = a;
     }

     // returns the 2^n x 2^m matrix which constitutes the Walsh Spectrum
     NTL::mat_ZZ getwalsh() const { return _VBF__walsh; }

     // set Walsh Spectrum
     void putwalsh(const NTL::mat_ZZ& a)
     {  
   	long spacen = a.NumRows();
   	long spacem = a.NumCols();
   	
   	if (spacen < 0 || spacem < 0)  
      	   Error("putwalsh: bad args");  
  
      	_VBF__spacen = spacen;
      	_VBF__spacem = spacem;
        _VBF__n = logtwo(spacen);
        _VBF__m = logtwo(spacem);

	if (_VBF__rep == UNDEFINED)        
      	   _VBF__rep = WALSHMATRIX; 
     	  
        _VBF__walsh.SetDims(_VBF__spacen, _VBF__spacem);  
        _VBF__walsh = a;
     }

     // returns the m x 2^(n-log2(m)) matrix which constitutes the Sbox representation
     NTL::mat_ZZ getsbox() const { return _VBF__sbox; }

     // set Sbox representation like in DES
     void putsbox(const NTL::mat_ZZ& a)
     {  
   	long m = a.NumRows();
   	long c = a.NumCols();
   	long spacen = c*m;
	NTL::mat_GF2 t;
   	
   	if (spacen < 0 || m < 0)  
      	   Error("putsbox: bad args");  
  
      	_VBF__spacen = spacen;
      	_VBF__m = m;
        _VBF__n = logtwo(spacen);
        _VBF__spacem = (1 << m);

	if (_VBF__rep == UNDEFINED)        
      	   _VBF__rep = SBOXMATRIX; 
     	  
        _VBF__sbox.SetDims(_VBF__m, c);  
        _VBF__sbox = a;
         t = to_tt(a);
         puttt(t);
     }

     // Weight = Hamming weight of its Truth Table
     int getwt() const { return _VBF__wt; }
     void putwt(const long& a) { _VBF__wt = a; }

     // 2^n x 2^m matrix = Linear Approximation Table
     NTL::mat_ZZ getLAT() const { return _VBF__LAT; }
     void putLAT(const NTL::mat_ZZ& a) { _VBF__LAT = a; }
     
     // 2^n x 2^m matrix = Differential Approximation Table
     NTL::mat_ZZ getDAT() const { return _VBF__DAT; }
     void putDAT(const NTL::mat_ZZ& a) { _VBF__DAT = a; }

     // 2^n x 2^m matrix = Autocorrelation matrix
     NTL::mat_ZZ getAC() const { return _VBF__AC; }
     void putAC(const NTL::mat_ZZ& a) { _VBF__AC = a; }

     // 2^(n-1)+1 matrix = returns absolute Walsh values frequency distribution 
     NTL::mat_ZZ getfwh() const { return _VBF__FWH; }
     void putfwh(const NTL::mat_ZZ& a) { _VBF__FWH = a; }

     // 2^(n-1)+1 matrix = returns absolute AC values frequency distribution
     NTL::mat_ZZ getfac() const { return _VBF__FAC; }
     void putfac(const NTL::mat_ZZ& a) { _VBF__FAC = a; }
     
     /* cryptographic criteria */
     
     // Nonlinearity: 0 <= nl <= 2^{n-1}-2^{n/2-1}
     // Distance from the set of all affine VBF
     // nl = 2^{n-1}*(1-sqrt{lp})
     NTL::RR getnl() const { return _VBF__nl; }
     void putnl(const NTL::RR& a) { _VBF__nl = a; }

     // Linearity distance: 0 <= ld <= 2^{n-2}
     // Distance from the set of VBF with linear structures
     // ld = 2^{n-2}-(1/4)maxac
     NTL::RR getld() const { return _VBF__ld; }
     void putld(const NTL::RR& a) { _VBF__ld = a; }

     // Correlation order
     // Zero row of Walsh Spectrum associated with index of maximum weight
     int getCI() const { return _VBF__CI; }
     void putCI(const int& a) { _VBF__CI = a; }

     // Balancedness: 
     // The first row of Walsh spectrum is 0 (except from first element)
     // TT with weight 2^{n-1}
     // 0 = It is not balanced
     // 1 = It is balanced
     int getbal() const { return _VBF__bal; }
     void putbal(const int& a) { _VBF__bal = a; }

     // Type of function in terms of nonlinearity 
     // 1 = It is bent = nl = nlmax (only if n is even)
     // 2 = It is almost bent 
     // 3 = It is linear
     int gettypenl() const { return _VBF__typenl; }
     void puttypenl(const int& a) { _VBF__typenl = a; }

     // Algebraic degree:
     // Nonzero row of ANF Table associated with index of maximum weight
     int getdeg() const { return _VBF__deg; }
     void putdeg(const int& a) { _VBF__deg = a; }

     // Propagation Criterion
     // Constant row of DAT associated with index of maximum weight
     int getPC() const { return _VBF__PC; }
     void putPC(const int& a) { _VBF__PC = a; }
     
     /* attacks-related characteristics */

     // linear potential: 1/2^n <= lp <= 1
     NTL::RR getlp() const { return _VBF__lp; }	
     void putlp(const NTL::RR& a) { _VBF__lp = a; }

     // Maximum value of the LAT
     NTL::ZZ getmaxlat() const { return _VBF__maxLAT; }	
     void putmaxlat(const NTL::ZZ& a) { _VBF__maxLAT = a; }

     // Differential potential: 1/2^m <= dp <= 1
     NTL::RR getdp() const { return _VBF__dp; } 
     void putdp(const NTL::RR& a) { _VBF__dp = a; }

     // Maximum value of the DAT
     NTL::ZZ getmaxdat() const { return _VBF__maxDAT; }	
     void putmaxdat(const NTL::ZZ& a) { _VBF__maxDAT = a; }

     // Maximum value of the AC
     NTL::ZZ getmaxac() const { return _VBF__maxAC; }
     void putmaxac(const NTL::ZZ& a) { _VBF__maxAC = a; }

     // Sum-of-square indicator
     NTL::ZZ getsigma() const { return _VBF__sigma; }
     void putsigma(const NTL::ZZ& a) { _VBF__sigma = a; }

   };  // end class VBF


   void TT(NTL::mat_GF2& X, VBF& a)
   {
      int 		rep = a.getrep();
      int 		n = a.n();
      int 		m = a.m();
      NTL::mat_GF2	A;
                        
      X = a.gettt();

      if (IsNotDefined(X))
      {  
      	 if (rep == EXP_COMP_TRANSF)
      	 {
 	    long i, spacen = a.spacen();
      	    NTL::vec_GF2 bin;

	    X.SetDims(spacen, m);
            A = a.getexp_comp();
            
            for (i = 0; i < spacen; i++)  
            {
      	       bin = to_vecGF2(i,n);
	       mul(X[i],bin,A);
            }
         } else if (rep == AFFINEMATRIX)
         {
            long i, spacen = a.spacen();
            NTL::vec_GF2 bin, b;

            X.SetDims(spacen, m);
            A = a.getaffinemat();
            b = a.getaffinevec();

            for (i = 0; i < spacen; i++)
            {
               bin = to_vecGF2(i,n);
               mul(X[i],bin,A);
               X[i] += b;
            }
         } else if (rep == PERTRANSF) {
	    long l;
      	    NTL::vec_ZZ a_per;
            NTL::vec_GF2 bin;
	    NTL::mat_GF2 mat_aper;
 	    long i, spacen = a.spacen();

            a_per = a.getper();
            mat_aper.SetDims(n, n);
   	    for (i = 1; i <= n; i++)
   	    {
 	       l = (1 << (n-to_long(a_per(i))));
      	       bin = to_vecGF2(l,n);
      	       mat_aper(i) = bin;  
   	    } 
	    X.SetDims(spacen, n);
	   
	    for (i = 0; i < spacen; i++)  
            {
      	       bin = to_vecGF2(i,n);
	       mul(X[i],bin,mat_aper);
            }
         } else if (rep == ANFMATRIX) {
            A = a.getanf();
            X = rev(A, n, m);
         } else if (rep == CHARMATRIX) {
            NTL::mat_ZZ C;

            C = a.getchar();
            X = truthtable(C, n, m);
         } else if (rep == WALSHMATRIX) {
            NTL::mat_ZZ W, C;

            W = a.getwalsh();	
            C = invwt(W, n, m);
            X = truthtable(C, n, m);              	         
         } else if (rep == SBOXMATRIX) {
            NTL::mat_ZZ S;
            
            S = a.getsbox();
            X = to_tt(S);
         } else if (rep == LTTMATRIX) {
            long spacen = a.spacen();

            A = a.getltt();
            X = invltt(A,spacen,m);
         } else if (rep == CTTMATRIX) {
            long i, j, spacen = a.spacen(), spacem = a.spacem();
            NTL::mat_ZZ  C;

            C = a.getctt();
            A.SetDims(spacen,spacem);

            for (i = 0; i < spacen; i++)
            {
               for (j = 0; j < spacem; j++) {
                  if (C[i][j] == 1) {
                    A[i][j] = 0;
                  } else {
                    A[i][j] = 1;
                  }
               } 
            } 

            X = invltt(A,spacen,m);
         } else if (rep == TRACE) {
	    long i, spacen = a.spacen();
            NTL::mat_GF2 A,B;
	    GF2EX f; 
  	    vec_GF2E x,y;
            vec_vec_GF2 z;

	    f = a.gettrace();
  	    A = matGF2_seq(spacen,m);
            reverse(B,A);
            conv(x,B);
            eval(y,f,x);
   	    ofstream outemp("vec_GF2E_to_vec_vec_GF2.tmp");
   	    outemp << y;
   	    outemp.close();

   	    ifstream inputemp("vec_GF2E_to_vec_vec_GF2.tmp");
   	    inputemp >> z;
   	    inputemp.close();

  	    vec_GF2 c,d;

   	    d.SetLength(m);
   	    X.SetDims(spacen,m);

   	    for (i = 0; i < z.length(); i++)
   	    {
     	       VectorCopy(c,z[i],m);
      	       reverse(d,c);
      	       X[i] = d;
   	    }
         }     	         

         a.puttt(X);
      }
   }    

   inline NTL::mat_GF2 TT(VBF& a)	
   { NTL::mat_GF2 X; TT(X, a); return X; }

   void LTT(NTL::mat_GF2& X, VBF& a)
   {
      unsigned long     cols = a.spacen();
      unsigned long     rows = a.m();
      unsigned long     num = a.spacem();
      NTL::mat_GF2      T,Ttrans;
      NTL::vec_GF2 	bin;
      unsigned long 	i,j;

      X = a.getltt();
      if (IsNotDefined(X))
      {
    	 T = TT(a);
	 Ttrans = transpose(T);
	 NTL::mat_GF2 A(INIT_SIZE, num, cols);

         for (i = 0; i < num; i++)
         {
           bin = to_vecGF2(i,rows);
           for (j = 0; j < rows; j++) {
             if (bin[j] == 1) {
               A[i] += Ttrans[j];
             }
           }
	 } 
	 X = transpose(A);
         a.putltt(X);
      }
   }

   inline NTL::mat_GF2 LTT(VBF& a)
   { NTL::mat_GF2 X; LTT(X, a); return X; }

   void CTT(NTL::mat_ZZ& X, VBF& a)
   {
      unsigned long     rows = a.spacen();
      unsigned long     cols = a.spacem();
      NTL::mat_GF2      T;
      unsigned long     i,j;

      X = a.getctt();
      if (IsNotDefined(X))
      {
         T = LTT(a);
	 X.SetDims(rows,cols);

         for (i = 0; i < rows; i++)
         {
           for (j = 0; j < cols; j++) {
             if (T[i][j] == 1) {
               X[i][j] = -1;
             } else {
	       X[i][j] = 1;
	     }
           }
         }
         a.putctt(X);
      }
   }

   inline NTL::mat_ZZ CTT(VBF& a)
   { NTL::mat_ZZ X; CTT(X, a); return X; }

   void ANF(NTL::mat_GF2& X, VBF& a)
   {
      int 		rep = a.getrep();
      int 		n = a.n();
      int 		m = a.m();
      NTL::mat_GF2	T;
      NTL::mat_ZZ	W, C;
                        
      X = a.getanf();
      if (IsNotDefined(X))
      {  
      	 if (rep == TTMATRIX || rep==CHARMATRIX || rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == SBOXMATRIX || rep == TRACE || rep == AFFINEMATRIX || rep == LTTMATRIX)
      	 {
            T = TT(a);
            X = rev(T, n, m);
         } 
         else if (rep == WALSHMATRIX)
         {
            W = a.getwalsh();	
            C = invwt(W, n, m);
            T = truthtable(C, n, m);
            if (IsNotDefined(T))
            {
               X = T;	
            } else {     	
               X = rev(T, n, m);
            }      
         }               	 
         a.putanf(X);
      }
   }    

   inline NTL::mat_GF2 ANF(VBF& a)	
   { NTL::mat_GF2 X; ANF(X, a); return X; }

   void Charact(NTL::mat_ZZ& C, VBF& a)
   {
      NTL::mat_GF2      T;
      int               n = a.n();
      int               m = a.m();
     
      C = a.getchar();
      if (IsNotDefined(C))
      {
         T = TT(a);
         C = charfunct(T, n, m);
         a.putchar(C);
      }
   }    

   inline NTL::mat_ZZ Charact(VBF& a)     
   { NTL::mat_ZZ X; Charact(X, a); return X; }
   
   void Walsh(NTL::mat_ZZ& X, VBF& a)
   {
      int 		rep = a.getrep();
      NTL::mat_GF2	T;
      NTL::mat_ZZ	C;
      int 		n = a.n();
      int 		m = a.m();
      
      X = a.getwalsh();
      if (IsNotDefined(X))
      {   
      	 T = TT(a);
         C = charfunct(T, n, m);
      	 if (rep == PERTRANSF)
      	 {
            long an = a.spacen();
	    X = an * C;
         } else {
            X = wt(C, n, m);
         } 
         a.putwalsh(X);
      }
   }    

   inline NTL::mat_ZZ Walsh(VBF& a)	
   { NTL::mat_ZZ X; Walsh(X, a); return X; }

   // Interpolate the VBF based on its irreducible polynomial and truth table
   void Trace(GF2EX& f, VBF& a)
   {
      NTL::mat_GF2 A,B,C,D;
      NTL::vec_GF2E x, y;
      long spacen = a.spacen(), n = a.n(), m = a.m();

      if (n != m)
          Error("interpolate: n and m are different");

      f = a.gettrace();
      if (deg(f) <= 0)
      {
       	 A = matGF2_seq(spacen,m);
       	 B = TT(a);
       	 reverse(C,A);
       	 reverse(D,B);
       	 conv(x,C);
       	 conv(y,D);

       	 interpolate(f,x,y);
      }
   }  

   inline GF2EX Trace(VBF& a)
   { GF2EX f; Trace(f, a); return f; }

   void LAT(NTL::mat_ZZ& X, VBF& a)
   {
      int 		rep = a.getrep();
      NTL::mat_ZZ	W;
      long       	spacen = a.spacen();
      long		spacem = a.spacem();
      
      X = a.getLAT();
      if (IsNotDefined(X))
      {   
         W = Walsh(a);	 
      	 if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      	 {
	    X = spacen * W;
         } else {
            X = lat(W, spacen, spacem);
  	 }
         a.putLAT(X);
      }
   }    

   inline NTL::mat_ZZ LAT(VBF& a)	
   { NTL::mat_ZZ X; LAT(X, a); return X; }

   void DAT(NTL::mat_ZZ& X, VBF& a)
   {
      int 		rep = a.getrep();
      NTL::mat_ZZ	L;
      int 		n = a.n();
      int 		m = a.m();
      long       	spacem = a.spacem();
      
      X = a.getDAT();
      if (IsNotDefined(X))
      {   
         L = LAT(a);
      	 if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      	 {
	    X = spacem * L;
         } else {
   	    X = wt(L, n, m);
         }
   	 a.putDAT(X);
       }   
   }    

   inline NTL::mat_ZZ DAT(VBF& a)	
   { NTL::mat_ZZ X; DAT(X, a); return X; }

   void AC(NTL::mat_ZZ& X, VBF& a)
   {
      NTL::mat_ZZ       A, L, LTr;
      long              i, j, k, l;
      int               n = a.n();
      long              spacen = a.spacen();
      long              spacem = a.spacem();

      X = a.getAC();
      if (IsNotDefined(X))
      {
         L = CTT(a);
         LTr = transpose(L);
         NTL::mat_ZZ A(INIT_SIZE, spacem, spacen);

         vec_GF2 vi, vj, v;

         for (l = 0; l < spacem; l++)
         {
           for (i = 0; i < spacen; i++)
           {
             A[l][i] = 0;
             vi = to_vecGF2(i,n);
             for (j = 0; j < spacen; j++)
             {
               vj = to_vecGF2(j,n);
               v = vi+vj;
               k = conv_long(v);
               A[l][i] += LTr[l][j] * LTr[l][k];
             }
           }
         }
         X = transpose(A);

         a.putAC(X);
      }
   }

   inline NTL::mat_ZZ AC(VBF& a)
   { NTL::mat_ZZ X; AC(X, a); return X; }

   // Absolute Walsh values frequency distribution
   void printFWH(NTL_SNS ostream& s, VBF& a)
   {
      NTL::mat_ZZ       W, A;
      unsigned long     i,j,v;
      unsigned long     spacen = a.spacen();
      unsigned long     spacem = a.spacem();
      int k,l, nofirst;

      A = a.getfwh();
      if (IsNotDefined(A))
      {
         W = Walsh(a);
         A.SetDims((spacen >> 1)+1, spacem-1);

         for (i = 0; i < spacen; i++)
         {
             for (j = 1; j < spacem; j++)
             {
                v = to_long(abs(W[i][j]));
                A[v>>1][j-1] += 1;
             }
         }
         a.putfwh(A);
      }

      for (l = 0; l < A.NumCols(); l++) {
        nofirst = 0;
        for (k = 0; k < A.NumRows(); k++) {
           if (A[k][l] != 0) {
              if (nofirst) {
                 s << ",";
              } else {
                 nofirst = 1;
              }
              s << "(" << 2*k << "," << A[k][l] << ")";
           }
        }
        s << endl;
      }
   }

   // Absolute AC values frequency distribution 
   void printFAC(NTL_SNS ostream& s, VBF& a)
   {
      NTL::mat_ZZ       A, X;
      unsigned long     i,j,v;
      unsigned long     spacen = a.spacen();
      unsigned long     spacem = a.spacem();
      int k, l, nofirst;

      X = a.getfac();
      if (IsNotDefined(X))
      {
         A = AC(a);
         X.SetDims((spacen >> 1)+1, spacem-1);

         for (i = 0; i < spacen; i++)
         {
             for (j = 1; j < spacem; j++)
             {
                v = to_long(abs(A[i][j]));
                X[v>>1][j-1] += 1;
             }
         }
         a.putfac(X);
      }

      for (l = 0; l < X.NumCols(); l++) {
        nofirst = 0;
        for (k = 0; k < X.NumRows(); k++) {
           if (X[k][l] != 0) {
              if (nofirst) {
                 s << ",";
              } else {
                 nofirst = 1;
              }
              s << "(" << 2*k << "," << X[k][l] << ")";
           }
        }
        s << endl;
      }
   }

   void PER(NTL::vec_ZZ& x, VBF& a)
   {
      int               n = a.n();
      int               m = a.m();
      long		i, j, l;
      vec_GF2		bin;
      NTL::mat_GF2      T;

      if (n != m)
         Error("VBF PER: dimensions mismatch");

      x = a.getper();
      if (IsZero(x))
      {
         T = TT(a);

	 x.SetLength(n);
         for (i = 1; i <= n; i++)
         {
            l = (1 << (n-i));
	    bin = T[l];
	    for (j = 0; j < n; j++)
	    {
	       if (bin.get(j) == 1)
	       {
		  x[i-1] = j+1;
		  break;
	       }
	    }
         }

         a.putper(x);
      }
   }   

   inline NTL::vec_ZZ PER(VBF& a)
   { NTL::vec_ZZ v; PER(v, a); return v; }

   // Weight
   void weight(long& w, VBF& F)
   {
      long i, spacen = F.spacen();
      NTL::mat_GF2 T;
      w = F.getwt();

      if (w == UNDEFINED) {
 
        T = TT(F);
        w = 0;

        for (i = 0; i < spacen; i++)
        {
           w += weight(T[i]);          
        }
        F.putwt(w);
      }
   }

   inline long weight(VBF& F)
   { long x; weight(x, F); return x; }

   // Linear potential
   void lp(NTL::RR& x, VBF& a)
   {
      NTL::mat_ZZ	L;
      int 		rep = a.getrep();
      long       	spacen = a.spacen();
      NTL::RR		lp = a.getlp();
      NTL::RR		nminus1, la, ll;
      NTL::RR		nl = a.getnl();
      NTL::ZZ		max;
   	      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      {
      	 x = ONE;
      	 a.putlp(x);
      }	 
      else if (lp == NOTDEFINED && nl != NOTDEFINED)
      {
      	 nminus1 = to_RR(spacen)/2.0;
         la = 1 - nl/nminus1;
         x = la*la;	 
      }
      else if (lp == NOTDEFINED && nl == NOTDEFINED)
      {
	 L = LAT(a);
         max = maxvalue_abs(L);
	 ll = to_RR(max);
	 a.putmaxlat(max);	 
      	 nminus1 = to_RR(spacen)/2.0;
      	 x = ll/to_RR(L[0][0]);
      	 a.putlp(x);
      	 la = 1 - sqrt(x);  
      	 nl = la * nminus1;
      	 a.putnl(nl);	            	   		
      } else { 
      	 x = lp;
      }	 
   }	
   
   inline NTL::RR lp(VBF& a)	
   { NTL::RR x; lp(x, a); return x; }
   
   // Nonlinearity
   void nl(NTL::RR& x, VBF& a)
   {
      NTL::mat_ZZ	L;
      int 		rep = a.getrep();
      long       	spacen = a.spacen();
      NTL::RR		nl = a.getnl();
      NTL::RR		nminus1, la, ll, lp;
      NTL::ZZ		max;
   	      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      {
      	 x = ZERO;
      	 a.putnl(x);
      }	 
      else if (nl == NOTDEFINED)
      {
	 L = LAT(a);
         max = maxvalue_abs(L);
	 ll = to_RR(max);
	 a.putmaxlat(max);	 
      	 nminus1 = to_RR(spacen)/2.0;
      	 lp = ll/to_RR(L[0][0]);
      	 a.putlp(lp);
      	 la = 1 - sqrt(lp);  
      	 x = la * nminus1;
      	 a.putnl(x);	            	   		
      }
      else
      { 
      	 x = nl;
      }	 
   }	
   
   inline NTL::RR nl(VBF& a)	
   { NTL::RR x; nl(x, a); return x; }

   // Returns the maximum possible nonlinearity of a VBF with the same dimensions
   NTL::RR nlmax(VBF& a)
   { 
      NTL::RR nlm = to_RR(-1);
      int  n = a.n();
      int  m = a.m();
     
      if (n % 2 == 0 && (m <= n/2 || m < n-1)) 
      {
        nlm = to_RR(power(to_ZZ(2),(n-1))) - to_RR(power(to_ZZ(2),(n/2-1)));
      } else if (n == 3) {
        nlm = to_RR(2.0);
      } else if (n == 5) {
        nlm = to_RR(12.0);
      } else if (n == 7) {
        nlm = to_RR(56.0);
      } else if (n == 9) {
        nlm = to_RR(244.0);
      } else if (n == 11) {
        nlm = to_RR(1000.0);
      } else if (n == 13) {
        nlm = to_RR(4050.0);
      } else if (n == 15) {
        nlm = to_RR(16292.0);
      } else if (n % 2 == 0 && m >= n-1) {
// Sidelnikov-Chabaud-Vaudenay bound
        nlm = floor(to_RR(power(to_ZZ(2),(n-1))) - to_RR(0.5*sqrt(to_RR(3*power(to_ZZ(2),n)-2-2*((power(to_ZZ(2),n)-1)*(power(to_ZZ(2),n-1)-1))/(power(to_ZZ(2),m)-1)))));
      }

      return nlm; 
   } 

   // r-th order nonlinearity
   // return -1 if the number of functions to check is too large (> maximum value of long) 
   void nlr(long& min, VBF& F, int r)
   {
      int  n = F.n();
      int  m = F.m();
      long spacen = F.spacen();
      long spacem = F.spacem();
      long num, cont=0, t=0, spacet,x;
      long *v = NULL;
      int  i,j;
      NTL::mat_GF2 T,Tt,B,Bt;
      NTL::vec_GF2 u,g;

      min = spacen;
      for (i = 0; i <= r; i++)
      {
         t = t + Combination(n,i);
      }
      if (t > 30) {
         min = -1;
         return;
      }
      spacet = 1 << t;

      T = TT(F);
      Tt = transpose(T);

      NTL::mat_GF2 A(INIT_SIZE, spacen,1);
      NTL::mat_GF2 C(INIT_SIZE, t,spacen);

      clear(A);
      A[0][0] = 1;
      B = rev(A, n, 1);
      Bt = transpose(B);
      C[cont] = Bt[0];
      cont++;
      
      for (i = 1; i <= r; i++)
      {
         num = to_long(numofweight(n,i));
         v = (long *) malloc(num * sizeof(long));
         vectors_weight(v, n, i);

         for (j = 0; j < num; j++)
	 {
            clear(A);
            A[v[j]][0] = 1;
            B = rev(A, n, 1);
            Bt = transpose(B);
            C[cont] = Bt[0];
            cont++;
         }
      }

      for (i = 1; i < spacem; i++)
      {
          NTL::vec_GF2 f(INIT_SIZE, spacen);

          for (j = 0; j < m; j++)
          {
             int bit = i & (1 << j);
             if (bit)
             {
                f += Tt[j];
             }
          }

	  for (j = 1; j < spacet; j++)
          {
	     u = to_vecGF2(j,t);
	     g = u*C;
             x = weight(f+g);
             if (x < min) min = x;
	  }
      }
   }

   // Maximum value of LAT
   void maxLAT(NTL::ZZ& x, VBF& a)
   {
      NTL::mat_ZZ	L;
      NTL::ZZ		maxlat = a.getmaxlat();
   	      
      if (maxlat == -1)
      {
	 L = LAT(a);
         x = maxvalue_abs(L);
	 a.putmaxlat(x);	 
      }
      else
      { 
      	 x = maxlat;
      }	 
   }	

   inline NTL::ZZ maxLAT(VBF& a)	
   { NTL::ZZ x; maxLAT(x, a); return x; }

   // Probability bias of a linear relation
   void ProbLin(NTL::RR& x, VBF& a, NTL::ZZ& w)
   {
      NTL::mat_ZZ       L;

      L = LAT(a);
      x = abs(to_RR(w)/to_RR(L[0][0])-0.5);

   }

   // type of functions in terms of nonlinearity
   void typenl(int& typenl, VBF& a)
   {
      int n = a.n();
      int m= a.m();
      int b = a.gettypenl();
      NTL::RR nl, nlm, nlo;
      
      if (b == UNDEFINED) {
         nl = a.getnl();
         if (nl == 0) {
            typenl = LINEAR;
         } else if (n >= (2*m)) {
            nlm = nlmax(a);
            
	    if (nl == nlm) {
               typenl = BENT;
            }
         } else if (n == m) {
            nlo = to_RR(power(to_ZZ(2),(n-1))) - to_RR(power(to_ZZ(2),((n-1)/2))); 
            
            if (nl == nlo) {
               typenl = ALMOST_BENT;
            } 
         }
         a.puttypenl(typenl);
      } else {
      	 typenl = b;
      }	 
   }   

   inline int typenl(VBF& a)	
   { int x; typenl(x, a); return x; }
        
   // Differential potential
   void dp(NTL::RR& x, VBF& a)
   {
      NTL::mat_ZZ	D;
      int 		rep = a.getrep();
      NTL::RR		dp = a.getdp();
      NTL::RR		dd, nminus1, la;
      NTL::RR		ld = a.getld();
      NTL::ZZ		max;
   	      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      {
      	 x = ONE;
      	 a.putdp(x);
      }	 
      else if (dp == NOTDEFINED && ld != NOTDEFINED)
      {
         long spacen = a.spacen();

      	 nminus1 = to_RR(spacen)/2.0;
         la = 1 - ld/nminus1;
         x = la*la;	 
      }
      else if (dp == NOTDEFINED && ld == NOTDEFINED)
      {
	 D = DAT(a);  	
         max = maxvalue(D);
	 dd = to_RR(max);
	 a.putmaxdat(max);		 
         x = dd/to_RR(D[0][0]);
         a.putdp(x);
      } else { 
      	 x = dp;
      }	 
   }	

   inline NTL::RR dp(VBF& a)	
   { NTL::RR x; dp(x, a); return x; }

   // Maximum value of AC = Absolute indicator
   void maxAC(NTL::ZZ& x, VBF& a)
   {
      NTL::mat_ZZ       D;
      NTL::ZZ           maxac = a.getmaxac();

      if (maxac == UNDEFINED)
      {
         D = AC(a);

         ZZ   temp;
         long i, j;
         long n = D.NumRows();
         long m = D.NumCols();

         x = 0;
         for (i = 1; i < n; i++)
         {
            for (j = 1; j < m; j++)
            {
                abs(temp,D[i][j]);
                if (temp > x) x = temp;
            }
         }

         a.putmaxac(x);
      }
      else
      {
         x = maxac;
      }
   }

   inline NTL::ZZ maxAC(VBF& a)
   { NTL::ZZ x; maxAC(x, a); return x; }

   // Linearity distance
   void ld(NTL::RR& x, VBF& a)
   {
      int 	rep = a.getrep();
      long      n = a.n();
      NTL::RR	ld = a.getld();
      NTL::ZZ   absolute_indicator;
   	      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      {
      	 x = ZERO;
      	 a.putld(x);
      }	 
      else if (ld == NOTDEFINED)
      {
         absolute_indicator = a.getmaxac();
         if (absolute_indicator == UNDEFINED)
            absolute_indicator = maxAC(a);

      	 x = to_RR(power(to_ZZ(2),(n-2)))-to_RR(absolute_indicator)/4.0;
      	 a.putld(x);
      } else { 
      	 x = ld;
      }	 
   }	

   inline NTL::RR ld(VBF& a)	
   { NTL::RR x; ld(x, a); return x; }

   // Returns the maximum possible linearity distance of a VBF with the same dimensions
   NTL::RR ldmax(VBF& a)
   { 
      NTL::RR ldm;
      int  n = a.n();
      int  m = a.m();
      
      ldm = to_RR(power(to_ZZ(2),(n-1)))* (1-to_RR(1.0)/to_RR(power(to_ZZ(2),(m)))); 
      
      return ldm; 
   } 

   // Maximum value of DAT
   void maxDAT(NTL::ZZ& x, VBF& a)
   {
      NTL::mat_ZZ	D;
      NTL::ZZ		maxdat = a.getmaxdat();
   	      
      if (maxdat == -1)
      {
	 D = DAT(a);
         x = maxvalue(D);
	 a.putmaxdat(x);	 
      }
      else
      { 
      	 x = maxdat;
      }	 
   }	

   inline NTL::ZZ maxDAT(VBF& a)	
   { NTL::ZZ x; maxDAT(x, a); return x; }

   // Sum-of-square indicator 
   void sigma(NTL::ZZ& x, VBF& a)
   {
      NTL::mat_ZZ       A;
      NTL::ZZ           sumofsquare = a.getsigma();
      long numrows, numcolumns, i, j;

      if (sumofsquare == UNDEFINED)
      {
         ZZ temp;

         A = AC(a);
         numrows = A.NumRows();
         numcolumns = A.NumCols();
         x = 0;

         for (j = 1; j < numcolumns; j++)
         {
            temp = 0;
            for (i = 0; i < numrows; i++)
            {
               temp += power(A[i][j],2);
            }
            if (temp > x) x = temp;
         }

         a.putsigma(x);
      }
      else
      {
         x = sumofsquare;
      }
   }

   inline NTL::ZZ sigma(VBF& a)
   { NTL::ZZ x; sigma(x, a); return x; }

   // Probability of a differential
   void ProbDif(NTL::RR& x, VBF& a, NTL::ZZ& w)
   {
      NTL::mat_ZZ	D;
         	      
      D = DAT(a);
      x = to_RR(w)/to_RR(D[0][0]);
      
   }	

   // Correlation immunity
   void CI(int& t, VBF& a)
   {
      int rep = a.getrep();
      int goon = 1;
      int bal;
      int n = a.n();
      int m = a.m();
      int ci = a.getCI();
      NTL::mat_ZZ W;
      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      {
      	 t = 0;
         a.putCI(t);
         a.putbal(1);
      }	 
      else if (ci == UNDEFINED)
      {
         W = Walsh(a); 
         bal = WalshIsZero(W, n, m, 0);
         a.putbal(bal);
      	 t = 1;
         while ((t <= n) && goon)
         { 
            if (WalshIsZero(W, n, m, t))
            {	
               t++;
               goon = 1;
            } else {
     	       t--;
     	       goon = 0;
            }	   
         }
         if (t == (n+1)) t--;
         a.putCI(t);
      } else {
      	 t = ci;
      }	 
   }   

   inline int CI(VBF& a)	
   { int x; CI(x, a); return x; }

   // Balancedness
   void Bal(int& bal, VBF& a)
   {
      int rep = a.getrep();
      int n = a.n();
      int m = a.m();
      int b = a.getbal();
      NTL::mat_ZZ W;
      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX)
      {
      	 bal = 1;
         a.putbal(bal);
      }	 
      else if (b == UNDEFINED)
      {
         W = Walsh(a); 
         bal = WalshIsZero(W, n, m, 0);
         a.putbal(bal);
      } else {
      	 bal = b;
      }	 
   }   

   inline int Bal(VBF& a)	
   { int x; Bal(x, a); return x; }

   // Algebraic degree
   void deg(int& d, VBF& a)
   {
      int  rep = a.getrep();
      NTL::mat_GF2	A, ATr;
      long i, j;
      int  degree = a.getdeg();
      int  n = a.n();
      int  m = a.m();
      d = n;   
   
      if (rep == PERTRANSF)
      {
	 d = 1;
      }	
      else if (rep == EXP_COMP_TRANSF || rep == AFFINEMATRIX) 
      {
         if (rep == EXP_COMP_TRANSF)
         {
            A = a.getexp_comp();
         } else {
            A = a.getlinmat();
         }

         if (IsConstant(A)) {
	    d = 0;
	 } else {
	    d = 1;
	 }
      }	else if (degree == UNDEFINED) { 
         A = ANF(a); 
         ATr = transpose(A); 
         int minimum;   
    
         for (i = 1; i < a.spacem(); i++)
         {
            NTL::vec_GF2 X(INIT_SIZE, a.spacen());
      
            for (j = 0; j < m; j++)  
            {
      	       int bit = i & (1 << j);
      	       if (bit)
      	       {
      	          X += ATr[j];
      	       }   
            }  
            minimum = degbf(X, n);
            if (minimum < d) d = minimum;
         }                 	 
      } else {
      	 d = degree;
      }	        
   }

   inline int deg(VBF& a)	
   { int x; deg(x, a); return x; }

   // Algebraic immunity 
   void AI(int& ai, VBF& F)
   {
      int  n = F.n();
      int  m = F.m();
      long spacen = F.spacen();
      long spacem = F.spacem();
      int i,j,min,d;
      NTL::mat_GF2 T,Tt;

      d = to_long(ceil(to_RR(n)/to_RR(2.0)));
      ai = d;
     
      T = TT(F);
      Tt = transpose(T);

      for (i = 1; i < spacem; i++)
      {
          NTL::vec_GF2 f(INIT_SIZE, spacen);

          for (j = 0; j < m; j++)
          {
             int bit = i & (1 << j);
             if (bit)
             {
                f += Tt[j];
             }
          }
	  min = aibf(f,n,d);
          if (min < ai) ai = min;
      }
   }

   inline int AI(VBF& F)
   { int x; AI(x, F); return x; }

   // Returns the maximum possible algebraic immunity of a VBF with the same dimensions
   int aimax(VBF& a)
   {
      int aimax;
      double aimax_d;
      int  n = a.n();

      aimax_d = ceil(double(n)/2.0);
      aimax = int(aimax_d);

      return aimax;
   }

   // Propagation criterion of degree k
   void PC(int& k, VBF& a)
   {
      int 		rep = a.getrep();
      int 		pc = a.getPC();
      int 		n = a.n();
      int		goon;
      NTL::mat_ZZ 	W;
      
      if (rep == PERTRANSF || rep == EXP_COMP_TRANSF)
      {
      	 k = 0;
         a.putPC(k);
      }	 
      else if (pc == UNDEFINED)
      {
         W = DAT(a); 
      	 k = 1;
         while ((k <= n) && goon)
         { 
            if (IsConstant(W, n, a.m(), k))
            {	
               k++;
               goon = 1;
            } else {
     	       k--;
     	       goon = 0;
            }	   
         }
         if (k == (n+1)) k--;
         a.putPC(k);
      } else {
      	 k = pc;
      }	 
   }   

   inline int PC(VBF& a)	
   { int x; PC(x, a); return x; }

   // Polynomical representation of ANF
   void Pol(NTL_SNS ostream& s, VBF& a)
   {
      vec_pol p = a.getpol();
      NTL::mat_GF2 A;
      vector<string> str;
      
      if (p.length() <= 0)
      {
         A = ANF(a);
	 str = to_vec_pol(A);
	 p = str;
         a.putpol(p);
	 s << p;
      } else {
      	 s << p;
      }	 
   }   

   // Linear relations associated to value w
   void linear(NTL_SNS ostream& s, VBF& a, ZZ& w)
   {
      vector<long> rows;
      vector<long> cols;
      NTL::mat_ZZ L;
      unsigned long i, j, n = a.n(), spacen = a.spacen(), spacem = a.spacem();
      NTL::vec_GF2 v;
      string str;
   
      L = LAT(a);
      for (i = 0; i < spacen; i++) {
        for (j = 0; j < spacem; j++) {
           if (L[i][j] == w) {
	     rows.push_back(i);
	     cols.push_back(j);
	   }
	}
      }

      for (i = 0; i < rows.size(); i++)
      {  
         if (rows[i] == 0) str += "0";
         v = to_vecGF2(rows[i], n);
         int count = 0;
         for (j = 0; j < n; j++)
   	 {  
            if (v[j] == 1)
            {
               if (count > 0) str +="+";   	      
               str += "x";
	       str += long2string(j+1);
               count = 1;
            }
         }
         str += "=";
         if (cols[i] == 0) str += "0";
         v = to_vecGF2(cols[i], n);
         count = 0;
         for (j = 0; j < n; j++)
   	 {    
            if (v[j] == 1)
            {   	 
               if (count > 0) str +="+";     
               str += "y";
	       str += long2string(j+1);
               count = 1;
            }
         }
         str += "\n";
      }   
      s << str;

   }   

   // differential relations associated to value w
   void differential(NTL_SNS ostream& s, VBF& a, ZZ& w)
   {
      vector<long> rows;
      vector<long> cols;
      NTL::mat_ZZ D;
      unsigned long i, j, n = a.n(), spacen = a.spacen(), spacem = a.spacem();
      
      D = DAT(a);
      for (i = 0; i < spacen; i++) {
        for (j = 0; j < spacem; j++) {
           if (D[i][j] == w) {
             rows.push_back(i);
             cols.push_back(j);
           }
        }
      }

      for (i = 0; i < rows.size(); i++)
      {
         s << to_vecGF2(rows[i], n) << "->" << to_vecGF2(cols[i], n) << endl;
      }

   }   
   
   // Linear structures
   void LS(NTL_SNS ostream& s, VBF& a)
   {
      vector<  pair<long, long> > v;
      NTL::mat_ZZ A;
      NTL::ZZ   absolute_indicator;
      unsigned long i, j, spacen = a.spacen(), spacem = a.spacem(), n = a.n(), m = a.m();
      
      v = a.getls();
      if (v.size() <= 0)
      {
         absolute_indicator = a.getmaxac();
         if (absolute_indicator == UNDEFINED)
            absolute_indicator = maxAC(a);
         if (absolute_indicator != power(to_ZZ(2),n))
            return; 
         A = AC(a);
         
	 for (i = 1; i < spacen; i++) {
            for (j = 1; j < spacem; j++) {
               if (abs(A[i][j]) == absolute_indicator) {
	          v.push_back( std::make_pair(i,j));
               }
	    }
	 }
      } 

      a.putls(v);
      for (i = 0; i < v.size(); i++) {
         s << "(" << to_vecGF2(v[i].first, n) << "," << to_vecGF2(v[i].second, m) << ")" << endl;
      }

   }   

   // Cycle structure
   // if n != m do not return any result
   void Cycle(NTL::vec_ZZ& v, VBF& a)
   {
      std::set<long> C,D;
      std::set<long>::iterator it;
      vector<long> f;
      long am = a.m();
      long an = a.n();
      long i, x, y, len, spacen = a.spacen();
      NTL::vec_GF2 vy;
      NTL::mat_GF2 T;

      if (an != am || !Bal(a))
         return;

      v = a.getcycle();
      if (IsZero(v)) 
      {
         v.SetLength(spacen);
 	 T = TT(a);
         for (i = 0; i < spacen; i++) {
	     C.insert(i);
         }

         x = *C.begin();
         D.insert(x);

	 f = a.getfp();

         while (C.size() > 1)
         {
	    vy = T[x];
	    y = conv_long(vy);
	    C.erase(x);
            it = D.find(y);

            // y is in D, start new cycle 
            if (it != D.end())
	    {
	       len = D.size();
	       v[len] += 1;
	       if (len == 1)
	       {
		  x = *D.begin();
		  f.push_back(x);
               }
	       D.clear();
	       x = *C.begin();
	       y = x;
            } else {
	       x=y;
	    }
	    D.insert(y);
         }

	 it = D.find(y);
         if (it != D.end())
         {
            len = D.size();
            v[len] += 1; 
         } else {
	    v[1] += 1;
	    x = *D.begin();
	    f.push_back(x);
         }
	 a.putcycle(v);
	 a.putfp(f);
      }
   }

   inline NTL::vec_ZZ Cycle(VBF& a)
   { NTL::vec_ZZ v; Cycle(v, a); return v; }

   // Fixed points S(x)=x
   // valid when n==m
   NTL::mat_GF2 fixedpoints(VBF& a)
   {
       NTL::mat_GF2 A,B,F;
       vector<long> v;	
       long rows, spacen = a.spacen(), n = a.n();
       long i;

       v = a.getfp();
       if (v.size() <= 0)
       {
          A = matGF2_seq(spacen,n);
          B = TT(a);

          for (i = 0; i < spacen; i++) {
             if (A[i] == B[i])
		v.push_back(i);	
          }
	  a.putfp(v);
       }
      
       rows = v.size();
       F.SetDims(rows,n);
       for (i = 0; i < rows; i++) {
          F[i] = to_vecGF2(v[i], n);
       }

       return F;
   }   

   // Negated fixed points S(x)=not x
   // valid when n==m
   NTL::mat_GF2 negatedfixedpoints(VBF& a)
   {
       NTL::mat_GF2 A,B,F;
       NTL::vec_GF2 vn;
       vector<long> v;
       long rows, spacen = a.spacen(), n = a.n();
       long i;

       v = a.getnfp();
       if (v.size() <= 0)
       {
          A = matGF2_seq(spacen,n);
          B = TT(a);

          for (i = 0; i < spacen; i++) {
             opposite(vn,A[i]);
             if (B[i] == vn) v.push_back(i);
          }
          a.putnfp(v);
       }

       rows = v.size();
       F.SetDims(rows,n);
       for (i = 0; i < rows; i++) {
          F[i] = to_vecGF2(v[i], n);
       }

       return F;
   }   

   // equality testing:
   long operator==(VBF& a, VBF& b)  
   { 
      NTL::mat_GF2 a_anf, b_anf, a_tt, b_tt, a_lin, b_lin;
      NTL::mat_ZZ a_walsh, b_walsh, a_char, b_char;
      NTL::vec_ZZ va, vb;
      long am = a.m();
      long an = a.n();      
      long bm = b.m();
      long bn = b.n();      
      int arep = a.getrep();
               
      if (an != bn)  
         return 0;  
  
      if (am != bm)  
         return 0;  

      if (arep == ANFMATRIX)
      {
         a_anf = ANF(a);
         b_anf = ANF(b);

         if (a_anf != b_anf) return 0;
      }
      else if (arep == TTMATRIX || arep == SBOXMATRIX || arep == AFFINEMATRIX)
      {
         a_tt = TT(a);
         b_tt = TT(b);

         if (a_tt != b_tt) return 0;
      } 
      else if (arep == PERTRANSF)
      {
         va = a.getper();
         vb = b.getper();
      
         if (va != vb) return 0;                       
      }
      else if (arep == WALSHMATRIX)
      {
         a_walsh = Walsh(a);
         b_walsh = Walsh(b);

         if (a_walsh != b_walsh) return 0;
      }
      else if (arep == EXP_COMP_TRANSF)
      {
         a_lin = a.getexp_comp();
         b_lin = b.getexp_comp();
      
         if (a_lin != b_lin) return 0;                       
      }	
      else if (arep == CHARMATRIX)
      {
         a_char = Charact(a);
         b_char = Charact(b);

         if (a_char != b_char) return 0;
      }  
 
      return 1;  
   }  

   long operator!=(VBF& a, VBF& b)  
   {  
      return !(a == b);  
   }  

   // Inverse Function 
   void inv(VBF& X, VBF& A)
   {
      NTL::mat_GF2 a_tt, x_tt;
      long am = A.m();
      long an = A.n(); 
      long aspacen = A.spacen();
      long i,j;
      vec_GF2 bin;

      if (an != am)
         Error("VBF inv: dimensions mismatch");
 
      a_tt = TT(A);
      x_tt.SetDims(aspacen,am);

      for (i = 0; i < aspacen; i++)
      {
	 bin = to_vecGF2(i,an);
	 j = conv_long(a_tt[i]);
	 x_tt[j] = bin; 
      }

      X.puttt(x_tt);
   }

   inline VBF inv(VBF& A)
   { VBF X; inv(X, A); return X; }


   // procedural arithmetic routines:

   // X = A + B
   void sum(VBF& X, VBF& A, VBF& B)  
   {   
      NTL::mat_ZZ 	a_walsh, b_walsh, x_walsh;
      long aspacen = A.spacen();
      long aspacem = A.spacem();
      long bspacen = B.spacen();
      long bspacem = B.spacem();
      
      if (aspacen != bspacen || aspacem != bspacem)   
         Error("VBF sum: dimensions mismatch");  
   
      // Walsh       
      a_walsh = Walsh(A);
      b_walsh = Walsh(B);
           
      x_walsh.SetDims(aspacen,aspacem);
      convol_column(x_walsh,a_walsh,b_walsh);
      X.putwalsh(x_walsh);
   }  

   VBF operator+(VBF& A, VBF& B)	
   { VBF X; sum(X, A, B); return X; }


   // A:Vn1->Vm		B:Vn2->Vm
   // X:V(n1+n2)->Vm
   void directsum(VBF& X, VBF& A, VBF& B)  
   {  
      NTL::mat_ZZ 	a_walsh, b_walsh, x_walsh;
      long numrows, numcolumns, i, j, a, b;
      int an = A.n();  
      int am = A.m();
      int bn = B.n();
      int bm = B.m();
  
      if (am != bm)   
         Error("VBF direct sum: image dimension mismatch"); 

      // Walsh       
      a_walsh = Walsh(A);
      b_walsh = Walsh(B);
   
      numrows = (1 << (an+bn));   
      numcolumns = (1 << am);
      x_walsh.SetDims(numrows,numcolumns);
   
      for (i = 0; i < numrows; i++)  
      {
         a = i >> bn;
         b = i & ((1 << bn)- 1);
         for (j = 0; j < numcolumns; j++)
         {
   	    x_walsh[i][j]=a_walsh[a][j]*b_walsh[b][j];
         }	
      }  
      X.putwalsh(x_walsh);
      
   }  

   // A:Vn->Vm1		B:Vn->Vm2
   // X:Vn->V(m1+m2)
   void addimage(VBF& X, VBF& A, VBF& B)  
   {  
      NTL::mat_ZZ 	a_walsh, b_walsh, x_walsh;
      long numrows, numcolumns; 
      int an = A.n();  
      int am = A.m();
      int bn = B.n();
      int bm = B.m();
  
      if (an != bn)   
         Error("VBF addimage: argument dimension mismatch"); 
       
      // Walsh       
      a_walsh = Walsh(A);
      b_walsh = Walsh(B);
   
      numrows = (1 << an);   
      numcolumns = (1 << (am+bm));
      x_walsh.SetDims(numrows,numcolumns);  
      convolution(x_walsh, a_walsh, b_walsh);
 
      X.putwalsh(x_walsh);
   }     

   // A:Vn1->Vm1		B:Vn1->Vm2
   // X:V(n1+n2)->V(m1+m2)
   void concat(VBF& X, VBF& A, VBF& B)  
   {  
      long 		numrows, numcolumns, i, j, a, b, c, d;
      NTL::mat_ZZ 	a_walsh, b_walsh, x_walsh;   
      int an = A.n();
      int am = A.m();
      int bn = B.n();  
      int bm = B.m();
    
      // Walsh
      a_walsh = Walsh(A);
      b_walsh = Walsh(B);
   
      numrows = (1 << (an+bn));   
      numcolumns = (1 << (am+bm));
      x_walsh.SetDims(numrows,numcolumns);
   
      for (i = 0; i < numrows; i++)  
      {
         a = i >> bn;
         b = i & ((1 << bn)- 1);
         for (j = 0; j < numcolumns; j++)
         {
      	    c = j >> bm;
   	    d = j & ((1 << bm)- 1);
   	    x_walsh[i][j]=a_walsh[a][c]*b_walsh[b][d];
         }	
      }  
      X.putwalsh(x_walsh);

   }   

   VBF operator|(VBF& A, VBF& B)	
   { VBF X; concat(X, A, B); return X; }


   // A:Vn->Vp		B:Vp->Vm
   // X = B*A:Vn->Vm
   // If A is a permutation, then the Walsh spectrum of X
   // is a permutation of the rows of the Walsh spectrum of B
   // If B is a permutation, then the Walsh spectrum of X
   // is a permutation of the columns of the Walsh spectrum of A
   void Comp(VBF& X, VBF& A, VBF& B)  
   {  
      long 		i;
      NTL::mat_ZZ 	a_walsh, b_walsh, x_walsh;
      NTL::vec_ZZ  	a_per, b_per, bin;  
      int am = A.m();
      int bn = B.n();
      int bm = B.m();
  
      if (am != bn)   
         Error("VBF composition: dimensions mismatch");  

      x_walsh.SetDims(A.spacen(),B.spacem());
   
      if (A.getrep() == PERTRANSF)
      {
         ZZ row;
	 NTL::RR nlB;
      
         a_per.SetLength(am);
         a_per = A.getper();
 
         // Walsh Transform
	 b_walsh = Walsh(B);
         
         for (i = 0; i < B.spacem(); i++)  
         {
      	    bin = to_vecZZ(i,am);
            InnerProduct(row,bin,a_per);
            x_walsh[i] = b_walsh(to_long(row));
         }

      } else if (B.getrep() == PERTRANSF)
      {
         ZZ row;
         NTL::mat_ZZ temp;
      
	 a_walsh = Walsh(A);
	 
         b_per.SetLength(bm);
         b_per = B.getper();

         temp.SetDims(B.spacem(),A.spacen());      
      
         for (i = 0; i < B.spacem(); i++)  
         {
      	    bin = to_vecZZ(i,bm);
      	    InnerProduct(row,bin,b_per);
            temp[i] = a_walsh(to_long(row));
         }      
         x_walsh = transpose(temp);
      }
      else	
      {
	 a_walsh = Walsh(A); 
	 b_walsh = Walsh(B);

         x_walsh = a_walsh * b_walsh;
      }     
      long a_spacem = A.spacem();
      div(x_walsh,x_walsh, a_spacem);
      X.putwalsh(x_walsh);

   }  

   VBF operator*(VBF& A, VBF& B)	
   { VBF X; Comp(X, A, B); return X; }

} // end namespace VBF

#endif
