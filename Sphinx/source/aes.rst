####################################################
Analysis of AES competition cryptographic algorithms
####################################################

In January 1997, the US National Institute of Standards and Technology (NIST) announced the start of an initiative to develop a new encryption standard: the AES. The AES selection process was open in which 15 candidates were accepted for the first evaluation round and 5 finalists were announced in the second round. On October 2, 2000, NIST officially announced that Rijndael would become the AES. In this chapter, a number of cryptographic algorithms from the AES (Advanced Encryption Standard) candidates accepted for the first evaluation round process are analysed.

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
   aes_d/crypton.rst

.. include::
   aes_d/deal.rst

.. include::
   aes_d/e2.rst

.. include::
   aes_d/Rijndael.rst



