*****************
Mini-AES analysis
*****************

Raphael Chung-Wei Phan presented a version of the AES [Phan02miniadvanced]_, with all the parameters significantly reduced while preserving its original structure. This Mini version is purely educational and is designed to grasp the underlying concepts of Rijndael-like ciphers. It may also serve as a testbed for starting cryptanalysts to experiment with various cryptanalytic attacks. The Mini-AES cipher is a :math:`16 \times 16` vector Boolean function and the Mini-AES encryption is performed with a secret key of 16 bits.

The Mini-AES S-box is called *NibbleSub*, and defines a simple operation that substitutes each input with an output according to a :math:`4 \times 4` substitution table (S-box) given in the table below. These values are, in fact, taken from the first row of the first S-box in DES.

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

