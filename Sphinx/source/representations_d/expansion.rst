******************************************
Expansion and Compression DES permutations
******************************************

If *F* is an affine Vector Boolean Function with :math:`n \neq m` in the form of Expansion and Compression DES permutations [DES:77]_, then it can be defined as an array with :math:`m` elements which are the output bits.

A VBF class can be initialized giving its Expansion and Compression DES permutation vector with the following method:

.. code-block:: c

   void putexp_comp(const NTL::vec_ZZ& v)

An example of use could be the following:

.. code-block:: c

   VBF  F;
   NTL::vec_ZZ v;

   F.putexp_comp(v);
