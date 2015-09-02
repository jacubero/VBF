******
CLEFIA
******

Description
===========

*CLEFIA* is a proprietary block cipher algorithm, developed by Sony. It is intended to be used in DRM systems. It is among the cryptographic techniques recommended candidate for Japanese government use by CRYPTREC revision in 2013. It has two 8x8 S-boxes: S0,S1

Summary
=======

+-------+------+-----+-------+------+---------+----------------+--------------+-----------+
| S-box | *NL* |*LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*         | *DP*      |
+=======+======+=====+=======+======+=========+================+==============+===========+
| S0    | 100  | 40  | 6     | 4    | 96      | 269056         | 0.0478515625 | 0.0390625 |
+-------+------+-----+-------+------+---------+----------------+--------------+-----------+
| S1    | 112  | 56  | 7     | 4    | 32      | 133120         | 0.015625     | 0.015625  |
+-------+------+-----+-------+------+---------+----------------+--------------+-----------+

S0
==

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Clefia0.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S0.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 4            | 1                |
+--------------+------------------+
| 5            | 2                |
+--------------+------------------+
| 17           | 1                |
+--------------+------------------+
| 109          | 1                |
+--------------+------------------+
| 116          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. 

It has 2 negated fixed points: (0,1,0,0,0,0,0,1), (1,1,1,1,1,1,0,1)

S1
==

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/Clefia1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Clefia/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There are no linear structures

It has no fixed points. 

It has 1 negated fixed point: (0,0,1,1,1,0,1,0)

