***************
KASUMI analysis
***************

.. _secExamplesKASUMI

It is a block cipher used in UMTS, GSM, and GPRS mobile communications systems. UMTS uses KASUMI in the confidentiality (f8) and integrity algorithms (f9) named UEA1 and UIA1, respectively. GSM employs KASUMI in the A5/3 key stream generator whereas GPRS does so in the GEA3 key stream generator.

Cryptographic Criteria
======================

+-------+------+-------+------+-------+------+---------+----------------+------------+------------+
| S-box | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*       |
+=======+======+=======+======+=======+======+=========+================+============+============+
| S7    | 56   | 36    | 63   | 3     | 3    | 16      | 4161536        | 0.015625   | 0.015625   |
+-------+------+-------+------+-------+------+---------+----------------+------------+------------+
| S9    | 240  | 192   | 255  | 2     | 2    | 512     | 267911168      | 0.00390625 | 0.00390625 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------------+

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

`Truth Table <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.tt>`_

`Decimal Representation <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.dec>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Cycle structure <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.cy>`_

`Linear structures <https://github.com/jacubero/VBF/blob/master/KASUMI/S7/S7.ls>`_

S9
===

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_8x_9+x_7+x_7x_8+x_5x_6+x_4x_8+x_4x_7+x_3x_8+x_3x_5+x_2+x_1x_7+x_1x_6`

:math:`f_2 = 1+x_8x_9+x_7x_9+x_7x_8+x_6+x_6x_9+x_6x_7+x_4x_5+x_3x_7+x_3x_6+x_2x_7+x_2x_4+x_1`

:math:`f_3 = x_9+x_6x_7+x_4x_8+x_4x_7+x_4x_5+x_3x_6+x_3x_5+x_3x_4+x_2+x_1x_8+x_1x_6+x_1x_4+x_1x_2`

:math:`f_4 = 1+x_7+x_5x_8+x_4x_5+x_3x_9+x_3x_8+x_2x_6+x_2x_5+x_2x_3+x_1x_4+x_1x_3+x_1x_2`

:math:`f_5 = x_8x_9+x_6x_8+x_5+x_4x_9+x_3x_6+x_2x_9+x_2x_3+x_1x_8+x_1x_7+x_1x_6 `

:math:`f_6 = x_9+x_7x_8+x_6x_9+x_5x_7+x_4+x_3x_9+x_3x_8+x_2x_5+x_1x_9+x_1x_8+x_1x_2`

:math:`f_7 = 1+x_8+x_6x_9+x_5x_6+x_4x_9+x_3x_7+x_3x_6+x_3x_4+x_2x_5+x_2x_4+x_2x_3+x_1+x_1x_9`

:math:`f_8 = 1+x_8+x_8x_9+x_6x_7+x_5x_9+x_5x_8+x_4x_9+x_4x_6+x_3+x_2x_8+x_2x_7+x_1x_4`

:math:`f_9 = 1+x_7x_9+x_6+x_4x_7+x_3x_4+x_2x_9+x_2x_8+x_2x_7+x_1x_5+x_1x_4+x_1x_2`
 
`Truth Table <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.tt>`_

`Decimal Representation <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.dec>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Cycle structure <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.cy>`_

`Linear structures <https://github.com/jacubero/VBF/blob/master/KASUMI/S9/S9.ls>`_

FI
==

`Algebraic degree from key 00000 to 65535 <https://github.com/jacubero/VBF/blob/master/KASUMI/FI/FIdeg.pdf>`_

`Cycle structure from key 00000 to 65535 <https://github.com/jacubero/VBF/blob/master/KASUMI/FI/cycle.pdf>`_

`Fixed and negated points from key 00000 to 65535 <https://github.com/jacubero/VBF/blob/master/KASUMI/FI/points.pdf>`_

`Nonlinearities from key 00000 to 65535 <https://github.com/jacubero/VBF/blob/master/KASUMI/FI/fi.pdf>`_

