*******
Crypton
*******

Description
===========

*CRYPTON* is a symmetric block cipher designed by Chae Hoon Lim of Future Systems Inc. In this section, we study both the AES proposal (v0.5) and the revised version (v1.0). In v0.5 the authors used two 8x8 S-boxes constructed from 4-bit permutations using a 3-round Feistel Cipher (`Tabular representation of S-boxes <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/lim98crypton.pdf>`_). In v1.0 the authors used four variants of one S-box, instead of independent four S-boxes to allow greater flexibility in memory requirements. The four 8x8 S-boxes are :math:`S_i (0 \leq i \leq 3)`, such that :math:`S_2 = {S_0}^{-1}` and :math:`S_3 = {S_1}^{-1}`

Summary
=======

+--------------------+------+------+-------+------+---------+----------------+----------+-----------+
| S-box              | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*     | *DP*      |
+====================+======+======+=======+======+=========+================+==========+===========+
| :math:`S_0` (v0.5) | 96   | 124  | 5     | 3    | 128     | 70844416       | 0.0625   | 0.03125   |
+--------------------+------+------+-------+------+---------+----------------+----------+-----------+
| :math:`S_1` (v0.5) | 96   | 124  | 5     | 3    | 144     | 70844416       | 0.0625   | 0.03125   |
+--------------------+------+------+-------+------+---------+----------------+----------+-----------+
| :math:`S_0` (v1.0) | 96   | 123  | 6     | 4    | 96      | 65898496       | 0.0625   | 0.0390625 |
+--------------------+------+------+-------+------+---------+----------------+----------+-----------+
| :math:`S_1` (v1.0) | 96   | 123  | 6     | 4    | 96      | 65898496       | 0.0625   | 0.0390625 |
+--------------------+------+------+-------+------+---------+----------------+----------+-----------+
| :math:`S_2` (v1.0) | 96   | 123  | 6     | 4    | 96      | 65898496       | 0.0625   | 0.0390625 |
+--------------------+------+------+-------+------+---------+----------------+----------+-----------+
| :math:`S_3` (v1.0) | 96   | 123  | 6     | 4    | 96      | 65898496       | 0.0625   | 0.0390625 |
+--------------------+------+------+-------+------+---------+----------------+----------+-----------+

:math:`S_0` (v0.5)
==================

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_8+x_7+x_7x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_4x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_6+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7+x_2x_8+x_2x_7+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_4x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_6+x_1x_8+x_1x_7+x_1x_6x_7x_8+x_1x_5x_7x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_3x_8+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_4+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8`

:math:`f_2 = 1+x_8+x_7x_8+x_6x_7+x_5x_6x_8+x_5x_6x_7+x_4+x_4x_8+x_4x_7+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_5+x_1x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_3+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_5+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_2+x_1x_2x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_3x_5`

:math:`f_3 = 1+x_8+x_7+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_6x_7+x_4+x_4x_8+x_4x_7+x_4x_6x_8+x_4x_6x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_5+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_7x_8+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4x_7+x_1x_2x_8+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7+x_1x_2x_4x_7+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_5`

:math:`f_4 = 1+x_7+x_7x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_7+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_7+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5x_8+x_2x_3x_5x_7+x_1x_7+x_1x_7x_8+x_1x_6x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_4+x_1x_4x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_6+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_5`

:math:`f_5 = x_7+x_6x_7+x_6x_7x_8+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6x_7x_8+x_4+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_3x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_7+x_2+x_2x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_5x_8+x_2x_3+x_2x_3x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_4+x_1x_8+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_7x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_5x_8+x_1x_3x_7+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_4+x_1x_2`

:math:`f_6 = x_7+x_7x_8+x_6+x_6x_7x_8+x_5+x_5x_7+x_5x_7x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_6x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_2x_7x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5+x_2x_3x_5x_7+x_1+x_1x_7x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7x_8+x_1x_5x_6x_8+x_1x_4x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_2x_8+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_3`

:math:`f_7 = x_8+x_6+x_6x_8+x_5+x_5x_7+x_5x_6+x_5x_6x_7x_8+x_4+x_4x_7+x_4x_7x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_3x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_2x_8+x_2x_7+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5+x_2x_3x_5x_7+x_1+x_1x_8+x_1x_7+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_7x_8+x_1x_4+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_5x_8+x_1x_2x_3`

:math:`f_8 = x_6+x_6x_8+x_5x_8+x_5x_6x_8+x_5x_6x_7+x_4+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_5+x_4x_5x_7+x_4x_5x_6x_7x_8+x_3+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_5x_8+x_2x_3x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_4+x_1x_7+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_4+x_1x_3+x_1x_2`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Crypton0-05.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 3            | 1                |
+--------------+------------------+
| 7            | 3                |
+--------------+------------------+
| 10           | 2                |
+--------------+------------------+
| 11           | 2                |
+--------------+------------------+
| 15           | 1                |
+--------------+------------------+
| 16           | 2                |
+--------------+------------------+
| 17           | 1                |
+--------------+------------------+
| 22           | 1                |
+--------------+------------------+
| 42           | 1                |
+--------------+------------------+
| 61           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,0,0,1,1,1,1)

It has 1 negated fixed point: (1,1,1,0,1,1,1,1)

:math:`S_1` (v0.5)
==================

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_8+x_7x_8+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_7x_8+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7+x_4x_6+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_2+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_4x_8+x_2x_4x_5+x_2x_3x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_1+x_1x_8+x_1x_7+x_1x_6+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_3+x_1x_3x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_2+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_5`

:math:`f_2 = 1+x_7+x_6x_7+x_6x_7x_8+x_5x_7x_8+x_5x_6x_8+x_4x_7x_8+x_4x_6+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_6+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_4x_6+x_1+x_1x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_2+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_6`

:math:`f_3 = 1+x_8+x_6+x_6x_7+x_5+x_5x_8+x_5x_6+x_5x_6x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6x_7+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_5x_6x_7+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_3+x_2x_3x_8+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6+x_2x_3x_4x_5+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_4x_8+x_1x_2+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_3x_8`

:math:`f_4 = x_8+x_7x_8+x_6+x_5+x_5x_8+x_5x_6x_7+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3+x_3x_8+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7x_8+x_2x_6x_8+x_2x_5+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6x_7+x_2x_3x_4x_7+x_2x_3x_4x_6+x_1x_7x_8+x_1x_6+x_1x_6x_7+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_7+x_1x_4x_6+x_1x_4x_5x_7+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_2x_7+x_1x_2x_6x_7+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4x_5+x_1x_2x_3`

:math:`f_5 = 1+x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7+x_5x_6x_7+x_5x_6x_7x_8+x_4x_7+x_4x_7x_8+x_4x_6x_8+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_2+x_2x_7+x_2x_7x_8+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_5x_7+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_8+x_1x_6+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_7+x_1x_3+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4+x_1x_2`

:math:`f_6 = x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_2+x_2x_6+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_6x_7+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_3x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_3`

:math:`f_7 = 1+x_8+x_7x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_8+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_2+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_1+x_1x_8+x_1x_6+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4+x_1x_3+x_1x_3x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_2+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5x_7+x_1x_2x_3`

:math:`f_8 = x_7+x_7x_8+x_6x_8+x_6x_7x_8+x_5+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_4+x_4x_7+x_4x_7x_8+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_5x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_2+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_5x_7+x_2x_3+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1+x_1x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_6+x_1x_4+x_1x_3+x_1x_2`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Crypton1-05.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 3            | 1                |
+--------------+------------------+
| 7            | 3                |
+--------------+------------------+
| 10           | 2                |
+--------------+------------------+
| 11           | 2                |
+--------------+------------------+
| 15           | 1                |
+--------------+------------------+
| 16           | 2                |
+--------------+------------------+
| 17           | 1                |
+--------------+------------------+
| 22           | 1                |
+--------------+------------------+
| 42           | 1                |
+--------------+------------------+
| 61           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,0,0,1,1,1,1)

It has 1 negated fixed point: (0,0,0,1,0,0,0,0)

:math:`S_0` (v1.0)
==================

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_5x_6x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_5x_8+x_2x_5x_6x_7+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_5x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6+x_1x_2x_8+x_1x_2x_7+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8`

:math:`f_2 = 1+x_7x_8+x_6x_8+x_5+x_4+x_4x_8+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_2+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8`

:math:`f_3 = 1+x_7+x_7x_8+x_6+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_3x_8+x_3x_7x_8+x_3x_6+x_3x_6x_7x_8+x_3x_5x_6x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7+x_1x_7x_8+x_1x_6x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7`

:math:`f_4 = x_7+x_7x_8+x_6+x_6x_8+x_5+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4+x_4x_7x_8+x_4x_6x_8+x_4x_5x_8+x_4x_5x_7x_8+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_7x_8+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_1x_8+x_1x_7x_8+x_1x_5x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_7+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6`

:math:`f_5 = x_8+x_7+x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_1x_7x_8+x_1x_6+x_1x_6x_7x_8+x_1x_5x_7+x_1x_5x_6+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8`

:math:`f_6 = x_8+x_7x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_5+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_3+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_4+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_5+x_2x_5x_6x_7+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7x_8+x_1x_6x_8+x_1x_5x_8+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7`

:math:`f_7 = 1+x_8+x_7+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_6x_8+x_5x_6x_7+x_4x_6x_7+x_4x_5+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_6x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2+x_2x_8+x_2x_7+x_2x_6+x_2x_6x_8+x_2x_5+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_7+x_1x_5+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_4x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6`

:math:`f_8 = 1+x_8+x_6x_7+x_6x_7x_8+x_5x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5+x_2x_5x_6+x_2x_5x_6x_7+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_5x_8+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Crypton0-1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.ac>`_

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
| 5            | 1                |
+--------------+------------------+
| 248          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,1,1,1,0,1,0,1)

It has no negated fixed points

:math:`S_1` (v1.0)
==================

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_7+x_7x_8+x_6+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_3x_8+x_3x_7x_8+x_3x_6+x_3x_6x_7x_8+x_3x_5x_6x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_7+x_1x_7x_8+x_1x_6x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7`

:math:`f_2 = x_7+x_7x_8+x_6+x_6x_8+x_5+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4+x_4x_7x_8+x_4x_6x_8+x_4x_5x_8+x_4x_5x_7x_8+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_7x_8+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_1x_8+x_1x_7x_8+x_1x_5x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_7+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6`

:math:`f_3 = x_8+x_7+x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_1x_7x_8+x_1x_6+x_1x_6x_7x_8+x_1x_5x_7+x_1x_5x_6+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8`

:math:`f_4 = x_8+x_7x_8+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_5+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_3+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_4+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_5+x_2x_5x_6x_7+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7x_8+x_1x_6x_8+x_1x_5x_8+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7`

:math:`f_5 = 1+x_8+x_7+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_6x_8+x_5x_6x_7+x_4x_6x_7+x_4x_5+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_6x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2+x_2x_8+x_2x_7+x_2x_6+x_2x_6x_8+x_2x_5+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_7+x_1x_5+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_4x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6`

:math:`f_6 = 1+x_8+x_6x_7+x_6x_7x_8+x_5x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5+x_2x_5x_6+x_2x_5x_6x_7+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_5x_8+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8`

:math:`f_7 = x_8+x_6+x_6x_8+x_6x_7+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_5x_6x_8+x_3+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_5x_8+x_2x_5x_6x_7+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_5x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6+x_1x_2x_8+x_1x_2x_7+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8`

:math:`f_8 = 1+x_7x_8+x_6x_8+x_5+x_4+x_4x_8+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_7+x_2+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Crypton1-1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 3            | 1                |
+--------------+------------------+
| 5            | 1                |
+--------------+------------------+
| 12           | 1                |
+--------------+------------------+
| 22           | 1                |
+--------------+------------------+
| 28           | 1                |
+--------------+------------------+
| 48           | 1                |
+--------------+------------------+
| 50           | 1                |
+--------------+------------------+
| 88           | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points

It has 1 negated fixed point: (1,0,1,0,1,1,1,0)

:math:`S_2` (v1.0)
==================

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_8+x_7+x_6x_8+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4x_7x_8+x_4x_6+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_6x_8+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_6+x_2x_5+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_4+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6`

:math:`f_2 = x_8+x_7+x_5+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_8+x_4x_7+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_4x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_2+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5x_7+x_1x_4x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7`

:math:`f_3 = 1+x_6x_7+x_5x_7+x_5x_6x_8+x_4+x_4x_8+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7x_8+x_3+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_5+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_7+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_2x_8+x_1x_2x_7x_8+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7`

:math:`f_4 = 1+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_7x_8+x_4x_7x_8+x_4x_6x_8+x_4x_5x_8+x_4x_5x_6x_8+x_3x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_3+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7+x_1x_6+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_7x_8+x_1x_5x_6x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_6x_8+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_6`

:math:`f_5 = x_7x_8+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_7+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_7+x_4x_5+x_4x_5x_6+x_3+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_7x_8+x_2x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_3x_7+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_1+x_1x_8+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_7+x_1x_5x_6x_7x_8+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_7x_8+x_1x_3+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_7+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_7`

:math:`f_6 = x_7+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_8+x_5x_7+x_5x_6x_7+x_5x_6x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_6+x_3+x_3x_7+x_3x_6+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_6x_8+x_3x_4+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_5+x_2x_5x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_1+x_1x_6x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_6`

:math:`f_7 = x_8+x_7+x_7x_8+x_6x_7+x_6x_7x_8+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_4+x_4x_7+x_4x_7x_8+x_4x_6x_7+x_4x_5+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3x_8+x_3x_7+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_5x_7x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_2+x_2x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7+x_2x_3+x_2x_3x_8+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_1+x_1x_7+x_1x_7x_8+x_1x_5x_8+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3x_7+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_4+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_7`

:math:`f_8 = 1+x_8+x_7+x_6+x_6x_8+x_5x_7+x_5x_6+x_5x_6x_7+x_4x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_3x_6x_8+x_3x_5x_8+x_3x_5x_7x_8+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4+x_2x_4x_5x_7+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_1+x_1x_7+x_1x_6+x_1x_6x_7x_8+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_8+x_1x_4+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_7+x_1x_2x_6x_8+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Crypton2-1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.ac>`_

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
| 5            | 1                |
+--------------+------------------+
| 248          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,1,1,1,0,1,0,1)

It has no negated fixed points

:math:`S_3` (v1.0)
==================

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_7x_8+x_6+x_6x_7+x_6x_7x_8+x_5+x_5x_7x_8+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_7+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_8+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_6x_7+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_1x_7+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7`

:math:`f_2 = x_8+x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5+x_5x_7x_8+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6x_7+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6x_8+x_3+x_3x_7x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5+x_2x_5x_7+x_2x_5x_6x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6x_8+x_1x_7x_8+x_1x_6+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_3x_6x_7+x_1x_3x_5x_7+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_7+x_1x_2x_8+x_1x_2x_7+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_4x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_8`

:math:`f_3 = 1+x_7+x_6x_7x_8+x_5x_6x_8+x_5x_6x_7x_8+x_4x_8+x_4x_6x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7x_8+x_3x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_6+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6x_7+x_1+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_4x_8+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_4x_8+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8`

:math:`f_4 = 1+x_7+x_6x_8+x_6x_7+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6x_8+x_4+x_4x_7+x_4x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_3+x_3x_8+x_3x_6x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_7x_8+x_3x_4x_6x_7+x_3x_4x_5x_8+x_3x_4x_5x_6x_7x_8+x_2x_7x_8+x_2x_6x_7+x_2x_5x_7+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_1x_8+x_1x_7+x_1x_6+x_1x_6x_8+x_1x_6x_7+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_5x_8+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3x_7+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7`

:math:`f_5 = x_7+x_7x_8+x_6x_8+x_6x_7+x_5x_6+x_4+x_4x_6x_8+x_4x_6x_7+x_4x_6x_7x_8+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3+x_3x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_6x_8+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_7+x_2+x_2x_8+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3+x_2x_3x_7x_8+x_2x_3x_6x_7x_8+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_6x_8+x_1+x_1x_7+x_1x_6+x_1x_5x_8+x_1x_5x_6+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_8+x_1x_3x_7+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6x_7`

:math:`f_6 = x_8+x_7+x_7x_8+x_6x_8+x_5+x_5x_7x_8+x_5x_6x_8+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_7+x_3x_7x_8+x_3x_6+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7x_8+x_2x_6x_8+x_2x_5x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_7x_8+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_7+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_1+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_4+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5x_7+x_1x_3x_5x_6x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_6x_7+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7`

:math:`f_7 = x_8+x_7+x_7x_8+x_6+x_6x_8+x_6x_7x_8+x_5+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_7+x_5x_6x_7x_8+x_4x_8+x_4x_5+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_4x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_1x_8+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_5+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_5+x_1x_4x_5x_7+x_1x_3x_8+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_8+x_1x_2x_5x_6+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6x_7`

:math:`f_8 = 1+x_8+x_7+x_6+x_5+x_5x_7+x_5x_7x_8+x_5x_6x_8+x_4+x_4x_7+x_4x_6+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3x_7+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_7+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_3x_6x_7+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_1x_8+x_1x_7x_8+x_1x_5x_8+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_5x_7+x_1x_3x_8+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_8+x_1x_2x_6x_7+x_1x_2x_5x_6x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Crypton3-1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 3            | 1                |
+--------------+------------------+
| 5            | 1                |
+--------------+------------------+
| 12           | 1                |
+--------------+------------------+
| 22           | 1                |
+--------------+------------------+
| 28           | 1                |
+--------------+------------------+
| 48           | 1                |
+--------------+------------------+
| 50           | 1                |
+--------------+------------------+
| 88           | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points

It has 1 negated fixed point: (0,1,0,1,0,0,0,1)
