***********************
r-th order nonlinearity
***********************

For every positive integer *r*, the *r-th order nonlinearity* of a Vector Boolean Function *F* is the minimum r-th order nonlinearity of its component functions (the r-th order nonlinearity of a Boolean function equals its minimum Hamming distance to functions of algebraic degrees at most *r*).

.. math::
   :nowrap: 

   \begin{equation}
      \crit{NL}_r(F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \crit{NL}_r(\vec{v} \cdot F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \min_{f \in \funct{F}_n} d(f,\vec{v} \cdot F) 
   \end{equation}

The method used to obtain this criterion is the following:

.. code-block:: c

   void nlr(long& x, VBF& F, int r)

An example of use of 2-nd order nonlinearity could be the following:

.. code-block:: c

   VBF  F;
   long a;

   nlr(a,F,2);
   cout << "2-nd order nonlinearity: " << a << endl;

