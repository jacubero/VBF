******
LOKI97
******

Description
===========

*LOKI97* is a block cipher which was a candidate in the Advanced Encryption Standard competition. It is a member of the LOKI family of ciphers, earlier instances being LOKI89 and LOKI91. LOKI97 was designed by Lawrie Brown, assisted by Jennifer Seberry and Josef Pieprzyk. The LOKI97 round function uses two columns each with multiple copies of two basic S-boxes. The S-boxes chosen for LOKI97 use cubing in a galois field :math:`GF(2^n)` with n odd. In order to use odd sized inputs, S1 uses 13 input bits, and S2 uses 11. The S-box functions are:

:math:`S1[x]=((x XOR 1FFF)^3 mod 2911) & FF \in GF(2^{13})`

:math:`S2[x]=((x XOR 7FF)^3 mod AA7) & FF \in GF(2^{11})`

where all constant above are written in hex and all computations are done as polynomials in :math:`GF(2^n)`.

Summary
=======

+-------+------+------+------+-------+------+---------+----------------+----------+----------+
| S-box | size | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*     | *DP*     |
+=======+======+======+======+=======+======+=========+================+==========+==========+
| S1    | 13x8 | 112  | 126  | 7     | 4    | 32      | 50722816       | 0.015625 | 0.015625 |
+-------+------+------+------+-------+------+---------+----------------+----------+----------+
| S2    | 11x8 | 112  | 126  | 7     | 4    | 32      | 50722816       | 0.015625 | 0.015625 |
+-------+------+------+------+-------+------+---------+----------------+----------+----------+

S1
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_6x_8+x_6x_7+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_7x_8+x_4x_5x_7x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_6+x_2x_3x_5x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_2 = 1+x_5+x_5x_7+x_5x_7x_8+x_5x_6+x_4x_8+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7+x_3+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_6x_8+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_1x_8+x_1x_7+x_1x_6x_7+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8`

:math:`f_3 = 1+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_7x_8+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3x_7+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_6+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5x_7+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_1+x_1x_7x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8`

:math:`f_4 = x_8+x_7+x_7x_8+x_6+x_5+x_5x_6+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_7+x_3x_6+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_1x_8+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_5 = x_8+x_6x_7+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_6 = x_8+x_7+x_6x_8+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7x_8+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7x_8+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_7 = 1+x_8+x_7x_8+x_6x_8+x_5+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6x_7+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_8+x_1x_7+x_1x_6+x_1x_6x_8+x_1x_5+x_1x_5x_7+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8`

:math:`f_8 = 1+x_8+x_7x_8+x_6+x_6x_7+x_5+x_5x_7+x_5x_6+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6x_7x_8+x_3x_8+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/loki1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 1                |
+--------------+------------------+
| 27           | 1                |
+--------------+------------------+
| 59           | 1                |
+--------------+------------------+
| 81           | 1                |
+--------------+------------------+
| 87           | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points

S2
==

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_6+x_6x_8+x_6x_7+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_7x_8+x_4x_5x_7x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_8+x_3x_4x_6x_7+x_3x_4x_5+x_3x_4x_5x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7x_8+x_2x_6+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_6x_7+x_2x_4x_6x_7x_8+x_2x_4x_5x_8+x_2x_4x_5x_6x_8+x_2x_3x_8+x_2x_3x_6+x_2x_3x_5x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_8+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_3+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5x_8+x_1x_2x_5x_7+x_1x_2x_5x_6x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6+x_1x_2x_3x_6x_7+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_2 = 1+x_5+x_5x_7+x_5x_7x_8+x_5x_6+x_4x_8+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7+x_3+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5+x_3x_5x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7+x_2+x_2x_6x_8+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6+x_2x_4x_6x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_3x_8+x_2x_3x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7x_8+x_2x_3x_4+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_1x_8+x_1x_7+x_1x_6x_7+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6x_7+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_8+x_1x_3x_6x_8+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_7x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_3+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8`

:math:`f_3 = 1+x_6x_7x_8+x_5x_8+x_5x_7x_8+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_7x_8+x_4x_5x_6x_8+x_4x_5x_6x_7x_8+x_3x_7+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_8+x_3x_4x_6x_7+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_6+x_3x_4x_5x_6x_7x_8+x_2+x_2x_7+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5x_7+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_7+x_2x_4x_7x_8+x_2x_4x_6x_7x_8+x_2x_4x_5x_7+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_3x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5x_7+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6+x_1+x_1x_7x_8+x_1x_5x_7+x_1x_5x_7x_8+x_1x_5x_6+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_7+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7+x_1x_3+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_2x_7+x_1x_2x_6+x_1x_2x_6x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8`

:math:`f_4 = x_8+x_7+x_7x_8+x_6+x_5+x_5x_6+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_7+x_3x_6+x_3x_5+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7+x_3x_4x_7x_8+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6x_8+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7+x_2x_6x_8+x_2x_6x_7x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_7+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7+x_2x_3x_7x_8+x_2x_3x_6+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_1x_8+x_1x_5+x_1x_5x_7x_8+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_6+x_1x_4x_5+x_1x_4x_5x_8+x_1x_4x_5x_7+x_1x_4x_5x_6+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_7+x_1x_3x_7x_8+x_1x_3x_6x_8+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_8+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7+x_1x_3x_4+x_1x_3x_4x_6x_7+x_1x_3x_4x_5+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_3x_4x_5x_6x_7+x_1x_3x_4x_5x_6x_7x_8+x_1x_2+x_1x_2x_8+x_1x_2x_7+x_1x_2x_7x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_8+x_1x_2x_5x_7x_8+x_1x_2x_4+x_1x_2x_4x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_8+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_5 = x_8+x_6x_7+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7x_8+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_7x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_6+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4+x_3x_4x_8+x_3x_4x_6+x_3x_4x_6x_7+x_3x_4x_5x_7+x_3x_4x_5x_7x_8+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2+x_2x_7x_8+x_2x_6x_8+x_2x_6x_7+x_2x_5+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6x_7+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7x_8+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_7+x_2x_3x_4x_5x_6x_7x_8+x_1+x_1x_8+x_1x_7+x_1x_7x_8+x_1x_6x_8+x_1x_6x_7+x_1x_5+x_1x_5x_8+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_6x_8+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_7+x_1x_3x_4x_7x_8+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_7x_8+x_1x_2x_6x_8+x_1x_2x_6x_7+x_1x_2x_5x_8+x_1x_2x_5x_6x_8+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_3+x_1x_2x_3x_8+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

:math:`f_6 = x_8+x_7+x_6x_8+x_5x_8+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6x_8+x_4x_6x_7+x_4x_5+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_8+x_4x_5x_6x_7+x_4x_5x_6x_7x_8+x_3+x_3x_8+x_3x_7x_8+x_3x_6x_8+x_3x_6x_7+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_7+x_3x_5x_7x_8+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_5x_6x_7x_8+x_3x_4x_8+x_3x_4x_7+x_3x_4x_6+x_3x_4x_6x_7x_8+x_3x_4x_5+x_3x_4x_5x_6x_7+x_3x_4x_5x_6x_7x_8+x_2x_8+x_2x_7x_8+x_2x_6x_7+x_2x_5x_8+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4x_8+x_2x_4x_7x_8+x_2x_4x_6x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_5+x_2x_3x_5x_8+x_2x_3x_5x_6+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_6x_7x_8+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_6x_8+x_1+x_1x_8+x_1x_7x_8+x_1x_6x_8+x_1x_6x_7+x_1x_6x_7x_8+x_1x_5x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7x_8+x_1x_4+x_1x_4x_8+x_1x_4x_7+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5x_8+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_7+x_1x_3x_6x_7+x_1x_3x_6x_7x_8+x_1x_3x_5x_8+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7x_8+x_1x_3x_4x_5x_6x_7+x_1x_2+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_7+x_1x_2x_4+x_1x_2x_4x_7x_8+x_1x_2x_4x_6+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_7+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3x_7+x_1x_2x_3x_6+x_1x_2x_3x_6x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_7+x_1x_2x_3x_5x_7x_8+x_1x_2x_3x_5x_6+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_7+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6x_8+x_1x_2x_3x_4x_5+x_1x_2x_3x_4x_5x_7x_8+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8+x_1x_2x_3x_4x_5x_6x_7`

:math:`f_7 = 1+x_8+x_7x_8+x_6x_8+x_5+x_5x_8+x_5x_7+x_5x_7x_8+x_5x_6+x_5x_6x_8+x_5x_6x_7+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6x_7+x_4x_5x_8+x_4x_5x_7+x_4x_5x_7x_8+x_4x_5x_6+x_4x_5x_6x_7x_8+x_3x_5x_7+x_3x_5x_6+x_3x_5x_6x_7+x_3x_4+x_3x_4x_8+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_8+x_3x_4x_5x_7+x_3x_4x_5x_6+x_3x_4x_5x_6x_8+x_2+x_2x_7x_8+x_2x_6+x_2x_6x_7x_8+x_2x_5x_7+x_2x_5x_7x_8+x_2x_5x_6+x_2x_5x_6x_8+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_6x_7x_8+x_2x_4x_5+x_2x_4x_5x_8+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_7+x_2x_4x_5x_6x_7x_8+x_2x_3x_7+x_2x_3x_7x_8+x_2x_3x_6x_8+x_2x_3x_6x_7+x_2x_3x_5+x_2x_3x_5x_7+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_5x_6x_7x_8+x_2x_3x_4x_8+x_2x_3x_4x_7x_8+x_2x_3x_4x_6x_8+x_2x_3x_4x_6x_7+x_2x_3x_4x_5+x_2x_3x_4x_5x_7+x_2x_3x_4x_5x_7x_8+x_2x_3x_4x_5x_6x_8+x_2x_3x_4x_5x_6x_7+x_1+x_1x_8+x_1x_7+x_1x_6+x_1x_6x_8+x_1x_5+x_1x_5x_7+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7+x_1x_4x_7x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_7+x_1x_4x_5x_7x_8+x_1x_4x_5x_6+x_1x_4x_5x_6x_8+x_1x_4x_5x_6x_7x_8+x_1x_3x_8+x_1x_3x_6+x_1x_3x_6x_7+x_1x_3x_5+x_1x_3x_5x_7+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2x_8+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7x_8+x_1x_2x_5x_6x_8+x_1x_2x_4x_8+x_1x_2x_4x_7+x_1x_2x_4x_6+x_1x_2x_4x_6x_7x_8+x_1x_2x_4x_5+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6+x_1x_2x_4x_5x_6x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_8+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_5x_6x_7+x_1x_2x_3x_5x_6x_7x_8+x_1x_2x_3x_4x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_7x_8`

:math:`f_8 = 1+x_8+x_7x_8+x_6+x_6x_7+x_5+x_5x_7+x_5x_6+x_5x_6x_7+x_5x_6x_7x_8+x_4+x_4x_8+x_4x_7+x_4x_7x_8+x_4x_6+x_4x_6x_8+x_4x_6x_7+x_4x_5x_8+x_4x_5x_7+x_4x_5x_6x_7x_8+x_3x_8+x_3x_6x_8+x_3x_6x_7x_8+x_3x_5x_8+x_3x_5x_6+x_3x_5x_6x_8+x_3x_5x_6x_7+x_3x_4x_7x_8+x_3x_4x_6x_8+x_3x_4x_6x_7x_8+x_3x_4x_5x_6x_8+x_2x_8+x_2x_7+x_2x_7x_8+x_2x_6+x_2x_6x_8+x_2x_6x_7+x_2x_6x_7x_8+x_2x_5x_8+x_2x_5x_6x_7+x_2x_5x_6x_7x_8+x_2x_4+x_2x_4x_8+x_2x_4x_7+x_2x_4x_6x_7+x_2x_4x_5x_8+x_2x_4x_5x_7+x_2x_4x_5x_7x_8+x_2x_4x_5x_6x_8+x_2x_4x_5x_6x_7x_8+x_2x_3+x_2x_3x_7+x_2x_3x_6+x_2x_3x_6x_8+x_2x_3x_5x_8+x_2x_3x_5x_7x_8+x_2x_3x_5x_6x_7+x_2x_3x_4+x_2x_3x_4x_8+x_2x_3x_4x_7+x_2x_3x_4x_7x_8+x_2x_3x_4x_6+x_2x_3x_4x_6x_7+x_2x_3x_4x_5x_8+x_2x_3x_4x_5x_6+x_2x_3x_4x_5x_6x_8+x_1x_7x_8+x_1x_6+x_1x_6x_8+x_1x_6x_7x_8+x_1x_5x_7+x_1x_5x_6+x_1x_5x_6x_8+x_1x_5x_6x_7+x_1x_5x_6x_7x_8+x_1x_4x_8+x_1x_4x_7x_8+x_1x_4x_6+x_1x_4x_6x_8+x_1x_4x_6x_7+x_1x_4x_6x_7x_8+x_1x_4x_5+x_1x_4x_5x_6x_7x_8+x_1x_3+x_1x_3x_6+x_1x_3x_6x_8+x_1x_3x_6x_7x_8+x_1x_3x_5+x_1x_3x_5x_7x_8+x_1x_3x_5x_6+x_1x_3x_5x_6x_7+x_1x_3x_5x_6x_7x_8+x_1x_3x_4x_8+x_1x_3x_4x_7+x_1x_3x_4x_6+x_1x_3x_4x_6x_8+x_1x_3x_4x_6x_7x_8+x_1x_3x_4x_5x_8+x_1x_3x_4x_5x_7+x_1x_3x_4x_5x_6+x_1x_3x_4x_5x_6x_8+x_1x_2+x_1x_2x_6+x_1x_2x_6x_7+x_1x_2x_6x_7x_8+x_1x_2x_5+x_1x_2x_5x_7+x_1x_2x_5x_7x_8+x_1x_2x_5x_6+x_1x_2x_5x_6x_7x_8+x_1x_2x_4x_8+x_1x_2x_4x_6x_8+x_1x_2x_4x_6x_7+x_1x_2x_4x_5x_8+x_1x_2x_4x_5x_7x_8+x_1x_2x_4x_5x_6x_7+x_1x_2x_4x_5x_6x_7x_8+x_1x_2x_3+x_1x_2x_3x_7+x_1x_2x_3x_7x_8+x_1x_2x_3x_6x_7+x_1x_2x_3x_6x_7x_8+x_1x_2x_3x_5+x_1x_2x_3x_5x_8+x_1x_2x_3x_5x_6x_8+x_1x_2x_3x_4x_7x_8+x_1x_2x_3x_4x_6+x_1x_2x_3x_4x_6x_7+x_1x_2x_3x_4x_6x_7x_8+x_1x_2x_3x_4x_5x_7+x_1x_2x_3x_4x_5x_6+x_1x_2x_3x_4x_5x_6x_8`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/loki2.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/LOKI97/S2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 1                |
+--------------+------------------+
| 27           | 1                |
+--------------+------------------+
| 59           | 1                |
+--------------+------------------+
| 81           | 1                |
+--------------+------------------+
| 87           | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points

