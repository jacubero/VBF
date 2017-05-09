********************
Correlation Immunity
********************

Description
===========

In stream cipher applications, it is vital that the Boolean function used as the combining function have certain properties. In addition to being balanced, possessing high nonlinearity and high algebraic degree, the function should have correlation immunity greater than zero to resist a *divide and conquer attack* [Siegenthaler:84]_.

This criterion describes the extent to which input values of a Vector Boolean function :math:`F \in \funct{F}_{n,m}` can be guessed given the output value. Equivalently, we can say that *F* is *t*-CI if its output distribution does not change when we fix *t* variables :math:`x_i` of its input.

Interest in this criterion came from discovery by Siegenthaler [Siegenthaler:84]_ in 1984 of an attack on pseudo-random generators using combining functions (used in stream ciphers), called a correlation attack. This attack is based on the idea of finding correlation between the outputs and the inputs, that is, finding S-boxes with low resiliency.

A function :math:`f \in \funct{F}_{n}` is :math:`t-\crit{CI}` if and only if, for every set :math:`\set{S}` of *t* variables, :math:`1 \leq t \leq n`, given the value of *f*, the probability that :math:`\set{S}` takes on any of its :math:`2^t` assignments of values to the *t* variables is :math:`\frac{1}{2^t}`. If *f* is :math:`t-\crit{CI}` and balanced, then it is *t*-resilient.

:math:`f \in \funct{F}_n` is said to be *t*-CI if for each linear function :math:`l_{\vec{u}}=u_1x_1+\dotsb+u_nx_n` with :math:`1 \leq wt(\vec{u}) \leq t`, :math:`f+l_{\vec{u}}` is balanced [XiaoM:88]_.

:math:`F \in \funct{F}_{n,m}` is an *t*-CI function (or :math:`(n,m,t)`-CI function) if and only if every component function of *F* is an *t*-CI function. *F* is said to be *t*-resilient (or :math:`(n,m,t)`-resilient function) if it is balanced and *t*-CI [Chen:02]_. 

Let :math:`f \in \funct{F}_n` and :math:`t \in \left\{1,\dots,n-1\right\}`, *f* is called correlation immune (CI) of order *t* if its Walsh coefficients, at values of the nonzero vector indexes whose weight at most *t*, are zero: :math:`\walsh{\chi}_f(\vec{u}) = 0, \ \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq t`. *f* can also be denoted as :math:`(n,1,t)`-CI function.[XiaoM:88]_

Let :math:`F \in \funct{F}_{n,m}` and :math:`t \in \left\{1,\dots,n-1\right\}`, *F* is a correlation immune Vector Boolean function of order *t* if its Walsh coefficients, at values of the nonzero vector indexes whose weight at most *t*, are zero: :math:`\walsh{\theta}_F(\vec{u},\vec{v})= 0, \ \fa \vec{u} \in \gf{V_n}, \ 1 \leq wt(\vec{u}) \leq t, \ \fa \vec{v} \neq \vec{0} \in \gf{V_m}`. *F* can also be denoted as an *t*-CI function.

From the definition of resiliency we can derive that a balanced Vector Boolean function can be interpreted as a *0*-resilient function.

Library
=======

The method used to obtain this criterion is the following:

.. code-block:: c

	void CI(int& t, VBF& F)

Example
-------

The following program provides the order of correlation immunity of a Vector Boolean function given its polynomial in ANF.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F;
	   vec_pol p;
	   int t;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input >> p;
	   F.putpol(p);
	   input.close();

	   t = CI(F);
	   cout << "It is a (" << F.n() << "," << F.m() 
	<< "," << t << ")-CI function" << endl;

	   return 0;
	}

If we use the function :math:`f = (1+x_1)(1+x_2)(1+x_3)(1+x_4)+x_1x_2x_3x_4` polynomial in ANF as input, the output would be the following:

.. code-block:: console

	It is a (4,1,1)-CI function

The following figure represents the Walsh Spectrum of *f* and emphasizes in red the rows whose indexes are of weight 1.

.. image:: /images/ci.png
   :align: center

For all this rows, the Walsh values are *0* so *f* is 1-CI. There are rows whose indexes are of weight 2 and the Walsh values are not *0* so *f* cannot be 2-CI. 