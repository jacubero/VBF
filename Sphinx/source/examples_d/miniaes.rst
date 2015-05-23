*****************
Mini-AES analysis
*****************

Summary
=======

Cryptographic Criteria
======================

+--------------+------+-------+------+-------+------+---------+----------------+--------+------+
| S-box        | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*   | *DP* |
+==============+======+=======+======+=======+======+=========+================+========+======+
| NibbleSub    | 2    | 0     | 4    | 2     | 2    | 16      | 13056          | 0.5625 | 0.5  |
+--------------+------+-------+------+-------+------+---------+----------------+--------+------+

NibbleSub
=========

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_4+x_2+x_2x_3+x_2x_3x_4+x_1+x_1x_2+x_1x_2x_3`

:math:`f_2 = 1+x_3x_4+x_2+x_2x_4+x_1+x_1x_3+x_1x_3x_4`

:math:`f_3 = 1+x_4+x_3+x_3x_4+x_2x_4+x_2x_3+x_1x_4+x_1x_3+x_1x_2+x_1x_2x_4+x_1x_2x_3`

:math:`f_4 = x_3+x_2x_4+x_1+x_1x_4+x_1x_3x_4`

`Truth Table <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.tt>`_

`ANF Table <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.anf>`_

`Characteristic Function <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.char>`_

`Walsh Spectrum <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.wal>`_

`Linear Profile <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.lp>`_

`Differential Profile <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.dp>`_

`Autocorrelation Spectrum <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

`Cycle structure <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.cy>`_

`Linear structures <https://github.com/jacubero/VBF/blob/master/miniAES/NibbleSub.ls>`_

