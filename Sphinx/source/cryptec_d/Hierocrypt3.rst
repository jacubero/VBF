***********
Hierocrypt3
***********

Description
===========

*Hierocrypt3* and Hierocrypt-L1 are block ciphers created by Toshiba in 2000. They were submitted to the NESSIE project, but were not selected. Both algorithms were among the cryptographic techniques recommended for Japanese government use by CRYPTREC in 2003, however, both have been dropped to "candidate" by CRYPTREC revision in 2013. Both of them have the same 8x8 S-box: S

Summary
=======

+-------+------+-----+-------+------+---------+----------------+----------+----------+
| S-box | *NL* |*LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*     | *DP*     |
+=======+======+=====+=======+======+=========+================+==========+==========+
| S     | 112  | 56v | 7     | 4    | 32      | 133120         | 0.015625 | 0.015625 |
+-------+------+-----+-------+------+---------+----------------+----------+----------+

S
=

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^4 + x^3 + x^2 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Hierocrypt3.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Hierocrypt3/S.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 2            | 1                |
+--------------+------------------+
| 3            | 1                |
+--------------+------------------+
| 109          | 1                |
+--------------+------------------+
| 141          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,1,1,0,0,1,1,1)

It has 2 negated fixed points: (0,0,0,1,0,1,1,1), (1,0,0,1,0,1,0,0)

