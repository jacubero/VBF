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

Polynomial representation in ANF:

:math:`f_1 = x_6x_7x_8+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_8+x_3x_7x_8+x_3x_6+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2+x_2x_8+x_2x_6+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_7+x_1x_6+x_1x_6x_8+x_1x_5x_8+x_1x_5x_7+x_1x_4+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_7x_8+x_1x_2x_6+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_2 = x_6x_7+x_6x_7x_8+x_5+x_5x_7x_8+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_6x_7+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6x_8+x_1x_5+x_1x_5x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_5x_7+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_3 = x_6x_8+x_6x_7x_8+x_5+x_5x_8+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_5+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_7+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_7+x_1x_7x_8+x_1x_6x_7x_8+x_1x_5+x_1x_5x_6x_7+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6`

:math:`f_4 = x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_4x_8+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7+x_3x_5x_8+x_3x_5x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_5x_6+x_2x_5x_6x_8+x_2x_4+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2x_8+x_1x_2x_7+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_5x_6x_7+x_1x_2x_4x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_5 = x_7x_8+x_6x_7x_8+x_5x_8+x_5x_6+x_4+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_5x_6+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2+x_2x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_5x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_6 = x_7+x_7x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_7x_8+x_4x_6+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7x_8+x_2x_6x_7+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_2+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_7 = x_8+x_7x_8+x_6x_8+x_6x_7x_8+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4+x_4x_8+x_4x_6x_8+x_4x_6x_7+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5+x_2x_5x_7x_8+x_2x_4+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7x_8+x_1x_7+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_2x_8+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_8 = 1+x_8+x_7+x_7x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_7+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_8+x_4x_6+x_4x_6x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_7x_8+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1x_8+x_1x_7+x_1x_6x_8+x_1x_5x_7+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_5x_6+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

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

