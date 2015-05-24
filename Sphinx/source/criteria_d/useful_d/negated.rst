Negated fixed points
====================

Negated fixed points of *F* are those which satisfy :math:`\{ \vec{x} \given F(\vec{x})= \overline{\vec{x}} \}`. The method used to obtain this information is the following:

.. code-block:: c

   NTL::mat_GF2 negatedfixedpoints(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Negated fixed points: " << endl <<  negatedfixedpoints(F) << endl;
