******
Square
******

Description
===========

*Square* is a block cipher invented by Joan Daemen and Vincent Rijmen. The design, published in 1997, is a forerunner to Rijndael, which has been adopted as the Advanced Encryption Standard. It has a 8x8 S-box called S.
 
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

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.wal>`_

.. image:: /images/Square.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Square/S.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 2                |
+--------------+------------------+
| 6            | 1                |
+--------------+------------------+
| 8            | 1                |
+--------------+------------------+
| 20           | 1                |
+--------------+------------------+
| 23           | 1                |
+--------------+------------------+
| 197          | 1                |
+--------------+------------------+

There are no linear structures

It has 1 fixed point: (0,0,0,0,1,1,0,0)

It has 1 negated fixed point: (1,0,0,1,0,1,1,1)
