***************
CIPHERUNICORN-E
***************

Description
===========

*CIPHERUNICORN-E* is a block cipher created by NEC in 1998. It was among the cryptographic techniques recommended for Japanese government use by CRYPTREC in 2003, however, has been dropped to "candidate" by CRYPTREC revision in 2013. It has four 8x8 S-boxes: S0,S1,S2,S3

Summary
=======

+-------+------+-----+-------+------+---------+----------------+----------+----------+
| S-box | *NL* |*LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*     | *DP*     |
+=======+======+=====+=======+======+=========+================+==========+==========+
| S0    | 112  | 56  | 7     | 4    | 32      | 133120         | 0.015625 | 0.015625 |
+-------+------+-----+-------+------+---------+----------------+----------+----------+
| S1    | 112  | 56  | 7     | 4    | 32      | 133120         | 0.015625 | 0.015625 |
+-------+------+-----+-------+------+---------+----------------+----------+----------+
| S2    | 112  | 56  | 7     | 4    | 32      | 133120         | 0.015625 | 0.015625 |
+-------+------+-----+-------+------+---------+----------------+----------+----------+
| S3    | 112  | 56  | 7     | 4    | 32      | 133120         | 0.015625 | 0.015625 |
+-------+------+-----+-------+------+---------+----------------+----------+----------+

S0
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^4 + x^3 + x^2 + 1`:

`Trace representation<https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/CIPHERUNICORN-E-0.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S0.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 1                |
+--------------+------------------+
| 45           | 1                |
+--------------+------------------+
| 209          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points.

S1
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^5 + x^2 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/CIPHERUNICORN-E-1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 1                |
+--------------+------------------+
| 49           | 1                |
+--------------+------------------+
| 205          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points.

S2
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^3 + x^2 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/CIPHERUNICORN-E-2.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 4            | 1                |
+--------------+------------------+
| 6            | 1                |
+--------------+------------------+
| 33           | 1                |
+--------------+------------------+
| 73           | 1                |
+--------------+------------------+
| 140          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points.

S3
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^5 + x^4 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/CIPHERUNICORN-E-3.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/CIPHERUNICORN-E/S3.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 3            | 2                |
+--------------+------------------+
| 8            | 1                |
+--------------+------------------+
| 21           | 1                |
+--------------+------------------+
| 221          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. 

It has 2 negated fixed points: (0,0,1,0,0,0,1,1), (0,1,1,1,1,1,1,1)
