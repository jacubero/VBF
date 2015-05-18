Maximum possible nonlinearity
=============================

The *Maximum possible nonlinearity* for a Vector Boolean Function with the same dimensions as :math:`F \in \funct{F}_{n,m}` (when :math:`n` is even). The functions with maximum possible nonlinearity are called bent functions and their nonlinearity is equal to :math:`2^{n-1}-2^{n/2-1}` [Rothaus:76]_ if :math:`n` is even. The best upper bound for :math:`n` odd is :math:`2^{n-1}-\frac{1}{2} \sqrt{ 3 \times 2^n -2 -2 \frac{(2^n-1)(2^{n-1}-1)}{2^m-1}}` and it is called the Sidelnikov-Chabaud-Vaudenay bound.

The method used to obtain this informaton is the following:

.. code-block:: c

   NTL::RR nlmax(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Maximum Nonlinearity: " << nlmax(F) << endl;
