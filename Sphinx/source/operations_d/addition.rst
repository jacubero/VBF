********************************
Addition of coordinate functions
********************************

Let :math:`n \geq 1, m=m_1+m_2, m_1,m_2 \geq 1` and :math:`F \in \funct{F}_{n,m_1}` and :math:`G \in \funct{F}_{n,m_2}`. The result of *adding coordinate functions* of *F* and *G* is the function :math:`(F,G) \in \funct{F}_{n,m_1+m_2}` where :math:`(F,G)(\vec{x}) = (f_1(\vec{x}),\ldots,f_{m_1}(\vec{x}),g_1(\vec{x}),\ldots,g_{m_2}(\vec{x}))`.  It can be obtained with the following method:

.. code-block:: c

   void addimage(VBF& X, VBF& F, VBF& G)

An example of use of this method could be:

.. code-block:: c

   addimage(X,F,G);
   cout << "The Truth Table of the addition of coordinate functions of F and G is "
           << endl << TT(X) << endl;

The output for the execution of the example program with the code above and the functions *F* and *G* will be:

.. code-block:: console

[[0 0 1 1 1 1 1 1]
[1 0 0 0 1 1 0 0]
[1 1 1 1 0 0 1 0]
[0 0 0 1 0 1 1 1]
[1 0 1 0 1 0 0 1]
[0 1 1 0 0 0 0 0]
[0 1 0 1 0 1 0 1]
[1 0 1 1 1 0 1 0]
[1 1 1 0 0 0 0 1]
[1 1 0 1 1 0 1 1]
[0 1 0 0 1 1 1 0]
[0 0 1 0 1 0 0 0]
[0 1 1 1 0 1 1 0]
[0 0 0 0 1 1 0 1]
[1 0 0 1 0 0 1 1]
[1 1 0 0 0 1 0 0]
]

