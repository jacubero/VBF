Linear Potential
================

The *Linear Potential* of *F*, defined as :math:`\crit{LP}(F) = \frac{1}{2^{2n}} \cdot \stackrel{*}{\max}({\matr{WS}(F)(\vec{u},\vec{v})}^2)`

This criterion can take values from :math:`\frac{1}{2^n}` to :math:`1`.

The method used to obtain this informaton is the following:

.. code-block:: c

   void lp(NTL::RR& x, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Linear potential: " << lp(F) << endl;

