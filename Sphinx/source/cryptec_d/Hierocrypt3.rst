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
| S     | 112  | 126 | 7     | 4    | 32      | 133120         | 0.015625 | 0.015625 |
+-------+------+-----+-------+------+---------+----------------+----------+----------+

S
=

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_8+x_7x_8+x_6+x_6x_8+x_5+x_5x_7x_8+x_5x_6x_8+x_4x_8+x_4x_7x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_7+x_3x_6x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_4+x_2x_3x_4x_6+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6x_7x_8+x_1x_7x_8+x_1x_6+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6`

:math:`f_2 = x_8+x_7+x_7x_8+x_6x_8+x_6x_7+x_5x_7x_8+x_5x_6x_8+x_5x_6x_7+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_5x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_6+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1x_7+x_1x_7x_8+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_6+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_3 = x_8+x_6x_8+x_5+x_5x_8+x_5x_7+x_5x_6+x_5x_6x_7+x_5x_6x_7x_8+x_4x_7+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_7+x_3x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_5x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8`

:math:`f_4 = x_8+x_7+x_7x_8+x_6+x_5+x_5x_8+x_4+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_5x_8+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3x_6+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_7+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_6x_7+x_2x_4x_7+x_2x_4x_6x_7+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1x_8+x_1x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_5 = x_8+x_7x_8+x_6+x_6x_8+x_6x_7+x_5+x_5x_6x_8+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_6x_7+x_3+x_3x_8+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_6+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_6+x_2x_6x_8+x_2x_5x_7+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6x_7+x_1x_6x_7+x_1x_5x_8+x_1x_5x_6+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_6 = 1+x_7x_8+x_6+x_6x_8+x_6x_7+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_6+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_7+x_3x_6+x_3x_6x_7+x_3x_5x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_7+x_3x_4x_6x_8+x_3x_4x_5+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_5x_6+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1x_8+x_1x_6x_7+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_7 = 1+x_8+x_7+x_7x_8+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_6x_7x_8+x_3x_8+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6x_7+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_1x_6+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_8+x_1x_4x_8+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6x_7+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2x_8+x_1x_2x_6x_8+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_8 = 1+x_8+x_6+x_6x_8+x_5+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_5+x_4x_5x_7+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_5x_8+x_3x_4x_5x_6x_7+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6x_7+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_8+x_1x_7x_8+x_1x_6x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_8+x_1x_4+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_7+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

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

