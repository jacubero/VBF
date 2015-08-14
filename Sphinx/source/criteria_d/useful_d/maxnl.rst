Maximum possible nonlinearity
=============================

The *Maximum possible nonlinearity* for Boolean functions :math:`f  \in \funct{F}_n` is known for :math:`n` even and for certain values of :math:`n` odd (:math:`n \leq 7`). The Boolean functions on even number of input variables :math:`n` attaining maximum nonlinearity (:math:`2^{n-1}-2^{n/2-1}`[Rothaus:76]_) are called Bent functions. The upper bound known for odd number of input variables :math:`n` is :math:`2 \lfloor 2^{n-2}-2^{\frac{n}{2}-2} \rfloor`[Hou:97]_. The value of maximum nonlinearity for certain values of $n$ odd is summarized in the following table:

+---+----+----+-----+------+------+-------+
| 3 | 5  | 7  | 9   | 11   | 13   | 15    |
+---+----+----+-----+------+------+-------+
| 2 | 12 | 56 | 244 | 1000 | 4050 | 16292 |
+---+----+----+-----+------+------+-------+

Since Bent $n$-variable Boolean functions exist only if $n$ is even, Bent :math:`(n,m)` vector Boolean functions exist only under this same hypothesis. Nyberg in [Nyberg:91]_ showed this condition is not sufficient for the existence of Bent :math:`(n,m)` vector Boolean functions: they exist only if :math:`n` is even and :math:`m \leq n/2`. If :math:`m > n/2` an upper bound was defined by Chabaud and Vaudenay in [ChabaudV:94]_ and it is called Sidelnikov-Chabaud-Vaudenay bound:

:math:`\crit{NL}(F) = 2^{n-1} - \frac{1}{2}  \sqrt{ 3 \times 2^n -2 -2 \frac{(2^n-1)(2^{n-1}-1)}{2^m-1}}`

The method used to obtain this information is the following:

.. code-block:: c

   NTL::RR nlmax(VBF& F)

An example of use could be:

.. code-block:: c

   VBF  F;

   cout << "Maximum Nonlinearity: " << nlmax(F) << endl;
