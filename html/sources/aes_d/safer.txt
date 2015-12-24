******
Safer+
******

Description
===========

*Safer+* (Massey et al., 1998) was submitted as a candidate for the Advanced Encryption Standard and has a block size of 128 bits. The cipher was not selected as a finalist. Bluetooth uses custom algorithms based on SAFER+ for key derivation (called E21 and E22) and authentication as message authentication codes (called E1). Encryption in Bluetooth does not use SAFER+. It has one 8x8 S-box called expf and other 9x8 S-box called logf.

Summary
=======

+-------+------+------+------+-------+------+---------+----------------+--------------+------+
| S-box | size | *NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*         | *DP* |
+=======+======+======+======+=======+======+=========+================+==============+======+
| expf  | 8x8  | 82   | 0    | 6     | 3    | 256     | 711424         | 0.1291503906 | 0.5  |
+-------+------+------+------+-------+------+---------+----------------+--------------+------+
| logf  | 9x8  | 164  | 0    | 6     | 3    | 512     | 4520960        | 0.1291503906 | 0.5  |
+-------+------+------+------+-------+------+---------+----------------+--------------+------+

expf
====

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/expf.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/expf.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 3                |
+--------------+------------------+
| 2            | 1                |
+--------------+------------------+
| 41           | 1                |
+--------------+------------------+
| 42           | 1                |
+--------------+------------------+
| 168          | 1                |
+--------------+------------------+

There are 3 linear structures:

.. code-block:: console

	([1 0 0 0 0 0 0 0],[0 0 0 0 0 0 0 1])
	([1 0 0 0 0 0 0 0],[0 0 0 0 0 0 1 0])
	([1 0 0 0 0 0 0 0],[0 0 0 0 0 0 1 1])

It has 3 fixed points: (0,0,0,1,1,0,1,1), (0,1,0,1,0,1,1,1), (0,1,0,1,1,1,0,0)

It has 4 negated fixed points: (0,0,0,1,0,1,0,0), (0,0,1,0,1,1,0,0), (0,1,0,1,1,1,1,1), (1,0,1,0,1,1,1,1)

logf
====

Representations
---------------

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.wal>`_

Walsh Spectrum representation (first 256x256 values except first row and column):

.. image:: /images/logf.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

There is 255 linear structures:

`Linear structures <https://raw.githubusercontent.com/jacubero/VBF/master/safer/logf.ls>`_
