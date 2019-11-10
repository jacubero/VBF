********************
Differential Profile
********************

Description
===========

The first step of Differential Cryptanalysis is to compute the characteristics of inputs and the outputs of the S-boxes, which we will then combine together to form a characteristic for the complete cipher. Consider a :math:`n \times m` S-box with input :math:`\vec{x} = (x_1, \ldots, x_n)` and output :math:`\vec{y} = (y_1,\ldots,y_m)`. All difference pairs of an S-box, :math:`(\Delta \vec{x}, \Delta \vec{y})`, can be examined and the probability of :math:`\Delta \vec{y}` given :math:`\Delta \vec{x}` can be derived by considering input pairs :math:`(\vec{x}^{'},\vec{x}^{''})` such that :math:`\vec{x}^{'}+\vec{x}^{''} = \Delta \vec{x}`. Since the ordering of the pair is not relevant, for a :math:`n \times m` S-box we need only consider all :math:`2^n` values for :math:`\vec{x}^{'}` and then the value of :math:`\Delta \vec{x}` constrains the value of :math:`\vec{x}^{''}` to be :math:`\vec{x}^{''} = \vec{x}^{'}+\Delta \vec{x}`. We can derive the resulting values of :math:`\Delta \vec{y}` for each input pair :math:`(\vec{x}^{'}, \vec{x}^{''} = \vec{x}^{'}+\Delta \vec{x})`.

We can tabulate the complete differential data for an S-box in the *Differential Profile* (In the literature, an equivalent matrix called Difference Distribution Table is used as well), which the rows represent :math:`\Delta \vec{x}` values and the columns represent :math:`\Delta \vec{y}` values. 

If we divide each element in the Differential Profile by the value on :math:`\matr{DP}(F)(\vec{0},\vec{0})`, these values represent the probability of the corresponding output difference :math:`\Delta \vec{y}` value given the input difference :math:`\Delta \vec{x}`, that is :math:`(\Delta \vec{x} \Rightarrow \Delta \vec{y})`, called *characteristic*. In general, entries in the Differential Profile with fewer bits set in the :math:`\Delta \vec{x}` and :math:`\Delta \vec{y}` that have higher probability are desirable.

Let :math:`F \in \funct{F}_{n,m}`, if we denote by :math:`D_F(\vec{u},\vec{v})` the set of vectors where the difference Vector Boolean Function of *F* in the direction of :math:`\vec{u} \in \gf{V_n}` coincides with :math:`\vec{v} \in \gf{V_m}` by: 

.. math::

	D_F(\vec{u},\vec{v}) = \left\{\vec{x} \in \gf{V_n} \given \Delta_{\vec{u}}F(\vec{x}) = \vec{v} \right\} 

Let :math:`F \in \funct{F}_{n,m}` where :math:`n \geq m`. The matrix containing all possible values of :math:`\#D_F(\vec{u},\vec{v})` is referred to as its *XOR or Differential Distribution Table*.

Nyberg in [Nyberg:93]_ introduced the concept of *differential uniformity* as a measure of the resistance to differential crytanalysis as follows:

A Vector Boolean function :math:`F \in \funct{F}_{n,m}` is called differentially :math:`\crit{du}(F)`-uniform if for all :math:`\vec{u} \neq \vec{0} \in \gf{V_n}` and :math:`\vec{v} \in \gf{V_m}`:

.. math::

	\# \left\{ \vec{x} \in \gf{V_n} \given F(\vec{x} + \vec{u}) + F(\vec{x}) = \vec{v} \right\} \leq \crit{du}(F)

Let :math:`\crit{du}(F)` (differential uniformity of *F*) is the largest value in Differential Distribution Table of *F* (not counting the first entry in the first row), namely,

.. math::

	\crit{du}(F) = \max_{(\vec{u},\vec{v}) \neq (\vec{0},\vec{0})} \#D_F(\vec{u},\vec{v}) = \max_{(\vec{u},\vec{v}) \neq (\vec{0},\vec{0})} \#\left\{ \vec{x} \in \gf{V_n} \given F(\vec{x}) + F(\vec{x}+\vec{u}) = \vec{v} \right\} 

Let define the function :math:`\delta_F : \gf{V_n} \times \gf{V_m} \to \bbbq` as: :math:`\delta_F(\vec{u},\vec{v}) = \frac{1}{2^n} \#D_F(\vec{u},\vec{v})`.

The *Differential Profile* of *F* can be represented by a matrix whose rows are indexed by :math:`\vec{u} \in \gf{V_n}` and whose columns are indexed by :math:`\vec{v} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{DP}(F) \in \matr{M}_{2^n \times 2^m}(R)` and defined as follows:

.. math::

	\matr{DP}(F) = 2^{2n+m} \begin{bmatrix}
	\delta_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_0})&\dots&\delta_F(\boldsymbol{\alpha_0},\boldsymbol{\alpha_{2^m-1}}) \\
	\delta_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_0})&\dots&\delta_F(\boldsymbol{\alpha_1},\boldsymbol{\alpha_{2^m-1}}) \\
	\hdotsfor[2]{3} \\
	\delta_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_0})&\dots&\delta_F(\boldsymbol{\alpha_{2^n-1}},\boldsymbol{\alpha_{2^m-1}}) 
	\end{bmatrix} 

The maximum value of :math:`\delta_F(\vec{u},\vec{v})` is called the *differential potential* of *F*:

.. math::

	\crit{dp}(F) =\max \left\{ \delta_F(\vec{u},\vec{v}) \given \fa \vec{u} \in \gf{V_n}, \vec{v} \in \gf{V_m}, (\vec{u},\vec{v}) \neq (\vec{0},\vec{0}) \right\} 

The differential uniformity of :math:`F \in \funct{F}_{n,m}` and its differential potential are related as: :math:`\crit{dp}(F) = \frac{1}{2^n} \crit{du}(F)`.

It is a measure of the robustness against differential cryptanalysis where :math:`2^{-m} \leq \crit{dp}(F) \leq 1` and the lower bound holds if and only if *F* is bent and the upper bound is reached when *F* is linear or affine.  The differential uniformity of :math:`F \in \funct{F}_{n,m}` and its differential potential are related by :math:`\crit{dp}(F) = 2^{-n} \crit{du}(F)`. 

Library
=======

Note that the Differential Profile does not uniquely determine a Vector Boolean function. Thus, a VBF class cannot be initialized by its Differential Profile. To obtain its representation as Differential Profile, the following method must be used:

.. code-block:: c

	void DAT(NTL::mat_ZZ& DP, VBF& F)

In the VBF library, several methods have been defined in order to analyse the feasibility of differential cryptanalysis: Differential potential and Differential relations associated with a specific value of the Differential profile. The method used to obtain the differential potential is the following:

.. code-block:: c

	void dp(NTL::RR& x, VBF& F)

If we want to obtain the characteristics associated with the value of the Differential Profile "w", we will use this method:

.. code-block:: c

	void differential(NTL_SNS ostream& s, VBF& a, ZZ& w)

If we want to obtain the probability that a characteristic :math:`(\Delta \vec{x} \Rightarrow \Delta \vec{y})` holds with the value of the Differential Profile "w", we will use this method:

.. code-block:: c

	void ProbDif(NTL::RR& x, VBF& a, NTL::ZZ& w)

Example
-------

The following program finds out the Differential Profile of a Vector Boolean function together with the characteristics that have the highest value, except from the value in :math:`\matr{DP}(F)(\vec{0},\vec{0})`, their probability, this highest value and the differential potential.

.. code-block:: c

	#include <iostream>
	#include <fstream>
	#include "VBF.h"

	int main(int argc, char *argv[])
	{
	   using namespace VBFNS;

	   VBF          F;
	   NTL::mat_GF2 T;
	   NTL::ZZ      w;
	   NTL::RR      p;

	   ifstream input(argv[1]);
	   if(!input) {
	      cerr << "Error opening " << argv[1] << endl;
	      return 0;
	   }
	   input >> T;
	   F.puttt(T);
	   input.close();

	   cout << "The Differential Profile is:" << endl;
	   cout << DAT(F) << endl;

	   w = maxDAT(F);
	   cout << endl << "The highest value of the Differential Profile is= " 
	   << w << endl;

	   cout << endl << "The characteristics that have the highest value are:" 
	   << endl;
	   differential(cout,F,w);

	   ProbDif(p,F,w);
	   cout << endl << "These expressions hold with probability= " << p << endl;

	   cout << endl << "The differential potential is= " << dp(F) << endl;

	   return 0;
	}

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

	The Differential Profile is:
	[[4096 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
	[0 0 0 512 0 0 0 512 0 512 1024 0 1024 512 0 0]
	[0 0 0 512 0 1536 512 512 0 512 0 0 0 0 512 0]
	[0 0 512 0 512 0 0 0 0 1024 512 0 512 0 0 1024]
	[0 0 0 512 0 0 1536 0 0 512 0 1024 512 0 0 0]
	[0 1024 0 0 0 512 512 0 0 0 1024 0 512 0 0 512]
	[0 0 0 1024 0 1024 0 0 0 0 0 0 512 512 512 512]
	[0 0 512 512 512 0 512 0 0 512 512 0 0 0 0 1024]
	[0 0 0 0 0 0 512 512 0 0 0 1024 0 1024 512 512]
	[0 512 0 0 512 0 0 1024 512 0 512 512 512 0 0 0]
	[0 512 512 0 0 0 0 0 1536 0 0 512 0 0 1024 0]
	[0 0 2048 0 0 512 0 512 0 0 0 0 0 512 0 512]
	[0 512 0 0 512 512 512 0 0 0 0 512 0 1536 0 0]
	[0 1024 0 0 0 0 0 1024 512 0 512 0 512 0 512 0]
	[0 0 512 1024 512 0 0 0 1536 0 0 0 0 0 512 0]
	[0 512 0 0 1536 0 0 0 0 1024 0 512 0 0 512 0]
	]

	The highest value of the Differential Profile is= 2048

	The characteristics that have the highest value are:
	[1 0 1 1]->[0 0 1 0]

	These expressions hold with probability= 0.5

	The differential potential is= 0.5

The figure represents the Differential Profile of *NibbleSub* and emphasizes in blue the elements which achieve the highest value. 

.. image:: /images/DP.png
   :width: 750 px
   :align: center

