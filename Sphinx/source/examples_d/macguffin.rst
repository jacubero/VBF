******************
MacGuffin analysis
******************

MacGuffincription
===========

MacGuffin is a block cipher uses a F-function which consists of the 8 S-boxes of the DES, but the two middle output bits of each S-box are neglected in order to obtain a 16-bit output.

MacGuffin has eight 6x2 S-boxes: S1, S2, S3, S4, S5, S6, S7, S8.

Summary
=======

+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S-box | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*    |
+=======+======+=======+======+=======+======+=========+================+============+=========+
| S1    | 18   | -     | 15   | 5     | 3    | 32      | 311296         | 0.19140625 | 0.53125 |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S2    | 18   | -     | 14   | 5     | 3    | 40      | 312448         | 0.19140625 | 0.5625  |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S3    | 18   | -     | 15   | 5     | 3    | 48      | 316288         | 0.19140625 | 0.53125 |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S4    | 16   | -     | 16   | 4     | 2    | 64      | 318208         | 0.25       | 0.5     |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S5    | 20   | -     | 16   | 5     | 3    | 32      | 300928         | 0.140625   | 0.5     |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S6    | 20   | -     | 18   | 5     | 3    | 48      | 307840         | 0.140625   | 0.4375  |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S7    | 18   | -     | 15   | 5     | 3    | 48      | 312832         | 0.19140625 | 0.53125 |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+
| S8    | 20   | -     | 16   | 5     | 3    | 40      | 302464         | 0.140625   | 0.5     |
+-------+------+-------+------+-------+------+---------+----------------+------------+---------+

S1
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_5+x_4x_5x_6+x_3+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_2+x_2x_3+x_2x_3x_4+x_1+x_1x_5+x_1x_4+x_1x_4x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_2 = x_5x_6+x_4+x_3x_5+x_2+x_2x_6+x_2x_5+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_2x_3x_5x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S1/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S2
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_5+x_4x_5+x_3+x_2x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5x_6+x_1x_2x_6+x_1x_2x_5x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6`

:math:`f_2 = 1+x_4+x_4x_5x_6+x_3+x_3x_6+x_3x_5+x_2x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4x_6+x_1x_2x_3x_6+x_1x_2x_3x_5x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S2/S2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S3
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_3x_4+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_4+x_4x_5+x_3x_5+x_2+x_1+x_1x_6+x_1x_5+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S3/S3.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S4
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_5x_6+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4x_6+x_1+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_2 = 1+x_5x_6+x_4+x_4x_6+x_4x_5+x_3+x_3x_4x_5x_6+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3+x_2x_3x_6+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S4/S4.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S5
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_5x_6+x_4x_6+x_4x_5+x_3x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_2x_3x_5x_6+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5x_6+x_1x_3x_4x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_4`

:math:`f_2 = x_5x_6+x_4x_5+x_3+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3x_5+x_1x_6+x_1x_4+x_1x_4x_5+x_1x_3+x_1x_3x_6+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S5/S5.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S6
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_5x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3x_6+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_3+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_2 = x_5+x_4x_5x_6+x_3+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2x_4+x_2x_4x_5x_6+x_2x_3+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S6/S6.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S7
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_3+x_3x_4x_5+x_3x_4x_5x_6+x_2x_4+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_5x_6+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_2 = x_6+x_5+x_4x_5+x_3+x_3x_4+x_3x_4x_5+x_2+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3+x_1+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_5x_6+x_1x_2x_4x_6+x_1x_2x_3x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S7/S7.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S8
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_3x_4+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_4+x_4x_5+x_3x_5+x_2+x_1+x_1x_6+x_1x_5+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4x_6`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/MacGuffin/S8/S8.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures
