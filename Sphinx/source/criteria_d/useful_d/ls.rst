Linear structures
=================

The *Linear structures* of *F*, defined as the vectors for which its associated row in the Differential Profile coincides with the vector zero. 

The method used to obtain this information is the following:

.. code-block:: c

   NTL::mat_GF2 LS(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Linear structures: " << endl << LS(F) << endl;
