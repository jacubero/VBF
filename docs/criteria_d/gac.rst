**************************
Global avalanche criterion
**************************

Description
===========

The *Global avalanche criterion (GAC)* was introduced in [zhang95gac]_ to measure the overall avalanche characteristics of a Boolean function. Let :math:`F \in \funct{F}_{n,m}`, its Global avalanche criterion is defined by two indicators:

1. The *absolute indicator* of *F*, denoted by :math:`\crit{AC_{max}}(F)`, defines the maximum absolute non-zero value of the Autocorrelation Spectrum:

.. math::

    \crit{AC_{max}}(F) = \max(|\matr{AC}(F)(\vec{u},\vec{v})|) \ \fa \vec{u} \neq \vec{0} \in \gf{V_n}, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}

2. The *sum-of-square indicator*, denoted by :math:`\sigma`, is the second moment of the autocorrelation coefficients:

.. math::

    \sigma(F) = \sum_{(\vec{u},\vec{v}) \in \gf{V_n} \times \gf{V_m}} \matr{AC}(F)(\vec{u},\vec{v})^2 =  \frac{1}{2^n} \sum_{(\vec{u},\vec{v}) \in \gf{V_n} \times \gf{V_m}} \matr{WS}(F)(\vec{u},\vec{v})^4 
 
In order to achieve good diffusion, cryptographic functions should achieve low values of both indicators.

Library
=======

The methods used to obtain these criteria are the following:

.. code-block:: c

	void maxAC(NTL::ZZ& x, VBF& F)
	void sigma(NTL::ZZ& x, VBF& F)

Example
-------

The following program provides the absolute indicator and the sum-of-square indicator of a Vector Boolean function given its Truth Table.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F;
	   NTL::mat_GF2 T;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input >> T;
	   F.puttt(T);
	   input.close();

	   cout << "The absolute indicator of the function is " 
	   << maxAC(F) << endl;
	   cout << "The sum-of-square indicator of the function is "
	   << sigma(F) << endl;
	   cout << "The maximum absolute indicator that can be achieved by 
	   a Vector Boolean function with the same dimensions is " 
	   << maxACmax(F) << endl;
	  cout << "The maximum sum-of-square indicator that can be achieved by 
	   a Vector Boolean function with the same dimensions is " 
	   << sigmamax(F) << endl;
	  cout << "The minimum sum-of-square indicator that can be achieved by 
	   a Vector Boolean function with the same dimensions is " 
	   << sigmamin(F) << endl;

	   return 0;
	}

If we use the *NibbleSub* S-box Truth Table as input, the output would be the following:

.. code-block:: console

	The absolute indicator of the function is 16
	The sum-of-square indicator of the function is 1408
	The maximum absolute indicator that can be achieved by a 
	Vector Boolean function with the same dimensions is 16
	The maximum sum-of-square indicator that can be achieved by a 
	Vector Boolean function with the same dimensions is 4096
	The minimum sum-of-square indicator that can be achieved by a 
	Vector Boolean function with the same dimensions is 256

The following figure represents the Autocorrelation Spectrum of *NibbleSub* and emphasizes in red the values in which the maximum is attained.

.. image:: /images/maxac.png
   :width: 750 px
   :align: center

The following figure represents the Autocorrelation Spectrum of *NibbleSub* and emphasizes in blue the columns (component functions) in which the maximum sum-of-square is attained.

.. image:: /images/ssi.png
   :width: 750 px
   :align: center
