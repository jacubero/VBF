************
Balancedness
************

Considering that :math:`F \in \funct{F}_{n,m}` is balanced (or to have balanced output) if each possible output m-tuple occurs with equal probability :math:`\frac{1}{2^m}`, that is, its output is uniformly distributed in :math:`\gf{V_m}`. This criterion can be evaluated from the Walsh Spectrum the following way:

.. math::
   :nowrap: 
 
   \begin{equation*}
      \walsh{\theta}_F(\vec{0},\vec{v})= 0, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}
   \end{equation*}

This criterion can onlye take values :math:`0` (meaning *F* is not balanced) or :math:`1` (meaning *F* is balanced).

The method used to obtain this criterion is the following:

.. code-block:: c

   void Bal(int& bal, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   if (F.getbal())
   {
      cout << "It is a balanced function" << endl;
   } else
   {
      cout << "It is not a balanced function" << endl;
   }    

