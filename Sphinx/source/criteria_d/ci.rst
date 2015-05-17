********************
Correlation Immunity
********************

*Correlation Immunity*, so that :math:`F \in \funct{F}_{n,m} is an :math:`(n,m,t)-\crit{CI}` function if and only if every nonzero linear combination :math:`f(\vec{x})=\sum_{i=1}^{m} v_if_i(\vec{x})` of coordinate functions of *F* is an :math:`(n,1,t)-\crit{CI}` function or a :math:`t-\crit{CI}` function, where :math:`\vec{x} \in \gf{V_n},\  v_i \in \gf{GF(2)} \ i=1,\dots,m` and not all zeroes. This criterion can be obtained from the Walsh Spectrum the following way:

.. math::
   :nowrap: 
 
   \begin{equation*}
      \walsh{\theta}_F(\vec{u},\vec{v})= 0, \ \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq t, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}
   \end{equation*}

[Siegenthaler:84]_ **Siegenthaler's inequality**. If *f* is a t-CI function, then :math:`deg(f) \leq n-t`. Moreover if *f* is balanced (i.e. *f* is t-resilient), then :math:`deg(f) < n-t` unless :math:`t=n-1`.

The method used to obtain this criterion is the following:

.. code-block:: c

   void CI(int& t, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   t = CI(F);
   cout << "It is a (" << F.n() << "," << F.m() << "," << t << ")-CI function" << endl;

