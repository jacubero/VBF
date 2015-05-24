*******************
Auxiliary functions
*******************

In order to compute the matrices described above, some functions have been
implemented which allow to obtain some of these matrices from others: 

1. A function whose input is an ANF table and its output is the Truth Table: :code:`mat_GF2 rev(const mat_GF2& A, int n, int m)`.

2. A function whose input is the Characteristic Function and its output is the Truth Table: :code:`mat_GF2 truthtable(const mat_ZZ& C, int n, int m)`.

3. A function whose input is the Truth Table and its output is the Characteristic Function: :code:`mat_ZZ charfunct(const mat_GF2& T, int n, int m)`.

4. A function whose input is the Walsh Spectrum and its output is the Characteristic Function (that is the Inverse Walsh Transform): :code:`mat_ZZ invwt(const mat_ZZ& X, int n, int m)`.

5. A matrix representing the linear combinations of Truth Table coordinate functions :code:`void LTT(NTL::mat_GF2& X, VBF& a)`.

6. A matrix representing character form of Truth Table coordinate functions :code:`void CTT(NTL::mat\_GF2\& X, VBF\& a)`.

