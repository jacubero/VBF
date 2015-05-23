***************
KASUMI analysis
***************

.. _secExamplesKASUMI

Summary
=======

It is a block cipher used in UMTS, GSM, and GPRS mobile communications systems. UMTS uses KASUMI in the confidentiality (f8) and integrity algorithms (f9) named UEA1 and UIA1, respectively. GSM employs KASUMI in the A5/3 key stream generator whereas GPRS does so in the GEA3 key stream generator.

+-------+------+-------+------+-------+------+---------+----------------+------------+------------+
| S-box | *NL* | *NL2* | *LD* | *DEG* | *AI* | *MAXAC* | :math:`\sigma` | *LP*       | *DP*       |
+=======+======+=======+======+=======+======+=========+================+============+============+
| S7    | 56   | 36    | 63   | 3     | 3    | 16      | 4161536        | 0.015625   | 0.015625   |
+-------+------+-------+------+-------+------+---------+----------------+------------+------------+
| S9    | 240  | 192   | 255  | 2     | 2    | 512     | 267911168      | 0.00390625 | 0.00390625 |
+-------+------+-------+------+-------+------+---------+----------------+------------+------------+

