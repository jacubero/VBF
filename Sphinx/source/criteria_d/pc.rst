*********************
Propagation criterion
*********************

*Propagation criterion*, where :math:`F \in \funct{F}_{n,m}` satisfies the propagation criterion of degree :math:`l \ (\crit{PC}(l))` if any nonzero linear combination of the component Boolean functions satisfies the :math:`\crit{PC}(l)`. This criterion can be obtained from the Autocorrelation Spectrum the following way: 

.. math::
   :nowrap: 

   \begin{equation*}
      \R_F(\vec{u},\vec{v})=0, \ \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq l, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}
    \end{equation*}

This criterion can take values from :math:`0` to :math:`n`.

The method used to obtain this criterion is the following:

.. code-block:: c

   void PC(int& k, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   k = PC(F);
   cout << "The function is PC of degree " << k << endl;

