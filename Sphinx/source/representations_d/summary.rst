*******
Summary
*******

Table :ref:`Initialization Table <Initialization>` lists the member functions related to methods of vector boolean functions initialization. Table
:ref:`Representation Table <Representation>` lists the member functions related to the representations of vector boolean functions as described above. All the member functions of *VBF* have an in-line definition, for instance: :code:`void TT(NTL::mat_GF2& X, VBF& F)` is also defined as :code:`inline NTL::mat_GF2 TT(VBF& F)`. 

.. _Initialization:

+-----------------------------------------------------------------------------------------------------------+
|                     Initalization of VBF                                                                  |
+===========================================================================================================+
| SYNTAX                                   | DESCRIPTION                                                    |
+------------------------------------------+----------------------------------------------------------------+
| void puttt(const NTL::mat_GF2& X)        | (1) :math:`\matr{T}_F = \matr{T}`                              |
+-----------------------------------------------------------------------------------------------------------+
| void putHexTT(istream& s)                | (1) VBF which has an hexadecimal representation                |
|					   | of its truth table defined by :math:`s` (only for :math:`m=1`) | 
+-----------------------------------------------------------------------------------------------------------+

\textsl{void putDecTT(const NTL::vec\_long\& d,const long\& m)} & (1) VBF which has an decimal representation of its truth table \\
& defined by $d$ and $m$ is the number of component boolean functions\\\hline
\textsl{void putirrpol(GF2X\& g)} \ \ \textsl{void puttrace(string\& f)} & (2) Set $F$ by its trace $f$ and the irreducible polynomial $g$ \\\hline
\textsl{void putpol(vec\_pol\& p)} & (3) Set $F$ with Polynomials in $ANF$ equals to $p$\\\hline
\textsl{void putanf(const NTL::mat\_GF2\& A)} & (4) $\matr{ANF}_F = \matr{A}$\\\hline
\textsl{void putchar(const NTL::mat\_ZZ\& C)} & (5) $\matr{Img}(F) = \matr{C}$\\\hline
\textsl{void putwalsh(const NTL::mat\_ZZ\& W)} & (6) $\matr{WS}(F) = \matr{W}$\\\hline
\textsl{void putper(const NTL::vec\_ZZ\& v)} & (10) VBF which is a permutation defined by $\vec{v}$\\\hline
\textsl{void putexp\_comp(const NTL::vec\_ZZ\& v)} & (11) VBF defined by Expansion and Compression DES vector $\vec{v}$\\\hline
\textsl{void putsbox(const NTL::mat\_ZZ\& S)} & (12) VBF which is a DES S-Box defined by $\matr{S}$\\\hline

\caption{Representation of VBF\label{tab:Representation}}
SYNTAX & DESCRIPTION\\\hline
\textsl{void TT(NTL::mat\_GF2\& X, VBF\& F)} & (1) $\matr{X}=\matr{T}_F$\\\hline
\textsl{void getHexTT(ostream\& s)} & (1)  $s$ is the hexadecimal representation of the truth table of $F$ \\\hline
\textsl{NTL::vec\_long getDecTT() const} & (1) Decimal representation of the truth table \\\hline
\textsl{void Trace(GF2EX\& f, VBF\& F)} & (2) $F$ has a trace representation defined by $f$\\\hline
\textsl{void Pol(NTL\_SNS ostream\& s, VBF\& F)} & (3) $s$ contains the Polynomials in $ANF$ of $F$\\\hline
\textsl{void ANF(NTL::mat\_GF2\& X, VBF\& F)} & (4) $\matr{X}=\matr{ANF}_F$\\\hline
\textsl{void Charact(NTL::mat\_ZZ\& X, VBF\& F)} & (5) $\matr{X}=\matr{Img(F)}$\\\hline
\textsl{void Walsh(NTL::mat\_ZZ\& X, VBF\& F)} & (6) $\matr{X}=\matr{WS}(F)$\\\hline
\textsl{void LAT(NTL::mat\_ZZ\& X, VBF\& F)} & (7) $\matr{X}=\matr{LP}(F)$\\\hline
\textsl{void DAT(NTL::mat\_ZZ\& X, VBF\& F)} & (8) $\matr{X}=\matr{DP}(F)$\\\hline
\textsl{void AC(NTL::mat\_ZZ\& X, VBF\& F)} & (9) $\matr{X}=\matr{R}(F)$\\\hline
\textsl{void PER(NTL::vec\_ZZ\& v, VBF\& F)} & (10) $\vec{v}$ is the permutation vector defined by $F$ \\\hline
