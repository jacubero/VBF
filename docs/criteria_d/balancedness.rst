************
Balancedness
************

Description
===========

The output of a Vector Boolean function :math:`F \in \funct{F}_{n,m}` used in a cipher must be uniformly distributed over :math:`\gf{V_m}` for avoiding statistical dependence between the plaintext and the ciphertext (which can be used in attacks).

:math:`F \in \funct{F}_{n,m}` is balanced (or has balanced output) if each possible output *m*-tuple occurs with equal probability :math:`2^{-m}`. This criterion can be evaluated from the Walsh Spectrum in the following way: :math:`\walsh{\theta}_F(\vec{0},\vec{v})= 0, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}`.

:math:`f \in \funct{F}_n` is balanced if and only if the Walsh coefficient at :math:`\vec{0}` is zero. :math:`F \in \funct{F}_{n,m}` is balanced if and only if the first row of its Walsh Spectrum has all its elements equal to zero except from the first entry.

The imbalance of a Boolean function is defined to be :math:`\crit{I}(f)= | wt(f)-2^{n-1} | = 2^{n-1} | \Cor(f,0)  |` where *0* indicates the constant zero Boolean function.

Imbalance is defined as the minimum Hamming distance to a balanced function and is therefore directly proportional to the magnitude of the correlation with the constant zero Boolean function. Thus, when imbalance is zero, the function is balanced. Balancedness is a fundamental cryptographic criterion as an imbalanced function has suboptimal unconditional entropy, i.e. it is correlated to a constant function.

The significance of the balancedness criterion is that the higher the magnitude of a function's imbalance (deviation from uniform distribution of outputs), the more likelihood of a high probability linear approximation being obtained. This, in turn, represents a weakness in the function in terms of linear cryptanalysis. In particular, a large imbalance may enable the function to be easily approximated by a constant function.

Library
=======

This criterion can only take values *0* (meaning *F* is not balanced) or *1* (meaning *F* is balanced). The method used to obtain this criterion is the following:

.. code-block:: c

   void Bal(int& bal, VBF& F)

and there is also an inline function:

.. code-block:: c

   inline int Bal(VBF& a)  

Example
-------

The following program finds out if a Vector Boolean function is balanced given its Truth Table.

.. code-block:: c

   #include <iostream>
   #include <fstream>
   #include "VBF.h"

   int main(int argc, char *argv[])
   {
      using namespace VBFNS;

      VBF          F;
      NTL::mat_GF2 T;

      ifstream input(argv[1]);
      if(!input) {
         cerr << "Error opening " << argv[1] << endl;
         return 0;
      }
      input >> T;
      F.puttt(T);
      input.close();

      if (Bal(F)) {
         cout << "It is a balanced function" << endl;
      } else {
         cout << "It is not a balanced function" << endl;
      }    

      return 0;
   }

If we use the *NibbleSub* S-box Truth Table as input, the output would be the following:

.. code-block:: console

   It is a balanced function

*NibbleSub* S-box is balanced as each possible 4-tuple occurs with equal probability :math:`\frac{1}{2^4}`.

The following figure represents the Walsh Spectrum of *NibbleSub* and emphasizes in red the first row.

.. image:: /images/bal.png
   :width: 750 px
   :align: center

As all Walsh Spectrum's values are 0 except from the :math:`\vec{0} \in \gf{V_4}`, we can conclude that *NibbleSub* is balanced.