********
Camellia
********

Description
===========

Camellia is a symmetric key block cipher with a block size of 128 bits and key sizes of 128, 192 and 256 bits. It was jointly developed by Mitsubishi and NTT of Japan. The cipher has been approved for use by the ISO/IEC, the European Union's NESSIE project and the Japanese CRYPTREC project. It has four 8x8 S-boxes called S1, S2, S3, S4.
 
Summary
=======

+-------+------+-----+------+-------+------+---------+----------------+------------+------------+
| S-box | size |*NL* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*       |
+=======+======+=====+======+=======+======+=========+================+============+============+
| S1    | 8x8  | 112 | 56   | 7     | 4    | 32      | 133120         | 0.015625   | 0.015625   |
+-------+------+-----+------+-------+------+---------+----------------+------------+------------+
| S2    | 8x8  | 112 | 56   | 7     | 4    | 32      | 133120         | 0.015625   | 0.015625   |
+-------+------+-----+------+-------+------+---------+----------------+------------+------------+
| S3    | 8x8  | 112 | 56   | 7     | 4    | 32      | 133120         | 0.015625   | 0.015625   |
+-------+------+-----+------+-------+------+---------+----------------+------------+------------+
| S4    | 8x8  | 112 | 56   | 7     | 4    | 32      | 133120         | 0.015625   | 0.015625   |
+-------+------+-----+------+-------+------+---------+----------------+------------+------------+

S1
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^5 + x^3 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.wal>`_

Walsh Spectrum representation (except first row and column):

.. image:: /images/CamelliaS1.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S1/S1.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 1                |
+--------------+------------------+
| 5            | 1                |
+--------------+------------------+
| 249          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. It has no negated fixed points

S2
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^5 + x^3 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.wal>`_

.. image:: /images/CamelliaS2.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S2/S2.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 10           | 1                |
+--------------+------------------+
| 13           | 1                |
+--------------+------------------+
| 51           | 1                |
+--------------+------------------+
| 71           | 1                |
+--------------+------------------+
| 111          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. 

It has 3 negated fixed points: (0,1,0,1,1,1,0,0), (1,0,1,1,0,0,1,1), (1,1,1,1,1,1,1,0)

S3
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^5 + x^3 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.wal>`_

.. image:: /images/CamelliaS3.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S3/S3.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 5            | 1                |
+--------------+------------------+
| 68           | 1                |
+--------------+------------------+
| 183          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. 

It has 1 negated fixed point: (1,1,1,0,1,0,1,0)

S4
==

Representations
---------------

Polynomial function over :math:`\gf{GF(2^8)}` with irreducible polynomial :math:`x^8 + x^6 + x^5 + x^3 + 1`:

`Trace representation <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4-trace.pdf>`_

`Polynomial representation in ANF <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.anf>`_

`Characteristic function <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.char>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.wal>`_

.. image:: /images/CamelliaS4.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/Camellia/S4/S4.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 10           | 1                |
+--------------+------------------+
| 13           | 1                |
+--------------+------------------+
| 51           | 1                |
+--------------+------------------+
| 71           | 1                |
+--------------+------------------+
| 111          | 1                |
+--------------+------------------+

There are no linear structures

It has no fixed points. 

It has 3 negated fixed points: (0,0,1,0,1,1,1,0), (0,1,1,1,1,1,1,1), (1,1,0,1,1,0,0,1)
