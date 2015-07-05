*****************
Mini-AES analysis
*****************

Introduction
============

Raphael Chung-Wei Phan presented a version of the AES [Phan02miniadvanced]_, with all the parameters significantly reduced while preserving its original structure. This Mini version is purely educational and is designed to grasp the underlying concepts of Rijndael-like ciphers. It may also serve as a testbed for starting cryptanalysts to experiment with various cryptanalytic attacks. The Mini-AES cipher is a :math:`16 \times 16` vector Boolean function and the Mini-AES encryption is performed with a secret key of 16 bits.

The Mini-AES S-box is called *NibbleSub*, and defines a simple operation that substitutes each input with an output according to a 4x4 substitution table (S-box) given in the table below. These values are, in fact, taken from the first row of the first S-box in DES.

+-----------------------+
| NibbleSub Truth Table |
+=======+===============+
| Input | Output        |
+-------+---------------+
| 0000  | 1110          |
+-------+---------------+
| 0001  | 0100          |
+-------+---------------+
| 0010  | 1101		|
+-------+---------------+
| 0011  | 0001		|
+-------+---------------+
| 0100  | 0010		|
+-------+---------------+
| 0101  | 1111		|
+-------+---------------+
| 0110  | 1011 		|
+-------+---------------+
| 0111  | 1000          |
+-------+---------------+ 
| 1000  | 0011		|
+-------+---------------+
| 1001  | 1010		|
+-------+---------------+
| 1010  | 0110 		|
+-------+---------------+
| 1011  | 1100		|
+-------+---------------+
| 1100  | 0101		|
+-------+---------------+
| 1101  | 1001		|
+-------+---------------+
| 1110  | 0000		|
+-------+---------------+
| 1111  | 0111		|
+-------+---------------+

Cryptographic Criteria
======================

+--------------+------+-------+------+-------+------+---------+----------------+--------+------+
| S-box        | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*   | *DP* |
+==============+======+=======+======+=======+======+=========+================+========+======+
| NibbleSub    | 2    | 0     | 4    | 2     | 2    | 16      | 13056          | 0.5625 | 0.5  |
+--------------+------+-------+------+-------+------+---------+----------------+--------+------+

NibbleSub
=========

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_4+x_2+x_2x_3+x_2x_3x_4+x_1+x_1x_2+x_1x_2x_3`

:math:`f_2 = 1+x_3x_4+x_2+x_2x_4+x_1+x_1x_3+x_1x_3x_4`

:math:`f_3 = 1+x_4+x_3+x_3x_4+x_2x_4+x_2x_3+x_1x_4+x_1x_3+x_1x_2+x_1x_2x_4+x_1x_2x_3`

:math:`f_4 = x_3+x_2x_4+x_1+x_1x_4+x_1x_3x_4`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/NibbleSub.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/NibbleSub.anf>`_

`Walsh Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/NibbleSub.wal>`_

+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|16|0 |0 |0 |0 |0 |0 |0 |0 |0  |0 |0 |0 |0 |0  |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |0 |-4|-4|0 |0 |-4|12|4 | 4 |0 |0 |4 |4 |0  |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |0 |-4|-4|0 |0 |-4|-4|0 |0  |4 |4 |0 |0 |-12|4  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |0 |0 |0 |0 |0 |0 |0 |4 |-12|-4|-4|4 |4 |-4 |-4 |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |4 |0 |-4|-4|-8|-4|0 |0 |-4 |0 |4 |4 |-8|4  |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |-4|-4|0 |-4|0 |8 |4 |-4|0  |-8|4 |0 |-4|-4 |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |4 |-4|8 |4 |0 |0 |4 |0 |-4 |4 |8 |-4|0 |0  |-4 |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |-4|0 |4 |4 |-8|4 |0 |-4|0  |4 |0 |8 |4 |0  |4  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |0 |0 |0 |0 |0 |0 |0 |-4|4  |4 |-4|4 |-4|-4 |-12|
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |0 |-4|-4|0 |0 |-4|-4|-8|0  |-4|4 |0 |8 |4  |-4 |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |8 |-4|4 |-8|0 |4 |-4|4 |4  |0 |0 |4 |4 |0  |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |8 |0 |-8|8 |0 |8 |0 |0 |0  |0 |0 |0 |0 |0  |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |-4|8 |-4|-4|0 |4 |0 |4 |0  |4 |8 |0 |4 |0  |-4 |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |4 |4 |0 |-4|8 |0 |4 |-8|-4 |4 |0 |4 |0 |0  |4  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |4 |4 |0 |-4|-8|0 |4 |-4|0  |0 |-4|-8|4 |-4 |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+
|0 |-4|-8|-4|-4|0 |4 |0 |0 |-4 |8 |-4|-4|0 |4  |0  |
+--+--+--+--+--+--+--+--+--+---+--+--+--+--+---+---+

Walsh Spectrum representation (except first row and column):

.. image:: /images/Nibble.png
   :width: 750 px
   :align: center

`Linear Profile <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/NibbleSub.lp>`_

`Differential Profile <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/NibbleSub.dp>`_

`Autocorrelation Spectrum <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/NibbleSub.ac>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 2            | 1                |
+--------------+------------------+
| 14           | 1                |
+--------------+------------------+

There are no linear structures

ks0
===

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = x_1`

:math:`f_2 = x_2`

:math:`f_3 = x_3`

:math:`f_4 = x_4`

:math:`f_5 = x_5`

:math:`f_6 = x_6`

:math:`f_7 = x_7`

:math:`f_8 = x_8`

:math:`f_9 = x_9`

:math:`f_{10} = x_{10}`

:math:`f_{11} = x_{11}`

:math:`f_{12} = x_{12}`

:math:`f_{13} = x_{13}`

:math:`f_{14} = x_{14}`

:math:`f_{15} = x_{15}`

:math:`f_{16} = x_{16}`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/ks0.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/ks0.anf>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 65536            |
+--------------+------------------+

ks1
===

Representations
---------------

Polynomial representation in ANF:

:math:`f_1 = 1+x_{16}+x_{14}+x_{14}x_{15}+x_{14}x_{15}x_{16}+x_{13}+x_{13}x_{14}+x_{13}x_{14}x_{15}+x_1`

:math:`f_2 = 1+x_{15}x_{16}+x_{14}+x_{14}x_{16}+x_{13}+x_{13}x_{15}+x_{13}x_{15}x_{16}+x_2`

:math:`f_3 = 1+x_{16}+x_{15}+x_{15}x_{16}+x_{14}x_{16}+x_{14}x_{15}+x_{13}x_{16}+x_{13}x_{15}+x_{13}x_{14}+x_{13}x_{14}x_{16}+x_{13}x_{14}x_{15}+x_3`

:math:`f_4 = 1+x_{15}+x_{14}x_{16}+x_{13}+x_{13}x_{16}+x_{13}x_{15}x_{16}+x_4`

:math:`f_5 = 1+x_{16}+x_{14}+x_{14}x_{15}+x_{14}x_{15}x_{16}+x_{13}+x_{13}x_{14}+x_{13}x_{14}x_{15}+x_5+x_1`

:math:`f_6 = 1+x_{15}x_{16}+x_{14}+x_{14}x_{16}+x_{13}+x_{13}x_{15}+x_{13}x_{15}x_{16}+x_6+x_2`

:math:`f_7 = 1+x_{16}+x_{15}+x_{15}x_{16}+x_{14}x_{16}+x_{14}x_{15}+x_{13}x_{16}+x_{13}x_{15}+x_{13}x_{14}+x_{13}x_{14}x_{16}+x_{13}x_{14}x_{15}+x_7+x_3`

:math:`f_8 = 1+x_{15}+x_{14}x_{16}+x_{13}+x_{13}x_{16}+x_{13}x_{15}x_{16}+x_8+x_4`

:math:`f_9 = 1+x_{16}+x_{14}+x_{14}x_{15}+x_{14}x_{15}x_{16}+x_{13}+x_{13}x_{14}+x_{13}x_{14}x_{15}+x_9+x_5+x_1`

:math:`f_{10} = 1+x_{15}x_{16}+x_{14}+x_{14}x_{16}+x_{13}+x_{13}x_{15}+x_{13}x_{15}x_{16}+x_{10}+x_6+x_2`

:math:`f_{11} = 1+x_{16}+x_{15}+x_{15}x_{16}+x_{14}x_{16}+x_{14}x_{15}+x_{13}x_{16}+x_{13}x_{15}+x_{13}x_{14}+x_{13}x_{14}x_{16}+x_{13}x_{14}x_{15}+x_{11}+x_7+x_3`

:math:`f_{12} = 1+x_{15}+x_{14}x_{16}+x_{13}+x_{13}x_{16}+x_{13}x_{15}x_{16}+x_{12}+x_8+x_4`

:math:`f_{13} = 1+x_{16}+x_{14}+x_{14}x_{15}+x_{14}x_{15}x_{16}+x_{13}x_{14}+x_{13}x_{14}x_{15}+x_9+x_5+x_1`

:math:`f_{14} = 1+x_{15}x_{16}+x_{14}x_{16}+x_{13}+x_{13}x_{15}+x_{13}x_{15}x_{16}+x_{10}+x_6+x_2`

:math:`f_{15} = 1+x_{16}+x_{15}x_{16}+x_{14}x_{16}+x_{14}x_{15}+x_{13}x_{16}+x_{13}x_{15}+x_{13}x_{14}+x_{13}x_{14}x_{16}+x_{13}x_{14}x_{15}+x_{11}+x_7+x_3`

:math:`f_{16} = 1+x_{16}+x_{15}+x_{14}x_{16}+x_{13}+x_{13}x_{16}+x_{13}x_{15}x_{16}+x_{12}+x_8+x_4`

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/ks1.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/ks1.anf>`_

`Walsh Spectrum (each row represents a column of Walsh Spectrum) <https://github.com/jacubero/VBF/blob/master/miniAES/ks1.wal.gz>`_

`Linear Profile (each row represents a column of Linear Profile) <https://github.com/jacubero/VBF/blob/master/miniAES/ks1.lp.gz>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 5            | 2                |
+--------------+------------------+
| 10           | 2                |
+--------------+------------------+
| 28           | 1                |
+--------------+------------------+
| 60           | 1                |
+--------------+------------------+
| 1223         | 1                |
+--------------+------------------+
| 26097        | 1                |
+--------------+------------------+
| 38097        | 1                |
+--------------+------------------+

ks2
===

Representations
---------------

Polynomial representation in ANF:

`f1 <https://github.com/jacubero/VBF/blob/master/miniAES/f1.pdf>`_

`f2 <https://github.com/jacubero/VBF/blob/master/miniAES/f2.pdf>`_

`f3 <https://github.com/jacubero/VBF/blob/master/miniAES/f3.pdf>`_

`f4 <https://github.com/jacubero/VBF/blob/master/miniAES/f4.pdf>`_

`f5 <https://github.com/jacubero/VBF/blob/master/miniAES/f5.pdf>`_

`f6 <https://github.com/jacubero/VBF/blob/master/miniAES/f6.pdf>`_

`f7 <https://github.com/jacubero/VBF/blob/master/miniAES/f7.pdf>`_

`f8 <https://github.com/jacubero/VBF/blob/master/miniAES/f8.pdf>`_

`f9 <https://github.com/jacubero/VBF/blob/master/miniAES/f9.pdf>`_

`f10 <https://github.com/jacubero/VBF/blob/master/miniAES/f10.pdf>`_

`f11 <https://github.com/jacubero/VBF/blob/master/miniAES/f11.pdf>`_

`f12 <https://github.com/jacubero/VBF/blob/master/miniAES/f12.pdf>`_

`f13 <https://github.com/jacubero/VBF/blob/master/miniAES/f13.pdf>`_

`f14 <https://github.com/jacubero/VBF/blob/master/miniAES/f14.pdf>`_

`f15 <https://github.com/jacubero/VBF/blob/master/miniAES/f15.pdf>`_

`f16 <https://github.com/jacubero/VBF/blob/master/miniAES/f16.pdf>`_

`Truth Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/ks2.tt>`_

`ANF Table <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/ks2.anf>`_

`Walsh Spectrum (each row represents a column of Walsh Spectrum) <https://github.com/jacubero/VBF/blob/master/miniAES/ks2.wal.gz>`_

`Linear Profile (each row represents a column of Linear Profile) <https://github.com/jacubero/VBF/blob/master/miniAES/ks2.lp.gz>`_

Other useful information in cryptanalysis
-----------------------------------------

Cycle structure:

+--------------+------------------+
| Cycle length | Number of cycles |
+==============+==================+
| 1            | 1                |
+--------------+------------------+
| 12           | 1                |
+--------------+------------------+
| 15           | 3                |
+--------------+------------------+
| 30           | 1                |
+--------------+------------------+
| 109          | 1                |
+--------------+------------------+
| 385          | 1                |
+--------------+------------------+
| 831          | 1                |
+--------------+------------------+
| 2472         | 1                |
+--------------+------------------+
| 3617         | 1                |
+--------------+------------------+
| 9775         | 1                |
+--------------+------------------+
| 16777        | 1                |
+--------------+------------------+
| 31482        | 1                |
+--------------+------------------+

mini-AES
========

Algebraic degree from key 00000 to 65535 is equal to 14

`Cycle structure from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/cycle.pdf>`_

`Fixed and negated points from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/points.pdf>`_

`Nonlinearities from key 00000 to 65535 <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/nl.pdf>`_

`Nonlinearities in ascendent order <https://raw.githubusercontent.com/jacubero/VBF/master/miniAES/fi.s>`_

Graphical display of the distribution of the nonlinearities of mini-AES:

.. image:: /images/hist-miniAES.jpeg
   :width: 750 px
   :align: center

+---------------------------------------------------+
| Descriptive Statistics of mini-AES nonlinearities |
+====================+==============================+
| Unique Values      | 130                          |
+--------------------+------------------------------+
| Min                | 31432                        |
+--------------------+------------------------------+
| Max                | 32040                        |
+--------------------+------------------------------+
| Mean               | 31912.9894                   |
+--------------------+------------------------------+
| Mean Deviation     | 8.6571                       |
+--------------------+------------------------------+
| 1st Quartile       | 31880                        |
+--------------------+------------------------------+
| Median             | 31924                        |
+--------------------+------------------------------+
| 3rd Quartile       | 31960                        |
+--------------------+------------------------------+
| Mode               | 31952                        |
+--------------------+------------------------------+
| Range              | 608                          |
+--------------------+------------------------------+
| Variance           | 3903.8642                    |
+--------------------+------------------------------+
| Standard Deviation | 62.4809                      |
+--------------------+------------------------------+
| Kkewness           | -1.092059                    |
+--------------------+------------------------------+
| Kurtosis           | 1.79284                      |
+--------------------+------------------------------+
| P0.5               | 31692                        |
+--------------------+------------------------------+
| P1                 | 31720                        |
+--------------------+------------------------------+
| P5                 | 31796                        |
+--------------------+------------------------------+
| P95                | 31992                        |
+--------------------+------------------------------+
| P99                | 32012                        |
+--------------------+------------------------------+
| P99.5              | 32016                        |
+--------------------+------------------------------+

