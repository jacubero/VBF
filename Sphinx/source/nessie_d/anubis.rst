******
Anubis
******

Description
===========

Anubis is a block cipher designed by Vincent Rijmen and Paulo S. L. M. Barreto as an entrant in the NESSIE project, a former research program initiated by the European Commission in 2000 for the identification of new cryptographic algorithms. Although the cipher has not been included in the final NESSIE portfolio, its design is considered very strong, and no attacks have been found by 2004 after the project had been concluded. It has a 8x8 S-box called S.

The authors suggested a "tweak" to make ANUBIS more efficiently implementable in hardware. It does not change the basic structure of ANUBIS; rather, it replaces the S-box, which in the original submission is generated entirely at random (i.e. lacks any internal structure), by a recursive structure: the new 8x8 substitution box is composed of smaller pseudo-randomly generated 4x4 "mini-boxes" (the P-box and the Q-box).

+------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|  u   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | A | B | C | D | E | F |
+------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
| P(u) | 3 | F | E | 0 | 5 | 4 | B | C | D | A | 9 | 6 | 7 | 8 | 2 | 1 |
+------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

+------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|  u   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | A | B | C | D | E | F |
+------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
| Q(u) | 9 | E | 5 | 6 | A | 2 | 3 | C | F | 0 | 4 | D | 7 | B | 1 | 8 |
+------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

Summary
=======

+-------+------+-----+-------+------+-------+------+---------+----------------+---------------+---------+
| S-box | size |*NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*          | *DP*    |
+=======+======+=====+=======+======+=======+======+=========+================+===============+=========+
| S     | 8x8  | 94  | -     | 40   | 7     | 4    | 96      | 272896         | 0.07055664063 | 0.03125 |
+-------+------+-----+-------+------+-------+------+---------+----------------+---------------+---------+
| P     | 4x4  | 4   | 2     | 2    | 3     | 2    | 8       | 640            | 0.25          | 0.25    |
+-------+------+-----+-------+------+-------+------+---------+----------------+---------------+---------+
| Q     | 4x4  | 4   | 2     | 2    | 3     | 2    | 8       | 640            | 0.25          | 0.25    |
+-------+------+-----+-------+------+-------+------+---------+----------------+---------------+---------+

S
=

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/AnubisS.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 128              |
+--------------+------------------+

There are no linear structures

It has no fixed points

It has 2 negated fixed points: (0,1,1,0,1,1,0,0), (1,0,0,1,0,0,1,1)

P
=

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_4+x_3+x_2x_4+x_1+x_1x_4+x_1x_3+x_1x_3x_4+x_1x_2`

:math:`f_2 = x_4+x_3+x_2+x_2x_4+x_2x_3x_4+x_1+x_1x_2+x_1x_2x_4`

:math:`f_3 = 1+x_3x_4+x_2+x_2x_3+x_1+x_1x_4+x_1x_3x_4+x_1x_2x_3`

:math:`f_4 = 1+x_3+x_2x_4+x_2x_3+x_1x_4+x_1x_3+x_1x_2x_4`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/AnubisP.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/P.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 8                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points

Q
=

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_3+x_2x_4+x_1x_4+x_1x_2+x_1x_2x_4+x_1x_2x_3`

:math:`f_2 = x_4+x_3+x_3x_4+x_2x_4+x_2x_3+x_1+x_1x_3+x_1x_2x_4`

:math:`f_3 = x_4+x_2+x_2x_4+x_2x_3x_4+x_1+x_1x_3+x_1x_3x_4+x_1x_2`

:math:`f_4 = 1+x_4+x_2+x_2x_4+x_2x_3+x_2x_3x_4+x_1x_3+x_1x_2`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/AnubisQ.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/Q.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 8                |
+--------------+------------------+

There are no linear structures

It has no fixed points. 

It has 2 negated fixed points: (0,0,0,1), (1,1,1,0)
