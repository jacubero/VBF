*******
Crypton
*******

Description
===========

*CRYPTON* is a symmetric block cipher designed by Chae Hoon Lim of Future Systems Inc. In this section, we study both the AES proposal (v0.5) and the revised version (v1.0). In v0.5 the authors used two 8x8 S-boxes constructed from 4-bit permutations using a 3-round Feistel Cipher (`Tabular representation of S-boxes <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/lim98crypton.pdf>`_). In v1.0 the authors used four variants of one S-box, instead of independent four S-boxes to allow greater flexibility in memory requirements. The four 8x8 S-boxes are :math:`S_i (0 \leq i \leq 3)`, such that :math:`S2 = {S_0}^{-1}` and :math:`S3 = {S_1}^{-1}`

Summary
=======

+-----------+------+------+-------+------+---------+----------------+----------+-----------+
| S-box     | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*     | *DP*      |
+===========+======+======+=======+======+=========+================+==========+===========+
| S0 (v0.5) | 96   | 32   | 5     | 3    | 128     | 581632         | 0.0625   | 0.03125   |
+-----------+------+------+-------+------+---------+----------------+----------+-----------+
| S1 (v0.5) | 96   | 28   | 5     | 3    | 144     | 581632         | 0.0625   | 0.03125   |
+-----------+------+------+-------+------+---------+----------------+----------+-----------+
| S0 (v1.0) | 96   | 40   | 6     | 4    | 96      | 280192         | 0.0625   | 0.0390625 |
+-----------+------+------+-------+------+---------+----------------+----------+-----------+
| S1 (v1.0) | 96   | 40   | 6     | 4    | 96      | 280192         | 0.0625   | 0.0390625 |
+-----------+------+------+-------+------+---------+----------------+----------+-----------+
| S2 (v1.0) | 96   | 40   | 6     | 4    | 96      | 280192         | 0.0625   | 0.0390625 |
+-----------+------+------+-------+------+---------+----------------+----------+-----------+
| S3 (v1.0) | 96   | 40   | 6     | 4    | 96      | 280192         | 0.0625   | 0.0390625 |
+-----------+------+------+-------+------+---------+----------------+----------+-----------+

S0 (v0.5)
=========

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S0.pdf>`_

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

S1 (v0.5)
=========

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/0.5/S1.pdf>`_

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

S0 (v1.0)
=========

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S0.pdf>`_

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

S1 (v1.0)
=========

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S1.pdf>`_

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

S2 (v1.0)
=========

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S2.pdf>`_

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

S3 (v1.0)
=========

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Crypton/1.0/S3.pdf>`_

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
