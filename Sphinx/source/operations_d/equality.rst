****************
Equality testing
****************

Let :math:`n \geq 1, m \geq 1, F,G \in \funct{F}_{n,m}`. *F* and *G* are *equal* if their Truth Tables are the same.  We can compare two functions for equality with the following method: 

.. code-block:: c

   long operator==(VBF& F, VBF& G)
   long operator!=(VBF& F, VBF& G)

An example of use of this method could be:

.. code-block:: c

   if (F == G)
   {
     cout << "F and G are equal" << endl;
   }  else
   {
     cout << "F and G are not equal" << endl;
   }

The output for the execution of the example program with the code above and the functions *F* and *G* will be:

.. code-block:: console

   F and G are not equal

