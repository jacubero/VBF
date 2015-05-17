**************
Linear Profile
**************

The Linear Profile of a Vector Boolean Function does not characterize it. Thus, a VBF class cannot be initialized by its Linear Profile. To obtain its representation as Linear Profile, the following method must be used:

.. code-block:: c

   void LAT(NTL::mat_ZZ& LP, VBF& F)

It is a matrix whose rows are characterized by :math:`\vec{u} \in \gf{V_n}` and whose columns are characterized by :math:`\vec{v} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{LP}(F) \in \matr{M}_{2^n \times 2^m}(\bbbr)`. It holds that :math:`\matr{LP}(F)(\vec{u},\vec{v}) = \frac{1}{2^{n+m}}|\matr{WS}(F)(\vec{u},\vec{v})|^2`. The lower bound of the Linear Profile values is :math:`0` and the upper bound is :math:`2^{2n}`.

An example of use could be the following:

.. code-block:: c

   VBF  F;
   NTL::mat_ZZ  LP;

   LP = LAT(F);

