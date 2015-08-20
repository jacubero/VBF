#####################################################
Analysis of Rijndael-related cryptographic algorithms
#####################################################

Rijndael block cipher is the result of a long design process with continuous improvements along the way. We are going to study some of its predecessors as well as some block ciphers that give some insight in the Rindael design strategy. In this chapter, some cryptographic algorithms with the design principles based on Rijndael block cipher are analysed.

Below you can find a legend describing the cryptographic criteria used in this chapter: 

+----------------+--------------------------+
| **NL**         | Nonlinearity             |
+----------------+--------------------------+
| **NL2**        | 2-nd order nonlinearity  |
+----------------+--------------------------+
| **LD**         | Linearity distance       |
+----------------+--------------------------+
| **DEG**        | Algebraic degree         |
+----------------+--------------------------+
| **AI**         | Algebraic immunity       |
+----------------+--------------------------+
| **MAXAC**      | Absolute indicator       |
+----------------+--------------------------+
| :math:`\sigma` | Sum-of-squares indicator |
+----------------+--------------------------+
| **LP**         | Linear potential         |
+----------------+--------------------------+
| **DP**         | Differential Potential   |
+----------------+--------------------------+

.. admonition:: Hyperlinks to representations
   :class: note

   Open the hyperlinks to representations below in a new browser window or in a new tab.
 
.. contents::
   :local:
   :depth: 2

.. include::
   rijndael_d/miniaes.rst

.. include::
   rijndael_d/square.rst


