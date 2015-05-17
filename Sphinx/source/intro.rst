############
Introduction
############

.. contents::
   :local:
   :depth: 2

The Vector Boolean Function Library (VBF) is a collection of C++ classes designed for analysing Vector Boolean Functions (functions that map a Boolean vector to another Boolean vector)  from a cryptographic perspective. This implementation uses the NTL library from Victor Shoup, modifying some of the general purpose modules of this library (to make it better suited to cryptography), and adding new modules that complement the existing ones. The class representing a Vector Boolean Function can be initialized by several data structures such as Truth Table, Trace representation, Algebraic Normal Form (ANF) among others. The most relevant cryptographic criteria for both block and stream ciphers can be evaluated with VBF. It allows to obtain some interesting cryptologic characterizing features such as linear structures, frequency distribution of the absolute values of the Walsh Spectrum or Autocorrelation Spectrum, among others. In addition, operations such as equality checking, composition, inversion, sum, direct sum, bricklayering (parallel application of Vector Boolean Functions as employed in Rijndael cipher), and adding coordinate functions of  two Vector Boolean Functions can be executed. 

.. include::
   intro_d/functions.rst

.. include::
   intro_d/conventions.rst

.. include::
   intro_d/implementation.rst

.. include::
   intro_d/requirements.rst

.. include::
   intro_d/installation.rst

.. include::
   intro_d/preliminaries.rst

.. include::
   intro_d/design.rst

