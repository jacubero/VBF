**************************
Global avalanche criterion
**************************

*Global avalanche criterion* is defined by two indicators [zhang95gac]_: The *absolute indicator* of *F*, denoted by :math:`\crit{MAXAC}(F)`, defines the maximum absolute non-zero value of the Autocorrelation Spectrum and quantifies the distance to the set :math:`\funct{LS}_n`. The *sum-of-squares indicator*, denoted by :math:`\sigma`, is the second moment of the autocorrelation coefficients. In order to achieve good diffusion, cryptographic functions should low values of both indicators.

The methods used to obtain these criteria are the following:

.. code-block:: c

   void maxAC(NTL::ZZ& x, VBF& F)
   void sigma(NTL::ZZ& x, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "The absolute indicator of F is " << maxAC(F) <<  " and sum-of-squares indicator of F is " << sigma(F) << endl;

