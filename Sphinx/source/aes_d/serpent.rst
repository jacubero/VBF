*******
Serpent
*******

Description
===========

*Serpent* is a symmetric key block cipher that was a finalist in the Advanced Encryption Standard (AES) contest, where it was ranked second to Rijndael. Serpent was designed by Ross Anderson, Eli Biham, and Lars Knudsen. It has eight 4x4 S-boxes: S0, S1, S2, S3, S4, S5, S6, S7.

Summary
=======

+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S-box | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP* |
+=======+======+=======+======+=======+======+=========+================+============+======+
| S0    | 4    | 0     | 6    | 2     | 2    | 16      | 14848          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S1    | 4    | 0     | 6    | 2     | 2    | 16      | 14848          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S2    | 4    | 0     | 6    | 2     | 2    | 16      | 14848          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S3    | 4    | 0     | 6    | 2     | 2    | 16      | 14080          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S4    | 4    | 0     | 6    | 2     | 2    | 16      | 14080          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S5    | 4    | 0     | 6    | 2     | 2    | 16      | 14080          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S6    | 4    | 0     | 6    | 2     | 2    | 16      | 14848          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S7    | 4    | 0     | 6    | 2     | 2    | 16      | 14080          | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+

S0
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_4+x_3+x_2+x_1+x_1x_4`

:math:`f_2 = x_3+x_3x_4+x_2x_4+x_2x_3x_4+x_1+x_1x_3+x_1x_2x_3`

:math:`f_3 = 1+x_4+x_2x_4+x_2x_3+x_2x_3x_4+x_1x_3+x_1x_2x_4+x_1x_2x_3`

:math:`f_4 = 1+x_4+x_3x_4+x_2+x_2x_4+x_2x_3+x_2x_3x_4+x_1+x_1x_2x_4+x_1x_2x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent0.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S0/S0.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 2                |
+--------------+------------------+
| 5            | 1                |
+--------------+------------------+
| 7            | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points

S1
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_3+x_2x_4+x_1+x_1x_4+x_1x_3x_4+x_1x_2x_4+x_1x_2x_3`

:math:`f_2 = 1+x_3+x_3x_4+x_2+x_1`

:math:`f_3 = 1+x_4+x_3x_4+x_2+x_2x_4+x_1+x_1x_3+x_1x_3x_4+x_1x_2x_4+x_1x_2x_3`

:math:`f_4 = 1+x_4+x_3+x_2x_3+x_1x_4+x_1x_2+x_1x_2x_4+x_1x_2x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S1/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 4            | 1                |
+--------------+------------------+
| 10           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,1,0)

It has 1 negated fixed point: (0,0,0,0)

S2
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_4+x_3+x_2+x_2x_3x_4+x_1x_3`

:math:`f_2 = x_4+x_3+x_2x_3+x_1+x_1x_3+x_1x_3x_4+x_1x_2+x_1x_2x_4`

:math:`f_3 = x_4+x_3+x_2+x_2x_3+x_2x_3x_4+x_1x_4+x_1x_3x_4+x_1x_2+x_1x_2x_4`

:math:`f_4 = x_3+x_2+x_2x_4+x_1`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent2.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S2/S2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 3            | 1                |
+--------------+------------------+
| 13           | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points

It has 1 negated fixed point: (1,0,1,1)

S3
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_4+x_3+x_3x_4+x_2+x_2x_4+x_2x_3x_4+x_1+x_1x_2+x_1x_2x_4`

:math:`f_2 = x_4+x_3x_4+x_2+x_2x_3x_4+x_1+x_1x_3+x_1x_3x_4`

:math:`f_3 = x_4+x_3+x_2x_4+x_1x_4+x_1x_3x_4+x_1x_2+x_1x_2x_4`

:math:`f_4 = x_4+x_3+x_2x_3+x_1+x_1x_4+x_1x_2+x_1x_2x_4+x_1x_2x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent3.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S3/S3.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 4            | 1                |
+--------------+------------------+
| 5            | 2                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,0,0)

It has 1 negated fixed point: (1,0,1,1)

S4
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_4+x_3+x_2+x_2x_3+x_1x_4+x_1x_3+x_1x_3x_4`

:math:`f_2 = x_4+x_3x_4+x_2+x_2x_3+x_2x_3x_4+x_1x_3+x_1x_3x_4+x_1x_2+x_1x_2x_3`

:math:`f_3 = x_4+x_2x_4+x_2x_3+x_1+x_1x_3+x_1x_2+x_1x_2x_4+x_1x_2x_3`

:math:`f_4 = 1+x_3+x_3x_4+x_2+x_1+x_1x_4+x_1x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent4.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S4/S4.ac>`_

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
| 13           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,1,1)

It has no negated fixed points

S5
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_4+x_3+x_2+x_2x_3x_4+x_1+x_1x_4+x_1x_2x_4`

:math:`f_2 = 1+x_3+x_2x_4+x_1+x_1x_3x_4+x_1x_2+x_1x_2x_4+x_1x_2x_3`

:math:`f_3 = 1+x_4+x_3x_4+x_2+x_1+x_1x_3+x_1x_3x_4+x_1x_2`

:math:`f_4 = 1+x_3+x_3x_4+x_2+x_1+x_1x_4+x_1x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent5.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S5/S5.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 14           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,1,0)

It has 3 negated fixed points: (0,0,0,0), (0,1,0,1), (0,1,1,0)

S6
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_3+x_3x_4+x_2+x_2x_4+x_2x_3x_4+x_1+x_1x_2+x_1x_2x_3`

:math:`f_2 = 1+x_4+x_3x_4+x_2+x_2x_3+x_2x_3x_4+x_1x_3+x_1x_3x_4+x_1x_2+x_1x_2x_3`

:math:`f_3 = 1+x_3+x_2+x_1x_4`

:math:`f_4 = 1+x_4+x_3+x_2+x_2x_4+x_2x_3+x_2x_3x_4+x_1+x_1x_3x_4+x_1x_2x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent6.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S6/S6.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 4            | 1                |
+--------------+------------------+
| 10           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,1,1,0)

It has 1 negated fixed point: (1,1,1,1)

S7
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_4+x_3+x_2+x_2x_4+x_2x_3x_4+x_1x_4`

:math:`f_2 = x_4+x_3+x_2+x_2x_3x_4+x_1+x_1x_4+x_1x_3+x_1x_3x_4+x_1x_2x_3`

:math:`f_3 = x_3+x_3x_4+x_2+x_2x_4+x_2x_3+x_1+x_1x_4+x_1x_3x_4+x_1x_2x_4`

:math:`f_4 = 1+x_3x_4+x_2+x_1x_4+x_1x_3+x_1x_2+x_1x_2x_4+x_1x_2x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Serpent7.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Serpent/S7/S7.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 3            | 1                |
+--------------+------------------+
| 4            | 1                |
+--------------+------------------+
| 9            | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points

It has 1 negated fixed point: (1,0,0,0)

