##########################################################
Operations and constructions over Vector Boolean Functions
##########################################################

.. contents::
   :local:
   :depth: 2

In this chapter, some basic constructions for Vector Boolean functions supported by the VBF class are described. Some of them correspond to secondary constructions, which build :math:`(n,m)` variable vector Boolean functions from :math:`(n',m')` variable ones (with :math:`n' \leq n, m' \leq m`). The direct sum has been used to construct resilient and bent Boolean functions [Carlet:04]_. The concatenation can be used to obtain resilient functions or functions with maximal nonlinearity. The concatenation of polynomials in ANF can be used to obtain functions of high nonlinearity with :math:`n` variables from functions with high nonlinearity with :math:`n'` variables :math:`(n' < n)`. Adding coordinate functions and bricklayering are constructions used to build modern ciphers such as CAST [CAST:256]_, DES [DES:77]_ and AES [DaemenR:02]_. Additionally, VBF provides operations for
identification if two vector Boolean functions are equal, the sum of two vector Boolean functions, the composition of two vector Boolean functions and the inverse of a Vector Boolean function.  

.. include::
   operations_d/equality.rst

.. include::
   operations_d/composition.rst

.. include::
   operations_d/inverse.rst

.. include::
   operations_d/sum.rst

.. include::
   operations_d/directsum.rst

.. include::
   operations_d/concatenation.rst

.. include::
   operations_d/concatenationpol.rst

.. include::
   operations_d/addition.rst

.. include::
   operations_d/bricklayer.rst

.. include::
   operations_d/summary.rst
