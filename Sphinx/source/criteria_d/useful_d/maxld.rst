Maximum possible linearity distance 
===================================

The *Maximum possible linearity distance* for a Vector Boolean Function with the same dimensions as *F* and is equal to :math:`2^{n-1}-2^{n-m/2-1}`. The method used to obtain this information is the following:

.. code-block:: c

   NTL::RR ldmax(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Maximum Linearity distance: " << ldmax(F) << endl;
