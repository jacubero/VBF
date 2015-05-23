************
DES analysis
************

It is a block cipher used for securing sensitive but unclassified material by U.S. Government agencies and became the de facto encryption standard for commercial transactions in the private sector up to December 6, 2001. It was superseded by AES.

Cryptographic Criteria
======================

+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S-box | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP* |
+=======+======+=======+======+=======+======+=========+================+============+======+
| S1    | 14   | 8     | 24   | 5     | 2    | 48      | 231936         | 0.31640625 | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S2    | 16   | 10    | 24   | 5     | 3    | 56      | 240000         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S3    | 16   | 10    | 24   | 5     | 3    | 48      | 234624         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S4    | 16   | 8     | 24   | 3     | 2    | 64      | 285696         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S5    | 12   | 10    | 24   | 4     | 2    | 40      | 244608         | 0.390625   | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S6    | 18   | 10    | 24   | 5     | 3    | 48      | 223488         | 0.19140625 | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S7    | 14   | 10    | 24   | 5     | 3    | 48      | 256128         | 0.31640625 | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S8    | 16   | 10    | 24   | 5     | 3    | 48      | 234624         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+

S1
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_5+x_4x_5x_6+x_3+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_2+x_2x_3+x_2x_3x_4+x_1+x_1x_5+x_1x_4+x_1x_4x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_2 = 1+x_6+x_5x_6+x_4x_6+x_4x_5+x_3+x_3x_5+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5x_6+x_2+x_2x_6+x_2x_4+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_1x_6+x_1x_5+x_1x_4x_5+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_3 = 1+x_6+x_5+x_4+x_4x_5+x_4x_5x_6+x_3x_6+x_3x_5+x_3x_4+x_3x_4x_6+x_2x_6+x_2x_5+x_2x_4+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3+x_2x_3x_6+x_2x_3x_5+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_5+x_1x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_5x_6+x_4+x_3x_5+x_2+x_2x_6+x_2x_5+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_2x_3x_5x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S1/S1.ls>`_

S2
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_5+x_4x_5+x_3+x_2x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5x_6+x_1x_2x_6+x_1x_2x_5x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6`

:math:`f_2 = 1+x_6+x_5+x_4+x_4x_5x_6+x_3x_6+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_6+x_2x_3+x_1+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6`

:math:`f_3 = 1+x_5+x_4+x_3x_5+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_2+x_2x_5x_6+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_4 = 1+x_4+x_4x_5x_6+x_3+x_3x_6+x_3x_5+x_2x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4x_6+x_1x_2x_3x_6+x_1x_2x_3x_5x_6`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S2/S2.ls>`_

S3
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_3x_4+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_3+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1+x_1x_4x_5x_6+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_3 = 1+x_6+x_5+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_6+x_4+x_4x_5+x_3x_5+x_2+x_1+x_1x_6+x_1x_5+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4x_6`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S3/S3.ls>`_

S4
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_5x_6+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4x_6+x_1+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_2 = 1+x_5x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_6+x_3x_5+x_2+x_2x_6+x_2x_5x_6+x_2x_4x_5x_6+x_2x_3+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_3 = 1+x_6+x_5+x_5x_6+x_4x_6+x_4x_5+x_3+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_6+x_2x_5x_6+x_2x_4x_5x_6+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_4 = 1+x_5x_6+x_4+x_4x_6+x_4x_5+x_3+x_3x_4x_5x_6+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3+x_2x_3x_6+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S4/S4.ls>`_

S5
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_5x_6+x_4x_6+x_4x_5+x_3x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_2x_3x_5x_6+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5x_6+x_1x_3x_4x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_5+x_4+x_3+x_3x_6+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5x_6+x_2x_4+x_2x_3x_6+x_2x_3x_4x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_4x_5+x_1x_2x_6+x_1x_2x_4x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_3 = 1+x_5+x_5x_6+x_4+x_4x_6+x_4x_5+x_3x_6+x_3x_5+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_5+x_2x_5x_6+x_2x_4x_6+x_2x_4x_5+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4+x_1x_4x_5+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_5x_6+x_4x_5+x_3+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3x_5+x_1x_6+x_1x_4+x_1x_4x_5+x_1x_3+x_1x_3x_6+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S5/S5.ls>`_

S6
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_5x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3x_6+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_3+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_2 = 1+x_6+x_5+x_4+x_3+x_3x_5+x_3x_4x_5+x_2+x_2x_4+x_2x_4x_5x_6+x_1+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5x_6+x_1x_3x_4x_5+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_3 = x_6+x_4+x_4x_5x_6+x_3x_5+x_2x_5x_6+x_2x_4x_5+x_2x_3+x_2x_3x_5+x_1x_6+x_1x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_5x_6`

:math:`f_4 = x_5+x_4x_5x_6+x_3+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2x_4+x_2x_4x_5x_6+x_2x_3+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S6/S6.ls>`_

S7
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_3+x_3x_4x_5+x_3x_4x_5x_6+x_2x_4+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_5x_6+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_2 = 1+x_5+x_4+x_3x_4x_5x_6+x_2+x_2x_6+x_2x_4+x_2x_4x_5x_6+x_2x_3+x_1+x_1x_6+x_1x_4+x_1x_3+x_1x_3x_4x_5+x_1x_2+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_4`

:math:`f_3 = x_5+x_5x_6+x_4+x_4x_5+x_4x_5x_6+x_3+x_3x_6+x_3x_4x_6+x_3x_4x_5x_6+x_2+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_3+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_4 = x_6+x_5+x_4x_5+x_3+x_3x_4+x_3x_4x_5+x_2+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3+x_1+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_5x_6+x_1x_2x_4x_6+x_1x_2x_3x_6`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S7/S7.ls>`_

S8
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_3x_4+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_3+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1+x_1x_4x_5x_6+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_3 = 1+x_6+x_5+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_6+x_4+x_4x_5+x_3x_5+x_2+x_1+x_1x_6+x_1x_5+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4x_6`

`Truth Table <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Linear structures <https://github.com/jacubero/VBF/blob/master/DES/S8/S8.ls>`_
