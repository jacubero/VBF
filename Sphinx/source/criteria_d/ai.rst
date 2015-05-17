******************
Algebraic immunity
******************

*Algebraic immunity* of a Boolean function :math:`f \in \funct{F}_n` is defined as the minimum degree of all annihilators of *f* or *1+f* and it is denoted by :math:`\crit{AI}(f)` [Courtois:03]_, [CourtoisM:02]_, [FaugereA:03]_. 

The component algebraic immunity of any :math:`F \in \funct{F}_{n,m}`, denoted by :math:`\crit{AI}(F)`, is the minimal algebraic immunity of the component functions :math:`\vec{v} \cdot F (\vec{v} \neq \vec{0} \in \gf{V_m})` of the Vector Boolean Function. The algebraic immunity of any Boolean function is bounded above by its algebraic degree.

The method used to obtain this criterion is the following:

.. code-block:: c
 
   void AI(int& ai, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "The algebraic immunity of the function is " << AI(F) << endl;

