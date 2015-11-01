******
Anubis
******

Description
===========

Anubis is a block cipher designed by Vincent Rijmen and Paulo S. L. M. Barreto as an entrant in the NESSIE project, a former research program initiated by the European Commission in 2000 for the identification of new cryptographic algorithms. Although the cipher has not been included in the final NESSIE portfolio, its design is considered very strong, and no attacks have been found by 2004 after the project had been concluded. It has a 8x8 S-box called S.

Summary
=======

+-------+------+-----+-------+------+-------+------+---------+----------------+---------------+---------+
| S-box | size |*NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*          | *DP*    |
+=======+======+=====+=======+======+=======+======+=========+================+===============+=========+
| S     | 8x8  | 94  | -     | 40   | 7     | 4    | 96      | 272896         | 0.07055664063 | 0.03125 |
+-------+------+-----+-------+------+-------+------+---------+----------------+---------------+---------+

S
=

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^4 + x^3 + x^2 + 1`: `Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/Anubis/S-trace.pdf>`_

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
