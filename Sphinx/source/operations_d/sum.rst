***
Sum
***

Let :math:`n \geq 1, m \geq 1, F,G \in \funct{F}_{n,m}`. The *Sum* of *F* and *G* (denoted by *F+G*) is the Vector Boolean Function whose Truth Table results from the addition of the Truth Tables of *F* and *G*: :math:`T_{F+G} = T_F+T_G`. It can be proved that the Walsh Spectrum of the sum can be obtained by the convolution of the columns vectors of the respective Walsh Spectra. It can be obtained with the following method:

.. code-block:: c

   void sum(VBF& X, VBF& F, VBF& G)

An example of use of this method could be:

.. code-block:: c

   sum(X,F,G);   
   cout << "The Truth Table of F+G is " << endl << TT(X) << endl;

The output for the execution of the example program with the code above and the functions *F* and *G* will be:

.. code-block:: console

   [[1 1 0 0]
   [0 1 0 0]
   [1 1 0 1]
   [0 1 1 0]
   [0 0 1 1]
   [0 1 1 0]
   [0 0 0 0]
   [0 0 0 1]
   [1 1 1 1]
   [0 1 1 0]
   [1 0 1 0]
   [1 0 1 0]
   [0 0 0 1]
   [1 1 0 1]
   [1 0 1 0]
   [1 0 0 0]
   ]

