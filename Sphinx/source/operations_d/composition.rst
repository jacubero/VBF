***********
Composition
***********

Let :math:`F \in \funct{F}_{n,p}, G \in \funct{F}_{p,m}`, then the *Composition Function* is :math:`G \circ F \in \funct{F}_{n,m}`. It can be obtained with the following method:

.. code-block:: c

   void Comp(VBF& X, VBF& F, VBF& G) 

An example of use of this method could be:

.. code-block:: c

   Comp(X,F,G);
   cout << "The Truth Table of the composition function G o F is " << endl << TT(X) << endl;

The output for the execution of the example program with the code above and the functions *F* and *G* will be:

.. code-block:: console

   [[0 1 1 1]
   [0 0 0 1]
   [0 1 0 0]
   [1 1 0 0]
   [1 1 1 0]
   [0 1 0 1]
   [0 0 0 0]
   [1 0 0 0]
   [0 0 1 1]
   [1 1 0 1]
   [1 0 0 1]
   [0 0 1 0]
   [1 0 1 0]
   [1 1 1 1]
   [1 0 1 1]
   [0 1 1 0]
   ]

