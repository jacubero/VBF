###################################
Initializations and representations
###################################

.. contents::
   :local:
   :depth: 2

In this chapter we are going to describe the methods that can be used to represent a VBF class related to a Vector Boolean Function :math:`F \in \funct{F}_{n,m}`. Some of these representations can be used to initialize a VBF class. The representations implemented in the VBF library are the truth table, the trace, the Polynomials in Algebraic Normal Form (ANF), the ANF table, the Characteristic Function, the Walsh spectrum, the Linear Profile, the Differential Profile, the Autocorrelation Spectrum, the Permutation matrix (if it is bijective), the representation as Expansion and Compression DES permutations, and the DES-like S-box representation. All the member functions of *VBF* have an in-line definition, for instance: :code:`void TT(NTL::mat_GF2& X, VBF& F)` is also defined as :code:`inline NTL::mat_GF2 TT(VBF& F)`. 

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
