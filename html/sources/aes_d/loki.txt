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
| S1    | 13x8 | 4032 | 0    | 2     | 2    | 8192    | 134217728      | 0.000244140625 | 0.0078125 |
+-------+------+------+------+-------+------+---------+----------------+----------------+-----------+
| S2    | 11x8 | 992  | 0    | 2     | 2    | 2048    | 8388608        | 0.0009765625   | 0.0078125 |
+-------+------+------+------+-------+------+---------+----------------+----------------+-----------+

S1
==

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.pdf>`_

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

There are 255 linear structures:

`Linear structures <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki1.ls>`_

S2
==

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.pdf>`_

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

There are 256 linear structures:

`Linear structures <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/loki2.ls>`_
