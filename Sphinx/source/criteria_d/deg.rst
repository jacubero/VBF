****************
Algebraic degree
****************

*Algebraic degree* defined as the maximum among the algebraic degrees of all nonzero linear combinations of the coordinate functions of *F* [Nyberg:92]_, namely:

.. math::
   :nowrap: 
 
   \begin{equation*}
      \crit{DEG}(F) = \min_g \{\crit{DEG}(g) \given g = \sum_{j=1}^{m} v_jf_j , \  \vec{v} \neq \vec{0} \in \gf{V_m} \} 
   \end{equation*}

being the algebraic order or degree of a Boolean function, the order of the largest product term which exists in the *ANF*. This criterion is calculated by finding out the ANF table and then analyzing the order of all the linear combinations of coordinate functions. This criterion can take values from :math:`0` to :math:`n`.

The method used to obtain this criterion is the following:

.. code-block:: c

   void deg(int& d, VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "The degree of the function is " << deg(F) << endl;
