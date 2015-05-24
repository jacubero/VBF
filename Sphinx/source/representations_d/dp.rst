********************
Differential Profile
********************

The Differential Profile of a Vector Boolean Function does not characterize it. Thus, a VBF class cannot be initialized by its Differential Profile. To obtain its representation as Differential Profile, the following method must be used:

.. code-block:: c

   void DAT(NTL::mat_ZZ& DP, VBF& F)

It is denoted by :math:`\matr{DP}(F) \in \matr{M}_{2^n \times 2^m}(\bbbr)`, results from the application of the Walsh Transform to the Linear Profile. The lower bound of the Differential Profile values is :math:`0` and the upper bound is :math:`2^{2n \cdot m}`.

An example of use could be the following:

.. code-block:: c

   VBF  F;
   NTL::mat_ZZ  DP;

   DP = DAT(F);

