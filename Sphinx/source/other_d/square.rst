******
Square
******

Description
===========

*Square* is a block cipher invented by Joan Daemen and Vincent Rijmen. The design, published in 1997, is a forerunner to Rijndael, which has been adopted as the Advanced Encryption Standard. It has a 8x8 S-box called S.
 
Summary
=======

+-------+------+-----+------+-------+------+---------+----------------+------------+------------+
| S-box | size |*NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*       |
+=======+======+=====+======+=======+======+=========+================+============+============+
| S     | 8x8  | 112 | 126  | 7     | 4    | 32      | 133120         | 0.015625   | 0.015625   |
+-------+------+-----+------+-------+------+---------+----------------+------------+------------+

S
=

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_6x_8+x_6x_7+x_5+x_5x_7+x_5x_6+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_3+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4+x_3x_4x_7+x_3x_4x_6x_8+x_3x_4x_5x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7x_8+x_2x_6x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7x_8+x_1x_8+x_1x_7x_8+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_6`

:math:`f_2 = x_8+x_7+x_6+x_6x_7+x_5+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6x_7+x_4+x_4x_8+x_4x_7+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_5x_7x_8+x_3x_5x_6x_7x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_1x_7+x_1x_7x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_3 = 1+x_8+x_7+x_7x_8+x_6+x_6x_7x_8+x_5+x_5x_8+x_5x_6+x_5x_6x_7x_8+x_4+x_4x_7+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2+x_2x_8+x_2x_7+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_5x_7+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6x_7+x_2x_3x_4x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7x_8+x_1x_5x_6x_7+x_1x_4x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_4 = 1+x_8+x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_6x_7+x_4+x_4x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3x_8+x_3x_5x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7x_8+x_2+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_5 = x_8+x_7x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_4+x_4x_7+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_6+x_3x_6x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4+x_3x_4x_6x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7+x_2x_6x_7+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_8+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_6 = x_8+x_6x_7+x_5+x_5x_8+x_5x_7+x_5x_6x_7+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_8+x_3x_4x_5x_6x_7x_8+x_2x_7+x_2x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_6+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_4x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_6x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_7x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_2x_8+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_7 = x_8+x_7+x_6+x_6x_7+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_6+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5x_7+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_7+x_2x_5+x_2x_5x_7+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_1+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_8 = 1+x_8+x_7x_8+x_6+x_6x_7+x_6x_7x_8+x_4x_8+x_4x_7+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_4x_5x_6x_7+x_3+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_8+x_1x_3x_6x_7+x_1x_3x_5x_7+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.wal>`_

.. image:: /images/Square.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 6            | 1                |
+--------------+------------------+
| 8            | 1                |
+--------------+------------------+
| 20           | 1                |
+--------------+------------------+
| 23           | 1                |
+--------------+------------------+
| 197          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,0,0,1,1,0,0)

It has 1 negated fixed point: (1,0,0,1,0,1,1,1)
