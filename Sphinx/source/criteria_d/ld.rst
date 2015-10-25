******************
Linearity distance
******************

Description
===========

Functions with non-zero linear structures are considered weak functions from cryptanalytic viewpoint. It is our interest to identify strong Vector Boolean functions which are far from this weak functions. The cryptanalytic value of linear structures lies in their potential to map a nonlinear function to a degenerate function via a linear transformation, which may reduce the size of the keyspace.

S-boxes used in block ciphers should have no nonzero linear structures (see [Evertse:88]_). The existence of nonzero linear structures, for the functions implemented in stream ciphers, is a potential risk that should also be avoided, despite the fact that such existence could not be used in attacks, so far.

The *linearity distance* of a Boolean function :math:`f \in \funct{F}_{n}` is a characteristic
defined by the distance to the set of all Boolean functions admitting nonzero
linear structures. These include, among others, all the affine functions and
all non bent quadratic functions and are defined as follows [MeierS:89]_:

.. math::

	\crit{LD}(f) = d(f, \set{LS}_n) = \min_{\set{S} \in \set{LS}_n} d(f,\set{S})

where:

.. math::

	\set{LS}_n = \left\{ f \in \funct{F}_{n} \given f \mbox{ has a linear structure } \neq \vec{0} \right\}

*Linearity distance* of a Vector Boolean function, defined as the minimum among the linearity
  distances of all component functions of $F$, may be computed from the Autocorrelation Spectrum using [CarletBF:08]_: 

.. math::

	\crit{LD}(F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \crit{LD}(\vec{v} \cdot F) = 2^{n-2} - \frac{1}{4} \cdot \crit{AC_{max}}(F) 

The *differential cryptanalysis* is based on the idea of finding high probable differentials pairs between the inputs and outputs of S-boxes present in the cipher, that is, finding S-boxes with low linearity distance. Differential cryptanalysis [BihamS:90]_ can be seen as an extension of the ideas of attacks based on the presence of linear structures [Nyberg:91]_. If :math:`\vec{u}` is a linear structure of *f*, then the inputs of difference :math:`\vec{u}` result in output differences of *1* or *-1* with probability *1*. In differential cryptanalysis, 
it is only required that inputs of difference :math:`\Delta\vec{x}` lead to a known difference  :math:`\Delta\vec{y}` with high probability, or with a probability that noticeably exceeds the mean. The perfect nonlinear functions are resistant to differential cryptanalysis.

Let :math:`F \in \funct{F}_{n,m}`, if :math:`\crit{LD}(F) = 0`, it means that *f* has a nontrivial linear structure. As :math:`\set{A}_n \subseteq \set{LS}_n`, then :math:`\crit{NL}(F) \geq \crit{LD}(F)`. 

Library
=======

The method used to obtain the linearity distance of a Vector Boolean function is the following:

.. code-block:: c

	void ld(NTL::RR& x, VBF& F)

The method used to the maximum linearity distance that can be achieved by a Vector Boolean function with the same number of input bits and output bits is the following:

.. code-block:: c

	NTL::RR ldmax(VBF& F)

Example
-------

The following program provides the linearity distance of a Vector Boolean function given its Truth Table together with the maximum linearity distance that can be achieved by a Vector Boolean function with the same number of input bits and output bits.

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

	   cout << "Linearity distance of the function is " << ld(F) << endl;
	   cout << "The maximum linearity distance: " << ldmax(F) << endl;

	   return 0;
	}

If we use the *NibbleSub* S-box Truth Table as input, the output would be the following:

.. code-block:: console

	Linearity distance of the function is 0

TThis S-box has linear structures, and as a consequence, the distance to the set of all Boolean functions admitting nonzero linear structures is 0.  