*********
Grand Cru
*********

Description
===========

Grand Cru is a block cipher invented in 2000 by Johan Borst. It was submitted to the NESSIE project, but was not selected. It has a Non-linear Substitution Transformation which uses a 8x8 S-box called S.
 
Summary
=======

+-------+------+-----+------+-------+------+---------+----------------+------------+------------+
| S-box | size |*NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*       |
+=======+======+=====+======+=======+======+=========+================+============+============+
| S     | 8x8  | 112 | 56   | 7     | 4    | 32      | 133120         | 0.015625   | 0.015625   |
+-------+------+-----+------+-------+------+---------+----------------+------------+------------+

S
=

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^4 + x^3 + x + 1`: `Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.wal>`_

.. image:: /images/GrandCru.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/GrandCru/S.ac>`_

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
