*******
Summary
*******

Table :ref:`Initialization Table <Initialization>` lists the member functions related to methods of vector boolean functions initialization. Table
:ref:`Representation Table <Representation>` lists the member functions related to the representations of vector boolean functions as described above. All the member functions of *VBF* have an in-line definition, for instance: :code:`void TT(NTL::mat_GF2& X, VBF& F)` is also defined as :code:`inline NTL::mat_GF2 TT(VBF& F)`. 

.. _Initialization:

+--------------------------------------------------------------------------------------------------------------------------------+
|                     			   Initalization of VBF                                                                  |
+=====================================================+==========================================================================+
| SYNTAX                                              | DESCRIPTION                                                              |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void puttt(const NTL::mat_GF2& X)                   | (1) :math:`\matr{T}_F = \matr{T}`                                        |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putHexTT(istream& s)                           || (1) VBF which has an hexadecimal representation                         |
|					              || of its truth table defined by *s* (only for *m=1*)                      | 
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putDecTT(const NTL::vec_long& d,const long& m) || (1) VBF which has an decimal representation of its truth table          |
|						      || defined by *d* and *m* is the number of component boolean functions     |
+-----------------------------------------------------+--------------------------------------------------------------------------+
|| void putirrpol(GF2X& g)                            | (2) Set *F* by its trace *f* and the irreducible polynomial *g*          |
|| void puttrace(string& f)                           | 								         |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putpol(vec_pol& p)                             | (3) Set *F* with Polynomials in *ANF* equals to *p*                      |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putanf(const NTL::mat_GF2& A)                  | (4) :math:`\matr{ANF}_F = \matr{A}`                                      |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putchar(const NTL::mat_ZZ& C)                  | (5) :math:`\matr{Img}(F) = \matr{C}`                                     |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putwalsh(const NTL::mat_ZZ& W)                 | (6) :math:`\matr{WS}(F) = \matr{W}`                                      |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putper(const NTL::vec_ZZ& v)                   | (10) VBF which is a permutation defined by :math:`\vec{v}`               |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putexp_comp(const NTL::vec_ZZ& v)              || (11) VBF defined by Expansion and Compression                           |
|                                                     || DES vector :math:`\vec{v}`                                              |
+-----------------------------------------------------+--------------------------------------------------------------------------+
| void putsbox(const NTL::mat_ZZ& S)                  | (12) VBF which is a DES S-Box defined by *S*                             |
+-----------------------------------------------------+--------------------------------------------------------------------------+

.. _Representation:

+------------------------------------------------------------------------------------------------------------+
|                             Representation of VBF                                                          |
+======================================+=====================================================================+
| SYNTAX                               | DESCRIPTION                                                         |
+--------------------------------------+---------------------------------------------------------------------+
| void TT(NTL::mat_GF2& X, VBF& F)     | (1) :math:`\matr{X}=\matr{T}_F`                                     |
+--------------------------------------+---------------------------------------------------------------------+
| void getHexTT(ostream& s)            | (1) *s* is the hexadecimal representation of the truth table of *F* |
+--------------------------------------+---------------------------------------------------------------------+
| NTL::vec_long getDecTT() const       | (1) Decimal representation of the truth table                       |
+--------------------------------------+---------------------------------------------------------------------+
| void Trace(GF2EX& f, VBF& F)         | (2) *F* has a trace representation defined by *f*                   |
+--------------------------------------+---------------------------------------------------------------------+
| void Pol(NTL_SNS ostream& s, VBF& F) | (3) *s* contains the Polynomials in *ANF* of *F*                    |
+--------------------------------------+---------------------------------------------------------------------+
| void ANF(NTL::mat_GF2& X, VBF& F)    | (4) :math:`\matr{X}=\matr{ANF}_F`                                   |
+--------------------------------------+---------------------------------------------------------------------+
| void Charact(NTL::mat_ZZ& X, VBF& F) | (5) :math:`\matr{X}=\matr{Img(F)}`                                  |
+--------------------------------------+---------------------------------------------------------------------+
| void Walsh(NTL::mat_ZZ& X, VBF& F)   | (6) :math:`\matr{X}=\matr{WS}(F)`                                   |
+--------------------------------------+---------------------------------------------------------------------+
| void LAT(NTL::mat_ZZ& X, VBF& F)     | (7) :math:`\matr{X}=\matr{LP}(F)`                                   |
+--------------------------------------+---------------------------------------------------------------------+
| void DAT(NTL::mat_ZZ& X, VBF& F)     | (8) :math:`\matr{X}=\matr{DP}(F)`                                   |
+--------------------------------------+---------------------------------------------------------------------+
| void AC(NTL::mat_ZZ& X, VBF& F)      | (9) :math:`\matr{X}=\matr{R}(F)`                                    |
+--------------------------------------+---------------------------------------------------------------------+
| void PER(NTL::vec_ZZ& v, VBF& F)     | (10) :math:`\vec{v}` is the permutation vector defined by *F*       |
+--------------------------------------+---------------------------------------------------------------------+

