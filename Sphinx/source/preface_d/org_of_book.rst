*************************
Organization of this Book
*************************

**Section 1: Introduction**
===========================

The introduction provides a brief description of the functions available in the VBF library and gives a general overview of the VBF's programming interface and conventions. It also illustrates how to obtain and install the library, and introduces some mathematical preliminaries and notations.  

**Section 2: Using the library**
================================

This chapter describes how to compile programs that use VBF and how to evaluate new algorithms.

**Section 3: Representations and characterizations**
====================================================

This chapter presents a review of theory relevant to the study of the typical forms of Vector Boolean function representations and chacterizations. We will consider representations those that uniquely represents a Vector Boolean function. Characterizations does not uniquely determine the Vector Boolean function in contrast to the previous matrices but provide some useful information in the context of cryptography.

Representations included in this chapter are the Truth Table (TT), the polynomials in Algebraic Normal Form (Pol) and ANF Table (ANF), the Image (Char), Component functions Truth Table(LTT), Sequence vectors of Component functions CTT, the Trace Representation (Trace) and Affine function Representation. A definition for all these representations are given and the relationships among them and their various properties are also discussed.

Characterizations such as Linear Profile (LP), Differential Profile (DP), Autocorrelation Spectrum (AC), Linear Structures (LS) are introduced. A definition for all these represen- tations are given and the relationships among them and the above representations and their various properties are also discussed.

The basic concepts of linear and differential cryptanalysis are introduced in terms of the Linear Profile and Differential Profile, together with other properties related with these attacks, such as: linear potential, differential potential, linear or differential relations associated with a specific value.

Affine equivalence analysis of Boolean functions by means of VBF library is described. It is showed how to obtain the Frequency distribution of the absolute values of the Walsh Spectrum and of the Autocorrelation Spectrum.

It is possible to check randomness of a Vector Boolean function outputs with VBF by means of its cycle structure, and the analysis of the presence of fixed points or negated fixed points.

Finally, some other representations useful in block ciphers are described such as the Permutation Vector (Per), Expansion and Compression DES permutations and DES-like S-box representations.
The description of each representation and characterization is complemented with the description of the methods in VBF related to them. Most of the member functions of V BF have an in-line definition, for instance: :code:`void TT(NTL::mat_GF2& X, VBF& F)` is also defined as inline :code:`NTL::mat_GF2 TT(VBF& F)`. 

**Section 4: Cryptographic Criteria**
=====================================

This chapter defines some properties relevant for cryptographic applications and explains how to use the package to compute them. They are defined in relation to the representation or transform from which they are derived.

Those properties are criteria or those which provide useful information in cryptanalysis. Among the criteria we find nonlinearity, r-th order nonlinearity, linearity distance, balancedness, correlation immunity, resiliency (i.e. balancedness and correlation immunity), propagation criterion, global avalanche criterion, algebraic degree and algebraic immunity. Other properties described are the maximum possible nonlinearity or the maximum possible linearity distance achievable by a Vector Boolean function with the same number of inputs, the type of function in terms of nonlinearity.

**Section 5: Constructions for Vector Boolean functions**
=========================================================

In this chapter, some basic constructions for Vector Boolean functions supported by the VBF class are described. Some of them correspond to secondary constructions, which build (n,m) variable vector Boolean functions from (n′,m′) variable ones (with n′ ≤ n,m′ ≤ m). The direct sum has been used to construct resilient and bent Boolean functions [Carlet:04]_. The concatenation can be used to obtain resilient functions or functions with maximal nonlinearity. The concatenation of polynomials in ANF can be used to obtain functions of high nonlinearity with n variables from functions with high nonlinearity with n′ variables (n′ < n). Adding coordinate functions and bricklayering are constructions used to build modern ciphers such as CAST [CAST:256]_, DES [DES:77]_ and AES [DaemenR:02]_. Additionally, VBF provides operations for identification if two vector Boolean functions are equal, the sum of two vector Boolean functions, the composition of two vector Boolean functions and the inverse of a Vector Boolean function.


**Section 6: Analysis of AES competition cryptographic algorithms**
===================================================================

In January 1997, the US National Institute of Standards and Technology (NIST) announced the start of an initiative to develop a new encryption standard: the AES. The AES selection process was open in which 15 candidates were accepted for the first evaluation round and 5 finalists were announced in the second round. On October 2, 2000, NIST officially announced that Rijndael would become the AES. In this chapter, a number of cryptographic algorithms from the AES (Advanced Encryption Standard) candidates accepted for the first evaluation round process are analysed.

**Section 7: Analysis of CRYPTEC project cryptographic algorithms**
===================================================================

CRYPTREC is the Cryptography Research and Evaluation Committees set up by the Japanese Government to evaluate and recommend cryptographic techniques for government and industrial use. It is comparable in many respects to the European Union's NESSIE project and to the Advanced Encryption Standard process run by NIST in the U.S.. In this chapter, certain cryptographic algorithms from CRYPTEC project candidates are analysed.

**Section 8: Analysis of NESSIE project cryptographic algorithms**
==================================================================

The NESSIE call includes a request for a broad set of algorithms providing date confidentiality, data authentication, and entity authentication. These algorithms include block ciphers, stream ciphers, hash functions, MAC algorithms, digital signature schemes, and public-key encryption and identification schemes. In this chapter, several cryptographic algorithms from NESSIE (New European Schemes for Signature, Integrity, and Encryption) research project candidates are analysed.

**Section 9: Analysis of other cryptographic algorithms**
=========================================================

There are some block ciphers that are relevant either because its wide use or because of its importance in the development of cryptanalysis techniques. In this chapter, some cryptographic algorithms from other block ciphers are analysed.

**Section 10: Design of cryptographically robust Vector Boolean functions**
===========================================================================

This chapter is devoted to the practical implementation of robust Boolean functions as fundamental components for S-box design. First, the design of such functions is formalized as a Multi-Objective Combinatorial Optimization (MOCO) problem.

**Section 11: FAQs**
====================

Frequently Asked Questions.

**Section 12: Bibliography**
============================

This chapter includes all citations referenced along the Reference Manual.
