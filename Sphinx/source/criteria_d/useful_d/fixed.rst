Fixed points
============

The fixed points of *F* are those which satisfy :math:`\{ \vec{x} \given F(\vec{x})=\vec{x} \}`. The method used to obtain this informaton is the following:

.. code-block:: c

   NTL::mat_GF2 fixedpoints(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Fixed points: " << endl <<  fixedpoints(F) << endl;
