***********************
Software implementation
***********************

The package included consists of: 

1. Derived classes inherited from NTL base classes which add new functions on top of them:

.. code-block:: console

   pol.h, vbf_GF2EX.h, vbf_GF2X.h, vbf_ZZ.h, vbf_mat_GF2.h, vbf_mat_RR.h, vbf_mat_ZZ.h, vbf_tools.h, 
   vbf_vec_GF2.h, vbf_vec_GF2E.h, vbf_vec_RR.h, vbf_vec_ZZ.h, vec_pol.h

2. Main class (*VBF.h*) with the functions and other *.h* files, 

3. A makefile to ease the compilation of example (*Makefile*),

4. A set of files associated with the decimal representation of KASUMI [KASUMI:05]_ S-boxes (S7.dec and S9.dec).

The Output files can be found within "KASUMI Analysis" in the "Analysis of other cryptographic algorithms" menu at :ref:`KASUMI <secExamplesKASUMI>`.
