######################
Cryptographic Criteria
######################

.. contents::
   :local:
   :depth: 2

This chapter defines some properties relevant for cryptographic applications and explains how to use the package to compute them. Those properties are criteria or those which provide useful information in cryptanalysis. Among the criteria we find nonlinearity, r-th order nonlinearity, linearity distance, balancedness, correlation immunity, resiliency (i.e. balancedness and correlation immunity), propagation criterion, global avalanche criterion, algebraic degree and algebraic immunity. Other properties described are linear potential, differential potential, linear or differential relations associated with a specific value, linear structures, the maximum possible nonlinearity or the maximum possible linearity distance achievable by a Vector Boolean Function with the same number of inputs, the type of function in terms of nonlinearity, the Frequency distribution of the absolute values of the Walsh Spectrum or the Autocorrelation Spectrum, its cycle structure, the presence of fixed points or negated fixed points.

The figure summarizes the relationships among several representations and the criteria studied in this chapter.

.. image:: /images/relationshipscrit.png
   :width: 750 px
   :align: center

The representations which are Boolean matrices are coloured in red, those which are integer matrices are coloured in blue, and those which are criteria are coloured in green.

.. include::
   criteria_d/deg.rst

.. include::
   criteria_d/nonlinearity.rst

.. include::
   criteria_d/rnonlinearity.rst

.. include::
   criteria_d/balancedness.rst

.. include::
   criteria_d/ci.rst

.. include::
   criteria_d/ai.rst

.. include::
   criteria_d/gac.rst

.. include::
   criteria_d/ld.rst

.. include::
   criteria_d/pc.rst

.. include::
   criteria_d/summary.rst
