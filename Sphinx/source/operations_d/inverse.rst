*******
Inverse
*******

Let :math:`n \geq 1, F \in \funct{F}_{n,n}`. :math:`F^{-1}` is the *functional inverse* of *F* if the composition of both functional results in the identity function. If a Vector Boolean Function :math:`F \in \funct{F}_{n,n}` is invertible, then we can find its inverted function with the following method:

.. code-block:: c

   void inv(VBF& X, VBF& F)

An example of use of this method could be:

.. code-block:: c

   inv(X,F);
   cout << "The Truth Table of the inverse of F is " << endl << TT(X) << endl;

The output for the execution of the example program with the code above and the functions *F* will be:

.. code-block:: console

   [[1 1 0 1]
   [0 0 1 1]
   [1 0 1 1]
   [0 0 0 0]
   [1 0 1 0]
   [0 1 1 0]
   [0 1 0 1]
   [1 1 0 0]
   [0 0 0 1]
   [1 1 1 0]
   [0 1 0 0]
   [0 1 1 1]
   [1 1 1 1]
   [1 0 0 1]
   [1 0 0 0]
   [0 0 1 0]
   ]

