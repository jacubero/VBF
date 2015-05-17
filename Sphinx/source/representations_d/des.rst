*****************************
DES-like S-box representation
*****************************

The VBF class also supports the definition of *F* as given in [DES:77]_ for the DES S-boxes.  A VBF class can be initialized giving its DES-like S-box representation matrix with the following method:

.. code-block:: c

   void putsbox(const NTL::mat_ZZ& S)

An example of use could be the following:

.. code-block:: c

   VBF  F;
   NTL::mat_ZZ S;

   F.putsbox(S);

