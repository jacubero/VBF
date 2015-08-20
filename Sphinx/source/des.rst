################################################
Analysis of DES-related cryptographic algorithms
################################################

The Data Encryption Standard (DES), known as the Data Encryption Algorithm (DEA) by ANSI and the DEA-1 by the ISO, has been a worldwide standard for 20 years. Some other block ciphers were designed inspired on DES during this period of time. In this chapter, certain cryptographic algorithms from DES (Data Encryption Standard) and other block ciphers with a similar design philosophy are analysed.

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
   des_d/DES.rst

.. include::
   des_d/macguffin.rst



