###################################################
Analysis of NESSIE project cryptographic algorithms
###################################################

The NESSIE call includes a request for a broad set of algorithms providing date confidentiality, data authentication, and entity authentication. These algorithms include block ciphers, stream ciphers, hash functions, MAC algorithms, digital signature schemes, and public-key encryption and identification schemes. In this chapter, several cryptographic algorithms from NESSIE (New European Schemes for Signature, Integrity, and Encryption) research project candidates are analysed.

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
   nessie_d/anubis.rst

.. include::
   nessie_d/camellia.rst

.. include::
   nessie_d/grandcru.rst
