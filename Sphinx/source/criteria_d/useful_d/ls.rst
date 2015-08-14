Linear structures
=================

Let :math:`F \in \funct{F}_{n,m}`, then :math:`\vec{u} \neq \vec{0} \in \gf{V_n}` is a linear structure of :math:`F` in terms of Differential Profile if and only if :math:`\matr{DP}(\vec{u},\vec{v}) = 0 \ \fa  \vec{v} \neq \vec{0} \in \gf{V_m}`

The method used to obtain this information is the following:

.. code-block:: c

   NTL::mat_GF2 LS(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Linear structures: " << endl << LS(F) << endl;
