*******
Serpent
*******

Serpentcription
===========

*Serpent* 

It has eight 4x4 S-boxes: S0, S1, S2, S3, S4, S5, S6, S7.

Summary
=======

+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S-box | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP* |
+=======+======+=======+======+=======+======+=========+================+============+======+
| S0    | 16   | 10    | 24   | 4     | 3    | 48      | 496768         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S1    | 14   | 8     | 24   | 4     | 2    | 48      | 494080         | 0.31640625 | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S2    | 16   | 10    | 24   | 4     | 3    | 56      | 502144         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S3    | 16   | 10    | 24   | 4     | 3    | 48      | 496768         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S4    | 16   | 8     | 24   | 3     | 2    | 64      | 547840         | 0.25       | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S5    | 12   | 10    | 24   | 4     | 2    | 40      | 506752         | 0.390625   | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S6    | 18   | 10    | 24   | 5     | 3    | 48      | 485632         | 0.19140625 | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+
| S7    | 14   | 10    | 24   | 5     | 3    | 48      | 518272         | 0.31640625 | 0.25 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------+

S0
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_3x_4+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_3+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1+x_1x_4x_5x_6+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_3 = 1+x_6+x_5+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_6+x_4+x_4x_5+x_3x_5+x_2+x_1+x_1x_6+x_1x_5+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4x_6`

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

There are no linear structures

S1
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_5+x_4x_5x_6+x_3+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_2+x_2x_3+x_2x_3x_4+x_1+x_1x_5+x_1x_4+x_1x_4x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_2 = 1+x_6+x_5x_6+x_4x_6+x_4x_5+x_3+x_3x_5+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5x_6+x_2+x_2x_6+x_2x_4+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_1x_6+x_1x_5+x_1x_4x_5+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_3 = 1+x_6+x_5+x_4+x_4x_5+x_4x_5x_6+x_3x_6+x_3x_5+x_3x_4+x_3x_4x_6+x_2x_6+x_2x_5+x_2x_4+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3+x_2x_3x_6+x_2x_3x_5+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_5+x_1x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_5x_6+x_4+x_3x_5+x_2+x_2x_6+x_2x_5+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_2x_3x_5x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

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

There are no linear structures

S2
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_6+x_5+x_4x_5+x_3+x_2x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5x_6+x_1x_2x_6+x_1x_2x_5x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6`

:math:`f_2 = 1+x_6+x_5+x_4+x_4x_5x_6+x_3x_6+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_6+x_2x_3+x_1+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6`

:math:`f_3 = 1+x_5+x_4+x_3x_5+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_2+x_2x_5x_6+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_4 = 1+x_4+x_4x_5x_6+x_3+x_3x_6+x_3x_5+x_2x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4x_6+x_1x_2x_3x_6+x_1x_2x_3x_5x_6`

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

There are no linear structures

S3
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_3x_4+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_3+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_1+x_1x_4x_5x_6+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_3 = 1+x_6+x_5+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_5+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_6+x_4+x_4x_5+x_3x_5+x_2+x_1+x_1x_6+x_1x_5+x_1x_4x_6+x_1x_4x_5+x_1x_3+x_1x_3x_5+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4x_6`

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

There are no linear structures

S4
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_5x_6+x_4+x_4x_6+x_4x_5x_6+x_3x_6+x_3x_5+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4x_6+x_1+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_3x_5x_6+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_2 = 1+x_5x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3+x_3x_6+x_3x_5+x_2+x_2x_6+x_2x_5x_6+x_2x_4x_5x_6+x_2x_3+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_3 = 1+x_6+x_5+x_5x_6+x_4x_6+x_4x_5+x_3+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_6+x_2x_5x_6+x_2x_4x_5x_6+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

:math:`f_4 = 1+x_5x_6+x_4+x_4x_6+x_4x_5+x_3+x_3x_4x_5x_6+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3+x_2x_3x_6+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

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

There are no linear structures

S5
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_5x_6+x_4x_6+x_4x_5+x_3x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_4+x_2x_4x_6+x_2x_4x_5+x_2x_3x_6+x_2x_3x_5x_6+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5x_6+x_1x_3x_4x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_6+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_4`

:math:`f_2 = x_6+x_5+x_4+x_3+x_3x_6+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5x_6+x_2x_4+x_2x_3x_6+x_2x_3x_4x_6+x_1+x_1x_5x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_4x_5+x_1x_2x_6+x_1x_2x_4x_6+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_3 = 1+x_5+x_5x_6+x_4+x_4x_6+x_4x_5+x_3x_6+x_3x_5+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_5+x_2x_5x_6+x_2x_4x_6+x_2x_4x_5+x_2x_3x_5+x_2x_3x_5x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_5x_6+x_1x_4+x_1x_4x_5+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_5+x_1x_2x_4+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_4 = x_5x_6+x_4x_5+x_3+x_3x_6+x_3x_5+x_3x_5x_6+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2x_6+x_2x_5+x_2x_5x_6+x_2x_4+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3x_5+x_1x_6+x_1x_4+x_1x_4x_5+x_1x_3+x_1x_3x_6+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_6+x_1x_2x_5+x_1x_2x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4`

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

There are no linear structures

S6
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_5+x_5x_6+x_4x_6+x_4x_5+x_4x_5x_6+x_3x_6+x_3x_5x_6+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2+x_2x_3+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_2 = 1+x_6+x_5+x_4+x_3+x_3x_5+x_3x_4x_5+x_2+x_2x_4+x_2x_4x_5x_6+x_1+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5x_6+x_1x_3x_4x_5+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_3 = x_6+x_4+x_4x_5x_6+x_3x_5+x_2x_5x_6+x_2x_4x_5+x_2x_3+x_2x_3x_5+x_1x_6+x_1x_5+x_1x_4x_5x_6+x_1x_3+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_6+x_1x_2+x_1x_2x_4x_5+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_5x_6`

:math:`f_4 = x_5+x_4x_5x_6+x_3+x_3x_4+x_3x_4x_6+x_3x_4x_5+x_3x_4x_5x_6+x_2x_4+x_2x_4x_5x_6+x_2x_3+x_2x_3x_4+x_2x_3x_4x_6+x_1+x_1x_6+x_1x_4x_5+x_1x_4x_5x_6+x_1x_3x_5+x_1x_3x_4+x_1x_3x_4x_6+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2x_6+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6`

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

There are no linear structures

S7
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_5+x_3+x_3x_4x_5+x_3x_4x_5x_6+x_2x_4+x_2x_3+x_2x_3x_6+x_2x_3x_4+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_4+x_1x_4x_5x_6+x_1x_3x_6+x_1x_3x_5+x_1x_3x_4x_5+x_1x_3x_4x_5x_6+x_1x_2+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_4+x_1x_2x_3x_4x_6`

:math:`f_2 = 1+x_5+x_4+x_3x_4x_5x_6+x_2+x_2x_6+x_2x_4+x_2x_4x_5x_6+x_2x_3+x_1+x_1x_6+x_1x_4+x_1x_3+x_1x_3x_4x_5+x_1x_2+x_1x_2x_4x_6+x_1x_2x_4x_5x_6+x_1x_2x_3x_6+x_1x_2x_3x_4`

:math:`f_3 = x_5+x_5x_6+x_4+x_4x_5+x_4x_5x_6+x_3+x_3x_6+x_3x_4x_6+x_3x_4x_5x_6+x_2+x_2x_4x_5+x_2x_4x_5x_6+x_2x_3x_4x_6+x_1x_6+x_1x_5+x_1x_5x_6+x_1x_3+x_1x_3x_5+x_1x_3x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_4+x_1x_2x_4x_5+x_1x_2x_3+x_1x_2x_3x_6+x_1x_2x_3x_5+x_1x_2x_3x_5x_6+x_1x_2x_3x_4x_6`

:math:`f_4 = x_6+x_5+x_4x_5+x_3+x_3x_4+x_3x_4x_5+x_2+x_2x_4x_6+x_2x_4x_5x_6+x_2x_3+x_1+x_1x_4x_6+x_1x_4x_5x_6+x_1x_3x_4x_6+x_1x_3x_4x_5x_6+x_1x_2x_5x_6+x_1x_2x_4x_6+x_1x_2x_3x_6`

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

There are no linear structures

