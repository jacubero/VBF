*****************
Mini-AES analysis
*****************

Summary
=======

It is a block cipher used in UMTS, GSM, and GPRS mobile communications systems. UMTS uses KASUMI in the confidentiality (f8) and integrity algorithms (f9) named UEA1 and UIA1, respectively. GSM employs KASUMI in the A5/3 key stream generator whereas GPRS does so in the GEA3 key stream generator.

+--------------+------+-------+------+-------+------+---------+----------------+--------+------+
| S-box        | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*   | *DP* |
+==============+======+=======+======+=======+======+=========+================+========+======+
| NibbleSub    | 2    | 0     | 4    | 2     | 2    | 16      | 13056          | 0.5625 | 0.5  |
+--------------+------+-------+------+-------+------+---------+----------------+--------+------+

