#####################################
Representations and characterizations
#####################################

.. contents::
   :local:
   :depth: 2

This chapter presents a review of theory relevant to the study of the typical forms of Vector Boolean function representations and chacterizations. We will consider representations those that uniquely represents a Vector Boolean function. Characterizations does not uniquely determine the Vector Boolean function in contrast to the previous matrices but provide some useful information in the context of cryptography.

Representations included in this chapter are the Truth Table (TT), the polynomials in Algebraic Normal Form (Pol) and ANF Table (ANF), the Image (Char), Component functions Truth Table(LTT), Sequence vectors of Component functions CTT, the Trace Representation (Trace) and Affine function Representation. A definition for all these representations are given and the relationships among them and their various properties are also discussed.

Characterizations such as Linear Profile (LP), Differential Profile (DP), Autocorrelation Spectrum (AC), Linear Structures (LS) are introduced. A definition for all these represen- tations are given and the relationships among them and the above representations and their various properties are also discussed.

The basic concepts of linear and differential cryptanalysis are introduced in terms of the Linear Profile and Differential Profile, together with other properties related with these attacks, such as: linear potential, differential potential, linear or differential relations associated with a specific value.

Affine equivalence analysis of Boolean functions by means of VBF library is described. It is showed how to obtain the Frequency distribution of the absolute values of the Walsh Spectrum and of the Autocorrelation Spectrum.

It is possible to check randomness of a Vector Boolean function outputs with VBF by means of its cycle structure, and the analysis of the presence of fixed points or negated fixed points.

Finally, some other representations useful in block ciphers are described such as the Permutation Vector (Per), Expansion and Compression DES permutations and DES-like S-box representations.
The description of each representation and characterization is complemented with the description of the methods in VBF related to them. Most of the member functions of V BF have an in-line definition, for instance: :code:`void TT(NTL::mat_GF2& X, VBF& F)` is also defined as inline :code:`NTL::mat_GF2 TT(VBF& F)`. 

The figure summarizes the relationships among the different representations.

.. image:: /images/relationshipsrep.png
   :width: 750 px
   :align: center

The representations which are Boolean matrices are coloured in red, those which are Integer matrices are coloured in blue, those that are vector of integers are coloured in yellow and those which are polynomial are coloured in green.

.. include::
   representations_d/tt.rst

.. include::
   representations_d/trace.rst

.. include::
   representations_d/polynomials.rst

.. include::
   representations_d/anf.rst

.. include::
   representations_d/characteristic.rst

.. include::
   representations_d/walsh.rst

.. include::
   representations_d/lp.rst

.. include::
   representations_d/dp.rst

.. include::
   representations_d/autocorrelation.rst

.. include::
   representations_d/permutation.rst

.. include::
   representations_d/expansion.rst

.. include::
   representations_d/des.rst

.. include::
   representations_d/auxiliary.rst

.. include::
   representations_d/summary.rst
