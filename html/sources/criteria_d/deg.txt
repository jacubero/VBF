****************
Algebraic degree
****************

Description
===========

Cryptographic algorithms using Boolean functions to achieve confusion in a cipher (S-boxes in block ciphers, combining of filtering functions in stream ciphers) can be attacked if the functions have low algebraic degree. The algebraic degree is a good indicator of the function's algebraic complexity. The higher the degree of a function, the greater is its algebraic complexity. *Higher order differential attack* [Lai:94]_ exploits the fact that the algebraic degree of the S-box is low.

The *algebraic degree* of a Vector Boolean function :math:`F \in \funct{F}_{n,m}` is defined as the minimum among the algebraic degrees of all component functions of *F* [Nyberg:92]_, namely: 

.. math::

    \crit{deg}(F) = \min_g \{\crit{deg}(g) \given g = \sum_{j=1}^{m} v_jf_j , \  \vec{v}
    \neq \vec{0} \in \gf{V_m} \} 

where the algebraic order or degree of a Boolean function is the order of the largest product term in the *ANF*. This criterion is obtained by generating the ANF table and then analyzing the degree of all the component functions. 

Functions with algebraic degree less than or equal to 1 are called affine. A non-constant affine function for which :math:`F(\vec{0}) = \vec{0}` is called linear. We refer to functions of degree two as quadratic and functions of degree three as cubic.

Library
=======

The method used to obtain this criterion is the following:

.. code-block:: c

	void deg(int& d, VBF& F)

Example
-------

The following program provides the algebraic degree of a Vector Boolean function given its Truth Table. 

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

	   cout << "The algebraic degree of the function is " 
	   << deg(F) << endl;

	   return 0;
	}

If we use the *NibbleSub* S-box Truth Table as input we will find out that its algebraic degree is 2.

The following figure represents the ANF table of NibbleSub nonzero component functions and emphasizes in red the ANF terms of degree 4. As we can see there are no terms of degree 4 in neither of the component functions of NibbleSub.

.. image:: /images/deg1.png
   :align: center

The following figure represents the ANF table of NibbleSub nonzero component functions and emphasizes in blue the ANF terms of degree 3. As we can see there are no terms of degree 3 in one of the component functions of NibbleSub, which is marked in yellow.

.. image:: /images/deg2.png
   :align: center

The following figure represents the ANF table of NibbleSub nonzero component functions and emphasizes in orange the ANF terms of degree 2. As we can see there are always terms of degree 2 in all the component functions of NibbleSub. Because of this, the algebraic degree of NibbleSub is 2.

.. image:: /images/deg3.png
   :align: center
