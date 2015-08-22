******
LOKI97
******

Description
===========

*LOKI97* is a block cipher which was a candidate in the Advanced Encryption Standard competition. It is a member of the LOKI family of ciphers, earlier instances being LOKI89 and LOKI91. LOKI97 was designed by Lawrie Brown, assisted by Jennifer Seberry and Josef Pieprzyk. The LOKI97 round function uses two columns each with multiple copies of two basic S-boxes. The S-boxes chosen for LOKI97 use cubing in a galois field :math:`GF(2^n)` with n odd. In order to use odd sized inputs, S1 uses 13 input bits, and S2 uses 11. The S-box functions are:

S1[x]=((x XOR 1FFF)^3 mod 2911) & FF :math:`\in GF(2^{13})`

S2[x]=((x XOR 7FF)^3 mod AA7) & FF :math:`\in GF(2^{11})`

where all constant above are written in hex and all computations are done as polynomials in :math:`GF(2^n)`.

Summary
=======

+-------+------+------+------+-------+------+---------+----------------+----------------+-----------+
| S-box | size | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*           | *DP*      |
+=======+======+======+======+=======+======+=========+================+================+===========+
| S1    | 13x8 | 4032 | 4064 | 2     | 2    | 8192    | 583981334528   | 0.000244140625 | 0.0078125 |
+-------+------+------+------+-------+------+---------+----------------+----------------+-----------+
| S2    | 11x8 | 992  | 1016 | 2     | 2    | 2048    | 10729029632    | 0.0009765625   | 0.0078125 |
+-------+------+------+------+-------+------+---------+----------------+----------------+-----------+

S1
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_13+x_11+x_10x_12+x_10x_11+x_8+x_8x_12+x_7+x_7x_9+x_7x_8+x_6+x_6x_13+x_6x_11+x_6x_9+x_5x_13+x_5x_11+x_5x_9+x_4+x_4x_13+x_4x_10+x_4x_7+x_4x_6+x_3+x_3x_12+x_3x_10+x_3x_9+x_3x_8+x_3x_7+x_2+x_2x_10+x_2x_9+x_2x_8+x_2x_7+x_2x_5+x_1x_12+x_1x_10+x_1x_9+x_1x_8+x_1x_7+x_1x_4+x_1x_3`

:math:`f_2 = x_10+x_10x_13+x_9+x_9x_12+x_8+x_7+x_7x_13+x_7x_10+x_7x_8+x_6+x_6x_12+x_6x_10+x_6x_9+x_6x_8+x_6x_7+x_5+x_5x_12+x_5x_9+x_5x_7+x_4x_11+x_4x_10+x_4x_9+x_4x_7+x_4x_6+x_4x_5+x_3+x_3x_13+x_3x_9+x_3x_5+x_2x_8+x_2x_7+x_2x_3+x_1x_13+x_1x_12+x_1x_10+x_1x_8+x_1x_6+x_1x_5+x_1x_4+x_1x_2`

:math:`f_3 = 1+x_12+x_11+x_11x_12+x_10x_12+x_8x_13+x_8x_9+x_7+x_7x_11+x_7x_8+x_6x_13+x_6x_11+x_6x_8+x_6x_7+x_5x_13+x_5x_9+x_5x_6+x_4+x_4x_12+x_4x_7+x_4x_6+x_4x_5+x_3+x_3x_11+x_3x_9+x_3x_7+x_2x_12+x_2x_11+x_2x_8+x_2x_6+x_2x_4+x_1+x_1x_13+x_1x_12+x_1x_10+x_1x_9+x_1x_8+x_1x_6+x_1x_5+x_1x_4+x_1x_3+x_1x_2`

:math:`f_4 = x_11+x_11x_13+x_11x_12+x_9x_13+x_8+x_8x_10+x_8x_9+x_7x_12+x_7x_10+x_6x_12+x_6x_10+x_5+x_5x_11+x_5x_8+x_5x_7+x_4x_13+x_4x_11+x_4x_10+x_4x_9+x_4x_8+x_3+x_3x_11+x_3x_10+x_3x_9+x_3x_8+x_3x_6+x_2+x_2x_13+x_2x_11+x_2x_10+x_2x_9+x_2x_8+x_2x_5+x_2x_4+x_1+x_1x_12+x_1x_11+x_1x_9+x_1x_6+x_1x_5+x_1x_4+x_1x_2`

:math:`f_5 = x_10x_13+x_8+x_7+x_7x_9+x_7x_8+x_6x_11+x_6x_9+x_6x_7+x_5x_13+x_5x_11+x_5x_6+x_4+x_4x_13+x_4x_11+x_4x_10+x_4x_9+x_3+x_3x_13+x_3x_12+x_3x_11+x_3x_10+x_3x_8+x_3x_7+x_3x_6+x_3x_4+x_2x_13+x_2x_11+x_2x_8+x_2x_6+x_2x_5+x_1x_13+x_1x_11+x_1x_10+x_1x_9+x_1x_6+x_1x_5`

:math:`f_6 = 1+x_13+x_12x_13+x_11+x_11x_13+x_10+x_7+x_7x_10+x_7x_8+x_6x_12+x_6x_10+x_6x_9+x_5x_12+x_5x_10+x_5x_9+x_5x_8+x_5x_7+x_5x_6+x_4+x_4x_12+x_4x_11+x_4x_9+x_4x_7+x_4x_6+x_3x_13+x_3x_12+x_3x_10+x_3x_8+x_3x_5+x_2+x_2x_12+x_2x_11+x_2x_10+x_2x_9+x_2x_8+x_2x_6+x_2x_5+x_1+x_1x_8+x_1x_7+x_1x_6+x_1x_2`

:math:`f_7 = 1+x_12+x_12x_13+x_11+x_10+x_9+x_8+x_8x_9+x_7x_11+x_7x_8+x_6x_13+x_6x_11+x_6x_9+x_6x_8+x_5+x_5x_13+x_5x_11+x_5x_8+x_5x_6+x_4x_13+x_4x_12+x_4x_11+x_4x_9+x_4x_8+x_3+x_3x_13+x_3x_10+x_3x_9+x_3x_8+x_3x_7+x_3x_6+x_3x_5+x_2+x_2x_13+x_2x_9+x_2x_8+x_2x_7+x_2x_6+x_1x_12+x_1x_11+x_1x_7+x_1x_6+x_1x_3+x_1x_2`

:math:`f_8 = 1+x_8x_10+x_8x_9+x_7+x_7x_12+x_7x_10+x_7x_8+x_6+x_6x_12+x_6x_7+x_5x_12+x_5x_11+x_5x_10+x_4+x_4x_13+x_4x_12+x_4x_11+x_4x_9+x_4x_8+x_4x_7+x_4x_5+x_3+x_3x_12+x_3x_9+x_3x_7+x_3x_6+x_2x_12+x_2x_11+x_2x_10+x_2x_7+x_2x_6+x_1+x_1x_11+x_1x_9+x_1x_8+x_1x_7+x_1x_4+x_1x_2`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.wal>`_

Walsh Spectrum representation (256x256 first values except first row and column):

.. image:: /images/loki1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

S2
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_10+x_9+x_8+x_8x_10+x_8x_9+x_7x_8+x_6+x_6x_8+x_5x_8+x_5x_7+x_4x_11+x_4x_10+x_4x_8+x_4x_7+x_4x_6+x_3x_11+x_3x_10+x_3x_7+x_3x_6+x_2+x_2x_10+x_2x_7+x_2x_4+x_2x_3+x_1x_10+x_1x_8+x_1x_7+x_1x_6+x_1x_4+x_1x_2`

:math:`f_2 = x_11+x_10+x_8x_11+x_7x_10+x_6x_9+x_6x_7+x_5x_9+x_5x_6+x_4x_11+x_4x_10+x_4x_9+x_4x_6+x_3x_11+x_3x_5+x_2+x_2x_11+x_2x_10+x_2x_9+x_2x_6+x_2x_5+x_2x_4+x_1+x_1x_11+x_1x_9+x_1x_8+x_1x_7+x_1x_5+x_1x_2`

:math:`f_3 = 1+x_9+x_9x_10+x_8x_10+x_7x_8+x_6x_11+x_6x_10+x_5x_10+x_5x_9+x_5x_8+x_5x_7+x_5x_6+x_4x_11+x_4x_10+x_4x_9+x_3+x_3x_10+x_3x_9+x_3x_7+x_3x_6+x_3x_5+x_2+x_2x_11+x_2x_8+x_2x_7+x_2x_6+x_2x_5+x_2x_4+x_2x_3+x_1x_11+x_1x_9+x_1x_2`

:math:`f_4 = x_9x_11+x_9x_10+x_7+x_7x_11+x_6x_8+x_5+x_5x_10+x_5x_9+x_4+x_4x_11+x_4x_9+x_4x_6+x_3+x_3x_11+x_3x_10+x_3x_8+x_3x_7+x_3x_6+x_2x_9+x_2x_8+x_2x_7+x_2x_5+x_2x_4+x_2x_3+x_1+x_1x_10+x_1x_9+x_1x_8+x_1x_6+x_1x_3`

:math:`f_5 = 1+x_9+x_8+x_8x_11+x_7+x_6x_9+x_6x_8+x_6x_7+x_5+x_5x_11+x_5x_10+x_5x_7+x_5x_6+x_4+x_4x_10+x_4x_9+x_4x_8+x_4x_7+x_4x_5+x_3+x_3x_11+x_3x_9+x_3x_5+x_2x_8+x_2x_5+x_1x_11+x_1x_10+x_1x_8+x_1x_7+x_1x_6+x_1x_3+x_1x_2`

:math:`f_6 = 1+x_10x_11+x_9x_11+x_7+x_7x_8+x_6x_10+x_6x_9+x_6x_8+x_6x_7+x_5+x_5x_11+x_5x_9+x_5x_7+x_4+x_4x_11+x_4x_10+x_4x_9+x_4x_7+x_4x_6+x_4x_5+x_3x_9+x_3x_4+x_2+x_2x_8+x_2x_4+x_2x_3+x_1+x_1x_10+x_1x_9+x_1x_8+x_1x_5+x_1x_4+x_1x_3+x_1x_2`

:math:`f_7 = x_11+x_10+x_10x_11+x_9+x_8+x_7+x_7x_8+x_6x_10+x_6x_9+x_5x_11+x_5x_10+x_5x_9+x_5x_8+x_5x_7+x_4x_11+x_4x_9+x_4x_8+x_4x_6+x_4x_5+x_3+x_3x_9+x_3x_6+x_3x_5+x_2+x_2x_9+x_2x_8+x_2x_7+x_2x_4+x_1x_8+x_1x_7+x_1x_5+x_1x_4+x_1x_3+x_1x_2`

:math:`f_8 = 1+x_8+x_7+x_7x_8+x_6x_10+x_6x_7+x_5x_10+x_4+x_4x_9+x_4x_8+x_4x_6+x_3+x_3x_8+x_3x_7+x_3x_4+x_2+x_2x_7+x_2x_6+x_2x_5+x_2x_4+x_1x_11+x_1x_9+x_1x_7+x_1x_3`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.wal>`_

Walsh Spectrum representation (256x256 first values except first row and column):

.. image:: /images/loki2.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

