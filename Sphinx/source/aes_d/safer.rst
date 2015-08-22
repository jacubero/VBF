******
Safer+
******

Description
===========

*Safer+* (Massey et al., 1998) was submitted as a candidate for the Advanced Encryption Standard and has a block size of 128 bits. The cipher was not selected as a finalist. Bluetooth uses custom algorithms based on SAFER+ for key derivation (called E21 and E22) and authentication as message authentication codes (called E1). Encryption in Bluetooth does not use SAFER+. It has one 8x8 S-box called expf and other 9x8 S-box called logf.

Summary
=======

+-------+------+------+------+-------+------+---------+----------------+--------------+------+
| S-box | size | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*         | *DP* |
+=======+======+======+======+=======+======+=========+================+==============+======+
| expf  | 8x8  | 82   | 64   | 6     | 3    | 256     | 82051072       | 0.1291503906 | 0.5  |
+-------+------+------+------+-------+------+---------+----------------+--------------+------+
| logf  | 9x8  | 164  | 128  | 6     | 3    | 512     | 656408576      | 0.1291503906 | 0.5  |
+-------+------+------+------+-------+------+---------+----------------+--------------+------+

expf
====

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_7+x_6+x_6x_8+x_5x_6x_7+x_4x_7+x_4x_7x_8+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_2+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6x_8+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8`

:math:`f_2 = x_7+x_7x_8+x_6x_8+x_6x_7+x_5+x_5x_8+x_5x_6+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_6+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5+x_4x_5x_7x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2+x_2x_8+x_2x_7+x_2x_6+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_5x_6+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_3 = x_8+x_7+x_6+x_5+x_5x_6+x_5x_6x_8+x_5x_6x_7x_8+x_4x_7+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_7+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_4+x_2x_4x_7x_8+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_4 = x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5+x_5x_8+x_5x_7+x_5x_6+x_5x_6x_7x_8+x_4x_6+x_4x_6x_8+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_5+x_3x_5x_6+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_8+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7+x_2x_5x_7+x_2x_5x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_4x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_5 = x_8+x_7x_8+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_7+x_5x_6+x_5x_6x_8+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_5+x_1x_4x_5x_7x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_7x_8`

:math:`f_6 = x_8+x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7x_8+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7+x_2x_6x_8+x_2x_5x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_1x_7+x_1x_6+x_1x_6x_8+x_1x_5x_8+x_1x_5x_6+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4`

:math:`f_7 = x_7+x_6+x_6x_8+x_5x_8+x_5x_6+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6x_7+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_7+x_3x_6+x_3x_6x_7+x_3x_5+x_3x_5x_6+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_6+x_2x_5x_6x_8+x_2x_4x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_6x_8+x_2x_3x_4`

:math:`f_8 = 1+x_7+x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3+x_3x_8+x_3x_7+x_3x_5x_8+x_3x_4x_7+x_3x_4x_6x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_7+x_2x_5x_7+x_2x_5x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6x_8+x_1`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/expf.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 3                |
+--------------+------------------+
| 2            | 1                |
+--------------+------------------+
| 41           | 1                |
+--------------+------------------+
| 42           | 1                |
+--------------+------------------+
| 168          | 1                |
+--------------+------------------+

There are no linear structures

It has 3 fixed points: (0,0,0,1,1,0,1,1), (0,1,0,1,0,1,1,1), (0,1,0,1,1,1,0,0)

It has 4 negated fixed points: (0,0,0,1,0,1,0,0), (0,0,1,0,1,1,0,0), (0,1,0,1,1,1,1,1), (1,0,1,0,1,1,1,1)

logf
====

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_9+x_7+x_7x_8+x_7x_8x_9+x_6+x_6x_9+x_6x_8+x_6x_7+x_6x_7x_9+x_6x_7x_8+x_5x_7x_9+x_5x_7x_8x_9+x_5x_6x_9+x_5x_6x_8+x_5x_6x_8x_9+x_5x_6x_7x_9+x_5x_6x_7x_8+x_5x_6x_7x_8x_9+x_4+x_4x_8+x_4x_8x_9+x_4x_7+x_4x_6x_7x_9+x_4x_6x_7x_8+x_4x_6x_7x_8x_9+x_4x_5+x_4x_5x_9+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_9+x_4x_5x_7x_8x_9+x_4x_5x_6x_8+x_4x_5x_6x_8x_9+x_4x_5x_6x_7x_8+x_4x_5x_6x_7x_8x_9+x_3+x_3x_8+x_3x_8x_9+x_3x_7x_8x_9+x_3x_6+x_3x_6x_9+x_3x_6x_8x_9+x_3x_6x_7+x_3x_6x_7x_8+x_3x_6x_7x_8x_9+x_3x_5+x_3x_5x_8x_9+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7x_8x_9+x_3x_4+x_3x_4x_8+x_3x_4x_8x_9+x_3x_4x_7x_8+x_3x_4x_7x_8x_9+x_3x_4x_6+x_3x_4x_6x_9+x_3x_4x_6x_8x_9+x_3x_4x_6x_7+x_3x_4x_6x_7x_9+x_3x_4x_6x_7x_8x_9+x_3x_4x_5+x_3x_4x_5x_9+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_9+x_3x_4x_5x_6x_8x_9+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_8x_9+x_2x_7x_9+x_2x_6x_9+x_2x_6x_8+x_2x_6x_8x_9+x_2x_6x_7x_9+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_5x_7x_8x_9+x_2x_5x_6x_8+x_2x_4x_8+x_2x_4x_7x_9+x_2x_4x_6+x_2x_4x_6x_9+x_2x_4x_6x_7x_9+x_2x_4x_5x_9+x_2x_4x_5x_8+x_2x_4x_5x_7x_9+x_2x_4x_5x_7x_8+x_2x_4x_5x_7x_8x_9+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_8x_9+x_2x_3x_7+x_2x_3x_7x_9+x_2x_3x_7x_8+x_2x_3x_7x_8x_9+x_2x_3x_6+x_2x_3x_6x_8x_9+x_2x_3x_6x_7x_8x_9+x_2x_3x_5+x_2x_3x_5x_9+x_2x_3x_5x_8x_9+x_2x_3x_5x_7+x_2x_3x_5x_7x_9+x_2x_3x_5x_7x_8+x_2x_3x_5x_7x_8x_9+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_7x_8x_9+x_2x_3x_4x_6+x_2x_3x_4x_6x_9+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_9+x_2x_3x_4x_6x_7x_8x_9+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8`

:math:`f_2 = x_7+x_7x_8+x_7x_8x_9+x_6x_8x_9+x_6x_7x_9+x_5+x_5x_9+x_5x_8x_9+x_5x_7+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_5x_6x_7x_8x_9+x_4+x_4x_7+x_4x_7x_9+x_4x_7x_8x_9+x_4x_6x_9+x_4x_6x_8+x_4x_6x_8x_9+x_4x_6x_7x_8+x_4x_6x_7x_8x_9+x_4x_5+x_4x_5x_9+x_4x_5x_8+x_4x_5x_7x_9+x_4x_5x_7x_8+x_4x_5x_7x_8x_9+x_4x_5x_6x_8x_9+x_4x_5x_6x_7+x_4x_5x_6x_7x_8x_9+x_3x_7+x_3x_7x_8+x_3x_7x_8x_9+x_3x_6x_8+x_3x_6x_8x_9+x_3x_6x_7+x_3x_6x_7x_9+x_3x_6x_7x_8+x_3x_5+x_3x_5x_9+x_3x_5x_8+x_3x_5x_7x_9+x_3x_5x_7x_8+x_3x_5x_6x_9+x_3x_5x_6x_7+x_3x_5x_6x_7x_9+x_3x_5x_6x_7x_8x_9+x_3x_4x_8+x_3x_4x_8x_9+x_3x_4x_7x_9+x_3x_4x_7x_8x_9+x_3x_4x_6x_9+x_3x_4x_6x_8+x_3x_4x_6x_8x_9+x_3x_4x_6x_7x_9+x_3x_4x_6x_7x_8+x_3x_4x_6x_7x_8x_9+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_7x_8x_9+x_3x_4x_5x_6+x_3x_4x_5x_6x_9+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_9+x_3x_4x_5x_6x_7x_8x_9+x_2+x_2x_8x_9+x_2x_7+x_2x_6x_9+x_2x_6x_8+x_2x_6x_7x_9+x_2x_6x_7x_8x_9+x_2x_5+x_2x_5x_8+x_2x_5x_8x_9+x_2x_5x_6+x_2x_5x_6x_8x_9+x_2x_5x_6x_7+x_2x_5x_6x_7x_8x_9+x_2x_4+x_2x_4x_8x_9+x_2x_4x_7x_8+x_2x_4x_7x_8x_9+x_2x_4x_6+x_2x_4x_6x_9+x_2x_4x_6x_8+x_2x_4x_6x_8x_9+x_2x_4x_6x_7+x_2x_4x_6x_7x_9+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_9+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_8x_9+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_9+x_2x_4x_5x_6x_7x_8+x_2x_4x_5x_6x_7x_8x_9+x_2x_3+x_2x_3x_8x_9+x_2x_3x_7x_8+x_2x_3x_7x_8x_9+x_2x_3x_6+x_2x_3x_6x_8x_9+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8x_9+x_2x_3x_5x_6x_9+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7x_9+x_2x_3x_5x_6x_7x_8+x_2x_3x_5x_6x_7x_8x_9+x_2x_3x_4+x_2x_3x_4x_7x_8x_9+x_2x_3x_4x_6x_9+x_2x_3x_4x_6x_7x_9+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_6x_7x_8x_9+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8`

:math:`f_3 = x_8+x_8x_9+x_7+x_7x_8+x_7x_8x_9+x_6x_8+x_6x_7x_8+x_5x_9+x_5x_8+x_5x_8x_9+x_5x_7+x_5x_7x_9+x_5x_7x_8+x_5x_6x_9+x_5x_6x_8x_9+x_5x_6x_7x_9+x_5x_6x_7x_8+x_5x_6x_7x_8x_9+x_4+x_4x_8+x_4x_8x_9+x_4x_7+x_4x_7x_8x_9+x_4x_6x_8+x_4x_6x_8x_9+x_4x_6x_7+x_4x_6x_7x_8+x_4x_6x_7x_8x_9+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_9+x_4x_5x_6x_9+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8x_9+x_3x_6x_9+x_3x_6x_8x_9+x_3x_6x_7x_8+x_3x_5x_9+x_3x_5x_8+x_3x_5x_8x_9+x_3x_5x_7x_9+x_3x_5x_7x_8+x_3x_5x_6x_9+x_3x_5x_6x_8x_9+x_3x_5x_6x_7+x_3x_5x_6x_7x_8x_9+x_3x_4+x_3x_4x_9+x_3x_4x_7x_9+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_9+x_3x_4x_6x_7x_9+x_3x_4x_5+x_3x_4x_5x_8x_9+x_3x_4x_5x_6x_8x_9+x_3x_4x_5x_6x_7x_9+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7+x_2x_7x_9+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_9+x_2x_5x_6x_8+x_2x_5x_6x_8x_9+x_2x_4+x_2x_4x_9+x_2x_4x_8+x_2x_4x_8x_9+x_2x_4x_7+x_2x_4x_7x_8x_9+x_2x_4x_5x_8+x_2x_4x_5x_8x_9+x_2x_4x_5x_7+x_2x_4x_5x_7x_8x_9+x_2x_4x_5x_6x_7x_9+x_2x_3x_8+x_2x_3x_8x_9+x_2x_3x_7+x_2x_3x_7x_9+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_8x_9+x_2x_3x_6x_7+x_2x_3x_6x_7x_8x_9+x_2x_3x_5x_9+x_2x_3x_5x_8+x_2x_3x_5x_7x_9+x_2x_3x_5x_7x_8+x_2x_3x_5x_7x_8x_9+x_2x_3x_5x_6+x_2x_3x_5x_6x_9+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8x_9+x_2x_3x_4+x_2x_3x_4x_7x_9+x_2x_3x_4x_7x_8x_9+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_8x_9+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_9+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_9+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_8x_9+x_2x_3x_4x_5x_6x_7`

:math:`f_4 = x_8+x_8x_9+x_7x_8x_9+x_6+x_6x_8+x_6x_7+x_6x_7x_9+x_5x_9+x_5x_8+x_5x_7x_9+x_5x_7x_8+x_5x_6x_9+x_5x_6x_7+x_5x_6x_7x_9+x_5x_6x_7x_8+x_5x_6x_7x_8x_9+x_4+x_4x_9+x_4x_7x_9+x_4x_7x_8+x_4x_7x_8x_9+x_4x_6+x_4x_6x_8x_9+x_4x_6x_7x_9+x_4x_6x_7x_8+x_4x_5+x_4x_5x_9+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_7x_8x_9+x_4x_5x_6x_8x_9+x_4x_5x_6x_7x_9+x_3x_7+x_3x_7x_9+x_3x_7x_8+x_3x_7x_8x_9+x_3x_6+x_3x_6x_8x_9+x_3x_6x_7x_8x_9+x_3x_5x_9+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8x_9+x_3x_5x_6+x_3x_5x_6x_9+x_3x_5x_6x_7x_9+x_3x_5x_6x_7x_8+x_3x_4x_9+x_3x_4x_7+x_3x_4x_7x_9+x_3x_4x_7x_8+x_3x_4x_7x_8x_9+x_3x_4x_6x_9+x_3x_4x_6x_8+x_3x_4x_6x_7x_8x_9+x_3x_4x_5+x_3x_4x_5x_9+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8x_9+x_3x_4x_5x_6+x_3x_4x_5x_6x_9+x_3x_4x_5x_6x_8x_9+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_9+x_3x_4x_5x_6x_7x_8+x_3x_4x_5x_6x_7x_8x_9+x_2+x_2x_8+x_2x_8x_9+x_2x_7+x_2x_7x_8+x_2x_6x_7x_9+x_2x_5x_9+x_2x_5x_8+x_2x_5x_8x_9+x_2x_5x_7+x_2x_5x_7x_9+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_9+x_2x_5x_6x_7x_8x_9+x_2x_4+x_2x_4x_9+x_2x_4x_7x_8+x_2x_4x_7x_8x_9+x_2x_4x_6x_8+x_2x_4x_6x_8x_9+x_2x_4x_6x_7+x_2x_4x_5x_9+x_2x_4x_5x_7+x_2x_4x_5x_7x_9+x_2x_4x_5x_7x_8+x_2x_4x_5x_7x_8x_9+x_2x_4x_5x_6+x_2x_4x_5x_6x_9+x_2x_4x_5x_6x_7x_9+x_2x_4x_5x_6x_7x_8+x_2x_4x_5x_6x_7x_8x_9+x_2x_3+x_2x_3x_8x_9+x_2x_3x_7+x_2x_3x_7x_9+x_2x_3x_7x_8+x_2x_3x_6x_8x_9+x_2x_3x_6x_7x_9+x_2x_3x_6x_7x_8x_9+x_2x_3x_5+x_2x_3x_5x_8x_9+x_2x_3x_5x_7x_9+x_2x_3x_5x_7x_8+x_2x_3x_5x_7x_8x_9+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_8x_9+x_2x_3x_5x_6x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_8x_9+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_8x_9+x_2x_3x_4x_5x_7`

:math:`f_5 = x_8x_9+x_7x_9+x_7x_8+x_6x_8+x_6x_7+x_6x_7x_9+x_6x_7x_8x_9+x_5x_9+x_5x_7+x_5x_7x_9+x_5x_7x_8x_9+x_5x_6+x_5x_6x_9+x_5x_6x_8+x_5x_6x_8x_9+x_5x_6x_7x_9+x_5x_6x_7x_8+x_5x_6x_7x_8x_9+x_4x_9+x_4x_8+x_4x_7x_8x_9+x_4x_6+x_4x_6x_9+x_4x_6x_8+x_4x_6x_8x_9+x_4x_6x_7x_8+x_4x_6x_7x_8x_9+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_9+x_4x_5x_7x_8+x_4x_5x_7x_8x_9+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_9+x_4x_5x_6x_7x_8+x_3x_9+x_3x_8+x_3x_8x_9+x_3x_7+x_3x_7x_9+x_3x_7x_8x_9+x_3x_6x_8x_9+x_3x_6x_7x_8+x_3x_6x_7x_8x_9+x_3x_5+x_3x_5x_9+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_9+x_3x_5x_6x_7x_8+x_3x_5x_6x_7x_8x_9+x_3x_4+x_3x_4x_8x_9+x_3x_4x_7+x_3x_4x_7x_9+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_9+x_3x_4x_5x_7+x_3x_4x_5x_7x_8x_9+x_3x_4x_5x_6+x_3x_4x_5x_6x_9+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_8x_9+x_3x_4x_5x_6x_7+x_2x_8+x_2x_8x_9+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7x_8+x_2x_6x_7x_8x_9+x_2x_5x_7x_8+x_2x_5x_6x_9+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_5x_6x_7x_8x_9+x_2x_4+x_2x_4x_9+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_9+x_2x_4x_7x_8x_9+x_2x_4x_6+x_2x_4x_6x_9+x_2x_4x_6x_8x_9+x_2x_4x_6x_7+x_2x_4x_6x_7x_9+x_2x_4x_5x_8x_9+x_2x_4x_5x_7x_9+x_2x_4x_5x_7x_8x_9+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_8x_9+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_9+x_2x_4x_5x_6x_7x_8+x_2x_4x_5x_6x_7x_8x_9+x_2x_3+x_2x_3x_8x_9+x_2x_3x_7x_9+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_9+x_2x_3x_6x_8+x_2x_3x_6x_7x_9+x_2x_3x_6x_7x_8x_9+x_2x_3x_5+x_2x_3x_5x_9+x_2x_3x_5x_8x_9+x_2x_3x_5x_7+x_2x_3x_5x_7x_8x_9+x_2x_3x_5x_6+x_2x_3x_5x_6x_9+x_2x_3x_5x_6x_8x_9+x_2x_3x_5x_6x_7+x_2x_3x_4x_8+x_2x_3x_4x_8x_9+x_2x_3x_4x_7x_8x_9+x_2x_3x_4x_6+x_2x_3x_4x_6x_7x_9+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_6x_7x_8x_9+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_8x_9+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_9+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_7x_8x_9+x_2x_3x_4x_5x_6`

:math:`f_6 = x_7x_9+x_6x_8+x_6x_7x_9+x_6x_7x_8x_9+x_5x_8x_9+x_5x_7+x_5x_7x_9+x_5x_7x_8x_9+x_5x_6x_9+x_5x_6x_8+x_5x_6x_7x_8+x_5x_6x_7x_8x_9+x_4x_9+x_4x_7x_8+x_4x_7x_8x_9+x_4x_6+x_4x_6x_8+x_4x_6x_8x_9+x_4x_6x_7x_8+x_4x_5x_9+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8x_9+x_4x_5x_6x_9+x_4x_5x_6x_7+x_4x_5x_6x_7x_9+x_4x_5x_6x_7x_8+x_3x_8+x_3x_6x_9+x_3x_6x_7+x_3x_6x_7x_8+x_3x_6x_7x_8x_9+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_9+x_3x_4x_6+x_3x_4x_6x_9+x_3x_4x_6x_8x_9+x_3x_4x_6x_7x_8+x_3x_4x_5x_9+x_3x_4x_5x_8+x_3x_4x_5x_8x_9+x_3x_4x_5x_7x_8x_9+x_3x_4x_5x_6+x_3x_4x_5x_6x_9+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_8x_9+x_3x_4x_5x_6x_7+x_2x_8x_9+x_2x_7+x_2x_7x_8x_9+x_2x_6x_8x_9+x_2x_6x_7x_8x_9+x_2x_5x_9+x_2x_5x_8+x_2x_5x_7x_9+x_2x_5x_7x_8x_9+x_2x_5x_6+x_2x_5x_6x_9+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_5x_6x_7x_8x_9+x_2x_4+x_2x_4x_7x_9+x_2x_4x_7x_8x_9+x_2x_4x_6+x_2x_4x_6x_9+x_2x_4x_6x_8x_9+x_2x_4x_6x_7+x_2x_4x_6x_7x_9+x_2x_4x_5x_9+x_2x_4x_5x_8x_9+x_2x_4x_5x_7x_9+x_2x_4x_5x_7x_8x_9+x_2x_4x_5x_6+x_2x_4x_5x_6x_9+x_2x_3x_7+x_2x_3x_7x_9+x_2x_3x_6+x_2x_3x_6x_9+x_2x_3x_6x_8+x_2x_3x_6x_7x_9+x_2x_3x_6x_7x_8x_9+x_2x_3x_5+x_2x_3x_5x_9+x_2x_3x_5x_8+x_2x_3x_5x_7x_9+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_9+x_2x_3x_5x_6x_8x_9+x_2x_3x_5x_6x_7+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_9+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7x_9+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_6x_7x_8x_9+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_8x_9+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_9+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_7x_8x_9+x_2x_3x_4x_5x_6`

:math:`f_7 = x_7x_9+x_7x_8x_9+x_6x_9+x_6x_8+x_6x_7x_9+x_6x_7x_8+x_5x_8+x_5x_8x_9+x_5x_7+x_5x_7x_9+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_9+x_4x_7+x_4x_7x_9+x_4x_7x_8+x_4x_6+x_4x_6x_9+x_4x_6x_8+x_4x_6x_7x_9+x_4x_6x_7x_8x_9+x_4x_5x_9+x_4x_5x_8x_9+x_4x_5x_7+x_4x_5x_7x_9+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_8x_9+x_4x_5x_6x_7x_9+x_3x_7x_9+x_3x_6+x_3x_6x_8+x_3x_6x_8x_9+x_3x_6x_7+x_3x_5+x_3x_5x_9+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6x_9+x_3x_5x_6x_8+x_3x_5x_6x_7x_9+x_3x_5x_6x_7x_8+x_3x_4x_9+x_3x_4x_8+x_3x_4x_8x_9+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8x_9+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_9+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_8x_9+x_2x_6x_9+x_2x_6x_8+x_2x_6x_7x_9+x_2x_6x_7x_8x_9+x_2x_5+x_2x_5x_9+x_2x_5x_7+x_2x_5x_7x_9+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8x_9+x_2x_5x_6x_7x_9+x_2x_5x_6x_7x_8x_9+x_2x_4+x_2x_4x_9+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_9+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_8x_9+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_8x_9+x_2x_3x_7+x_2x_3x_7x_9+x_2x_3x_7x_8+x_2x_3x_6x_9+x_2x_3x_6x_7+x_2x_3x_6x_7x_9+x_2x_3x_6x_7x_8x_9+x_2x_3x_5+x_2x_3x_5x_9+x_2x_3x_5x_7+x_2x_3x_5x_6x_9+x_2x_3x_5x_6x_7x_9+x_2x_3x_5x_6x_7x_8+x_2x_3x_5x_6x_7x_8x_9+x_2x_3x_4+x_2x_3x_4x_7x_9+x_2x_3x_4x_7x_8x_9+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_8x_9+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_8x_9+x_2x_3x_4x_5x_7`

:math:`f_8 = x_8x_9+x_7x_9+x_7x_8+x_6x_8+x_6x_7+x_6x_7x_8x_9+x_5x_7+x_5x_6+x_5x_6x_9+x_5x_6x_8x_9+x_5x_6x_7x_9+x_5x_6x_7x_8+x_4x_9+x_4x_7x_9+x_4x_6+x_4x_6x_9+x_4x_6x_7x_9+x_4x_5+x_4x_5x_8+x_4x_5x_8x_9+x_4x_5x_7x_8+x_4x_5x_7x_8x_9+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_9+x_3x_9+x_3x_8+x_3x_8x_9+x_3x_7x_9+x_3x_6x_9+x_3x_6x_8+x_3x_5+x_3x_5x_8+x_3x_5x_8x_9+x_3x_5x_6x_9+x_3x_5x_6x_8+x_3x_5x_6x_7x_8x_9+x_3x_4+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_7x_8x_9+x_3x_4x_6x_9+x_3x_4x_6x_8x_9+x_3x_4x_6x_7+x_3x_4x_6x_7x_9+x_3x_4x_6x_7x_8+x_3x_4x_5x_9+x_3x_4x_5x_7+x_3x_4x_5x_7x_8x_9+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2x_8+x_2x_8x_9+x_2x_7+x_2x_7x_8+x_2x_7x_8x_9+x_2x_6x_8+x_2x_6x_8x_9+x_2x_6x_7x_9+x_2x_5x_9+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8x_9+x_2x_5x_6x_9+x_2x_5x_6x_8x_9+x_2x_5x_6x_7x_9+x_2x_5x_6x_7x_8x_9+x_2x_4+x_2x_4x_9+x_2x_4x_8x_9+x_2x_4x_7+x_2x_4x_7x_9+x_2x_4x_7x_8+x_2x_4x_7x_8x_9+x_2x_4x_6x_9+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6x_9+x_2x_4x_5x_6x_7x_9+x_2x_4x_5x_6x_7x_8+x_2x_4x_5x_6x_7x_8x_9+x_2x_3+x_2x_3x_8x_9+x_2x_3x_7x_9+x_2x_3x_7x_8x_9+x_2x_3x_6+x_2x_3x_6x_9+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_9+x_2x_3x_5x_8+x_2x_3x_5x_8x_9+x_2x_3x_5x_7x_9+x_2x_3x_5x_7x_8+x_2x_3x_5x_7x_8x_9+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_8x_9+x_2x_3x_5x_6x_7+x_2x_3x_4x_8+x_2x_3x_4x_7x_9+x_2x_3x_4x_7x_8x_9+x_2x_3x_4x_6+x_2x_3x_4x_6x_9+x_2x_3x_4x_6x_7x_9+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_6x_7x_8x_9+x_2x_3x_4x_5+x_2x_3x_4x_5x_8x_9+x_2x_3x_4x_5x_7`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.wal>`_

Walsh Spectrum representation (first 256x256 values except first row and column):

.. image:: /images/logf.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There is 1 linear structure: (1,0,0,0,0,0,0,0,0)
