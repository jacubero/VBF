Differential Potential
======================

The *Differential Potential* of *F*, defined as :math:`\crit{DP}(F) = \stackrel{*}{\max}({\matr{DP}(F)(\vec{u},\vec{v})}` which is exploited as a measure of the robustness against differential cryptanalysis. 

This criterion can take values from :math:`\frac{1}{2^m}` to :math:`1`.

The method used to obtain this informaton is the following:

.. code-block:: c

   void dp(NTL::RR& x, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Differential potential: " << dp(F) << endl;
