***************
KASUMI analysis
***************

.. _secExamplesKASUMI

Introduction
============

KASUMI is a block cipher used in UMTS, GSM, and GPRS mobile communications systems. UMTS uses KASUMI in the confidentiality (f8) and integrity algorithms (f9) named UEA1 and UIA1, respectively. GSM employs KASUMI in the A5/3 key stream generator whereas GPRS does so in the GEA3 key stream generator.

This cipher has two S-boxes: a 7x7 S-box called S7 and a 9x9 S-box called S9.
 
Summary
=======

+-------+------+-----+-------+------+-------+------+---------+----------------+------------+------------+
| S-box | size |*NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*       |
+=======+======+=====+=======+======+=======+======+=========+================+============+============+
| S7    | 7x7  | 56  | 36    | 63   | 3     | 3    | 16      | 6258688        | 0.015625   | 0.015625   |
+-------+------+-----+-------+------+-------+------+---------+----------------+------------+------------+
| S9    | 9x9  | 240 | 0     | 255  | 2     | 2    | 512     | 402128896      | 0.00390625 | 0.00390625 |
+-------+------+-----+-------+------+-------+------+---------+----------------+------------+------------+

S7
===

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_5x_6+x_4x_6x_7+x_3x_7+x_2x_6+x_2x_4+x_1+x_1x_6x_7+x_1x_4x_5+x_1x_3x_6+x_1x_2x_7`

:math:`f_2 = 1+x_5+x_5x_7+x_4x_7+x_4x_5x_6+x_3x_5x_7+x_2x_7+x_2x_5+x_2x_3+x_1x_6+x_1x_5x_6+x_1x_4x_7+x_1x_3x_4+x_1x_2x_5`

:math:`f_3 = 1+x_5x_7+x_4+x_4x_6+x_3x_6+x_3x_6x_7+x_3x_4x_5+x_2x_7+x_2x_4x_6+x_2x_3x_7+x_1x_6+x_1x_4+x_1x_4x_7+x_1x_2`

:math:`f_4 = x_6+x_5x_6x_7+x_3x_6+x_3x_4+x_2x_7+x_2x_6x_7+x_2x_4x_5+x_2x_3x_6+x_1x_5+x_1x_4x_6`

:math:`f_5 = 1+x_7+x_4x_7+x_4x_5+x_3x_5x_6+x_3x_4x_7+x_2x_6+x_2x_5x_7+x_1x_7+x_1x_6x_7+x_1x_5+x_1x_3`

:math:`f_6 = 1+x_6x_7+x_3x_7+x_3x_5+x_2+x_2x_5x_6+x_2x_4x_7+x_1+x_1x_5x_7+x_1x_4+x_1x_2x_3`

:math:`f_7 = x_4x_6+x_3+x_3x_6x_7+x_2+x_2x_5+x_2x_3x_4+x_1+x_1x_7+x_1x_6+x_1x_4+x_1x_3x_5+x_1x_2x_6+x_1x_2x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.tt>`_

`Decimal Representation <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.dec>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/S7WS.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S7/S7.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 13           | 1                |
+--------------+------------------+
| 22           | 1                |
+--------------+------------------+
| 92           | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,1,1,0,1,1)

It has no negated fixed points

S9
===

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_8x_9+x_7+x_7x_8+x_5x_6+x_4x_8+x_4x_7+x_3x_8+x_3x_5+x_2+x_1x_7+x_1x_6`

:math:`f_2 = 1+x_8x_9+x_7x_9+x_7x_8+x_6+x_6x_9+x_6x_7+x_4x_5+x_3x_7+x_3x_6+x_2x_7+x_2x_4+x_1`

:math:`f_3 = x_9+x_6x_7+x_4x_8+x_4x_7+x_4x_5+x_3x_6+x_3x_5+x_3x_4+x_2+x_1x_8+x_1x_6+x_1x_4+x_1x_2`

:math:`f_4 = 1+x_7+x_5x_8+x_4x_5+x_3x_9+x_3x_8+x_2x_6+x_2x_5+x_2x_3+x_1x_4+x_1x_3+x_1x_2`

:math:`f_5 = x_8x_9+x_6x_8+x_5+x_4x_9+x_3x_6+x_2x_9+x_2x_3+x_1x_8+x_1x_7+x_1x_6`

:math:`f_6 = x_9+x_7x_8+x_6x_9+x_5x_7+x_4+x_3x_9+x_3x_8+x_2x_5+x_1x_9+x_1x_8+x_1x_2`

:math:`f_7 = 1+x_8+x_6x_9+x_5x_6+x_4x_9+x_3x_7+x_3x_6+x_3x_4+x_2x_5+x_2x_4+x_2x_3+x_1+x_1x_9`

:math:`f_8 = 1+x_8+x_8x_9+x_6x_7+x_5x_9+x_5x_8+x_4x_9+x_4x_6+x_3+x_2x_8+x_2x_7+x_1x_4`

:math:`f_9 = 1+x_7x_9+x_6+x_4x_7+x_3x_4+x_2x_9+x_2x_8+x_2x_7+x_1x_5+x_1x_4+x_1x_2`
 
`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.tt>`_

`Decimal Representation <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.dec>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.wal>`_

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/S9/S9.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 2            | 1                |
+--------------+------------------+
| 12           | 1                |
+--------------+------------------+
| 26           | 1                |
+--------------+------------------+
| 74           | 1                |
+--------------+------------------+
| 121          | 1                |
+--------------+------------------+
| 275          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,1,0,0,1,0,1,1,1)

It has 1 negated fixed points (1,0,0,0,1,1,0,0,0)

FI
==

`Algebraic degree from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/FI/FIdeg.pdf>`_

`Cycle structure from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/FI/cycle.pdf>`_

`Fixed and negated points from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/FI/points.pdf>`_

`Nonlinearities from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/KASUMI/FI/fi.pdf>`_

Graphical display of the distribution of the nonlinearities of FI:

.. image:: /images/hist-KASUMI.jpeg
   :width: 750 px
   :align: center

+---------------------------------------------+
| Descriptive Statistics of FI nonlinearities |
+====================+========================+
| Unique Values      | 478		      |
+--------------------+------------------------+
| Min                | 31534		      |
+--------------------+------------------------+
| Max 		     | 32049		      |
+--------------------+------------------------+
| Mean               | 31878.7986	      |
+--------------------+------------------------+
| Mean Deviation     | 132.083019	      |
+--------------------+------------------------+
| 1st Quartile       | 31720		      |
+--------------------+------------------------+
| Median             | 31963		      |
+--------------------+------------------------+
| 3rd Quartile       | 31989		      |
+--------------------+------------------------+
| Mode               | 31995		      |
+--------------------+------------------------+
| Range              | 515		      |
+--------------------+------------------------+ 
| Variance           | 20879.009	      |
+--------------------+------------------------+
| Standard Deviation | 144.4957               |
+--------------------+------------------------+
| Kkewness 	     | -0.7622                |
+--------------------+------------------------+
| Kurtosis           | -1.1463		      |
+--------------------+------------------------+
| P0.5 		     | 31572		      |
+--------------------+------------------------+
| P1 		     | 31582		      |
+--------------------+------------------------+
| P5 		     | 31627		      |
+--------------------+------------------------+
| P95		     | 32011 		      |
+--------------------+------------------------+
| P99		     | 32023		      |
+--------------------+------------------------+
| P99.5		     | 32027		      |
+--------------------+------------------------+

