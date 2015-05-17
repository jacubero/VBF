************
Nonlinearity
************

*Nonlinearity* defined as the minimum among the nonlinearities of all nonzero linear combinations of the coordinate functions of *F*; it can be evaluated from the Walsh Spectrum the following way:  

.. math::
   :nowrap: 

   \begin{equation}
      \crit{NL}(F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \crit{NL}(\vec{v} \cdot F) = 2^{n-1}-\frac{1}{2} \stackrel{*}{\max}(\matr{WS}(F)(\vec{u},\vec{v}))
   \end{equation} 

where also :math:`\crit{NL}` for denoting vector functions nonlinearity has been used with an abuse of notation. This criterion can take values from :math:`0` to :math:`2^{n-1}-2^{n/2-1}` if :math:`n` is even or from :math:`0` to :math:`2^{n-1}-\frac{1}{2} \sqrt{ 3 \times 2^n -2 -2 \frac{(2^n-1)(2^{n-1}-1)}{2^m-1}}` if `n` is odd.

The method used to obtain this criterion is the following:

.. code-block:: c

   void nl(NTL::RR& x, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Nonlinearity: " << nl(F) << endl;

