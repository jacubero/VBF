*******
Magenta
*******

Description
===========

*Magenta* is a symmetric key block cipher developed by Michael Jacobson Jr. and Klaus Huber for Deutsche Telekom. The cipher was submitted to the Advanced Encryption Standard process, but did not advance beyond the first round; cryptographic weaknesses were discovered and it was found to be one of the slower ciphers submitted. It has one 8x8 S-box.

Summary
=======

+-------+------+------+-------+------+---------+----------------+---------------+---------+
| S-box | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*          | *DP*    |
+=======+======+======+=======+======+=========+================+===============+=========+
| S     | 102  | 44   | 7     | 4    | 80      | 217600         | 0.04125976563 | 0.03125 |
+-------+------+------+-------+------+---------+----------------+---------------+---------+

S
=

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8+x^6+x^5+x^2+1`: `Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Magenta.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MAGENTA/Magenta.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 5            | 2                |
+--------------+------------------+
| 9            | 1                |
+--------------+------------------+
| 38           | 1                |
+--------------+------------------+
| 198          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (1,0,1,0,0,0,0,1)

It has 2 negated fixed points: (0,0,0,1,1,1,0,0), (1,1,1,1,1,1,1,1)

