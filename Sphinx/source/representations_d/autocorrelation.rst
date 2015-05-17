************************
Autocorrelation Spectrum
************************

The Autocorrelation Spectrum of a Vector Boolean Function does not characterize it. Thus, a VBF class cannot be initialized by its Autocorrelation Spectrum. To obtain its representation as Autocorrelation Spectrum, the following method must be used:

.. code-block:: c

   void AC(NTL::mat_ZZ& R, VBF& F)

It is denoted by :math:`\matr{R}(F) \in \matr{M}_{2^n \times 2^m}(\bbbz)`, obtained by Equation :ref:`Autocorrelation Spectrum <AutocorrelationVBF>`.  The lower bound of the Autocorrelation Spectrum values is :math:`-2^n` and the upper bound is :math:`2^n`.

An example of use could be the following:

.. code-block:: c

   VBF  F;
   NTL::mat_ZZ  A;

   A = AC(F);
