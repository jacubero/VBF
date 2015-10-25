**************
Linear Profile
**************

Description
===========

Overview of Linear Cryptanalysis
--------------------------------

The *Linear Cryptanalysis*, introduced by Matsui [Matsui:93]_ [linCaFEAL]_ is a known-plaintext attack based on the idea from [TardyG:91]_. It tries to take advantage of high probability occurrences of linear expressions involving plaintext bits, ciphertext bits, and subkey bits. The basic idea is to approximate the operation of a portion of the cipher with an expression that is linear. Such an expression is of the form:

.. math::
  :label: eq:LinearCrypt

	x_1+x_2+\cdots+x_n+y_1+y_2+\cdots+y_m = 0

where :math:`x_i` represents the *i*-th bit of the input :math:`\vec{x} = (x_1, x_2, \ldots, x_n)` and :math:`y_j` represents the *j*-th bit of the output :math:`\vec{y} = (y_1, y_2, \ldots, y_m)`. As said in [heys-tutorial]_:

*The approach in Linear Cryptanalysis is to determine expressions of the form above which have a high or low probability of occurrence. No obvious linearity such as above should hold for all input and output values or the cipher would be trivially weak. If a cipher displays a tendency for equation `eq:LinearCrypt` to hold with high probability or not hold with high probability, this is evidence of the cipher poor randomization abilities. Consider that if we randomly selected values for $n + m$ bits and placed them into the equation above, the probability that the expression would hold would be exactly :math:`\frac{1}{2}`. It is the deviation or bias from the probability of :math:`\frac{1}{2}` for an expression to hold that is exploited in Linear Cryptanalysis: the further away that a linear expression is from holding with a probability of :math:`\frac{1}{2}`, the better the cryptanalyst is able to apply Linear Cryptanalysis. Usually, the amount by which the probability of a linear expression holding deviates from :math:`\frac{1}{2}` is referred as the linear probability bias. Hence, if the expression above holds with probability :math:`p_L` for randomly chosen plaintexts and the corresponding ciphertexts, then the probability bias is :math:`p_L - \frac{1}{2}`. The higher the magnitude of the probability bias, :math:`\left|p_L - \frac{1}{2}\right|`, the better the applicability of Linear Cryptanalysis with fewer known plaintexts required in the attack.*

*There are several ways to mount the attack of Linear Cryptanalysis (Matsui described 2 algorithms) which use the principle of maximum likelihood. In this thesis, we will focus on what Matsui calls Algorithm 2. We investigate the construction of a linear approximation involving plaintext bits as represented by $\vec{x}$ in equation :eq:`eq:LinearCrypt` and the input to the last round of the cipher as represented by Y in equation :eq:`eq:LinearCrypt` . The plaintext bits are random and consequently so are the input bits to the last round.*

*Equation :eq:`eq:LinearCrypt` could be equivalently reformulated to have the right side being the sum of a number of subkey bits. However, in equation :eq:`eq:LinearCrypt` as written with the right side of 0, the equation implicitly has subkey bits involved: these bits are fixed but unknown (as they are determined by the key under attack) and implicitly absorbed into the 0 on the right side of equation :eq:`eq:LinearCrypt` and the probability :math:`p_L` that the linear expression holds. If the sum of the involved subkey bits is 0, the bias of equation :eq:`eq:LinearCrypt` will have the same sign (*+* or *-*) as the bias of the expression involving the subkey sum and, if the sum of the involved subkey bits is 1, the bias of equation :eq:`eq:LinearCrypt` will have the opposite sign.*

*Note that :math:`p_L = 1` implies that linear expression of equation :eq:`eq:LinearCrypt` is a perfect representation of the cipher behaviour and the cipher has a catastrophic weakness. If :math:`p_L = 0`, then equation :eq:`eq:LinearCrypt` represents an affine relationship in the cipher, also an indication of a catastrophic weakness. Both linear and affine approximations, indicated by :math:`p_L > \frac{1}{2}` and :math:`p_L < \frac{1}{2}`, respectively, are equally susceptible to Linear Cryptanalysis and we shall generally use the term linear to refer to both linear and affine relationships.*

*The natural question to ask is: How do we construct expressions which are highly linear and, hence, can be exploited? This is done by considering the properties of the cipher only nonlinear component: the S-box. When the nonlinearity properties of the S-box are enumerated, it is possible to develop linear approximations between sets of input and output bits in the S-box. Consequently, it is possible to concatenate linear approximations of the S-boxes together so that intermediate bits (i.e., data bits from within the cipher) can be cancelled out and we are left with a linear expression which has a large bias and involves only plaintext and the last round input bits.*

Linear expressions for S-boxes
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The first step to construct a full linear equation to use with Matsui's algorithms is learning how to calculate simple linear expressions and how to determine their biases. Finding linear expressions of S-boxes requires us to find equations involving the input bits and output bits, such as :math:`x_2+x_3=y_1+y_3+y_4`. Since in a :math:`n \times m` S-box there are *n* possible input bits and *m* possible output bits that we may either keep or omit in each linear expression, we then have to look through :math:`2^n \times 2^m` different expressions. Furthermore, we have to try all possible values of the input-output value pairs which is :math:`2^n`. This gives us :math:`2^{2n+m}` operations in total on the S-box. In general, we will want to focus on the values that have a high bias and that involve the least possible number of bits. Involving fewer bits in the input and the output helps us to manage the eventual Linear Cryptanalysis, which is composed of many of the linear expressions built on each other. 

A complete enumeration of all linear approximations of the S-box is given in the *Linear Profile* (In the literature, an equivalent matrix called Linear Approximation Table is used as well), which is a matrix whose rows are indexed by :math:`\vec{u} \in \gf{V_n}` and whose columns are indexed by :math:`\vec{v} \in \gf{V_m}` in lexicographic order, denoted by :math:`\matr{LP}(F) \in \matr{M}_{2^n \times 2^m}(\bbbr)`. It holds that :math:`\matr{LP}(F)(\vec{u},\vec{v}) =|\matr{WS}(F)(\vec{u},\vec{v})|^2`. The lower bound of the Linear Profile values is *0* and the upper bound is :math:`2^{2n}`.

If we divide each element in the Linear Profile by the value on :math:`\matr{LP}(F)(\vec{0},\vec{0})`, these values represent the number of matches between the linear equation represented in hexadecimal as "Input Sum" and the sum of the output bits represented in hexadecimal as "Output Sum". Hence, subtracting to these values :math:`\frac{1}{2}` give the probability bias for the particular linear combination of input and output bits. The hexadecimal value representing a sum, when viewed as a binary value indicates the variables involved in the sum. For a linear combination of input variables represented as :math:`u_1 \cdot x_1+ \cdots +u_n \cdot x_n` where :math:`u_i \in \gf{GF(2)}`, the hexadecimal value represents the binary value :math:`u_1 \ldots u_n`, where :math:`u_1` is the most significant bit. Similarly, for a linear combination of output bits :math:`v_1 \cdot y_1+ \cdots +v_m \cdot y_m` where :math:`v_i \in \gf{GF(2)}`, the hexadecimal value represents the binary vector :math:`v_1 \ldots v_m`. 

In Linear Profiles, we are looking for entries with large value. If all of the entries are small, then the S-box does not have a very linear structure, and it may make Linear Cryptanalysis on the cipher difficult. The *Linear potential* of *F*, defined as :math:`\crit{lp}(F) = \frac{1}{2^{2n}} \cdot \stackrel{*}{\max} \left( {\matr{WS}(F)(\vec{u},\vec{v})}^2 \right)` is a measure of linearity in Linear Cryptanalysis, and satisfies :math:`2^{-n} \leq \crit{lp}(F) \leq 1` so that the lower bound holds if and only if *F* has maximum nonlinearity (*F* is bent) and the upper bound is reached when *F* is linear or affine. This criterion can take values from :math:`\frac{1}{2^n}` to 1. The larger :math:`\crit{lp}(F)` is, the "closer" to a Linear Vector Boolean function is *F*. 

Piling-Up Lemma
^^^^^^^^^^^^^^^

Once we have linear expressions for S-boxes, we need to combine them to perform Linear Cryptanalysis effectively. The effectiveness is defined by the bias of the overall expression constructed by the combination over the rounds of the cipher. Matsui showed in [Matsui:93]_ that the linear expressions "pile-up" in the following way:

Assume that we have $n$ independent linear expressions, say :math:`E_1,\ldots,E_n`, with associated biases :math:`\epsilon_1,\ldots,\epsilon_n`. We also need to assume that the are random, as we have no real preconceptions of their values, and Boolean, so that they output 0 or 1. Then, the bias of an aggregate Boolean Linear expression :math:`E_1+\cdots+E_n` is the expression:

.. math::

\epsilon_{1,\ldots,n} = 2^{n-1} \left( \epsilon_1 \times \cdots \times \epsilon_n \right)

where :math:`\epsilon_{1,\ldots,n}` is the bias of the overall expression :math:`E_1+\cdots+E_n`.

Library
=======

Note that the Linear Profile does not uniquely determine a Vector Boolean function. Thus, a VBF class cannot be initialized by its Linear Profile. To obtain its representation as Linear Profile, the following method must be used:

.. code-block:: c

	void LAT(NTL::mat_ZZ& LP, VBF& F)

In the VBF library, several methods have been defined in order to analyse the feasibility of Linear Cryptanalysis: Linear potential and Linear relations associated with a specific value of the Linear Profile. The method used to obtain the linear potential is the following:

.. code-block:: c

	void lp(NTL::RR& x, VBF& F)

If we want to obtain the linear expressions associated with the value of the Linear Profile "w", we will use this method:

.. code-block:: c

	void linear(NTL_SNS ostream& s, VBF& a, ZZ& w)

If we want to obtain the probability bias :math:`|p_L-\frac{1}{2}|` that a linear expression holds with the value of the Linear Profile "w", we will use this method:

.. code-block:: c

	void ProbLin(NTL::RR& x, VBF& a, NTL::ZZ& w)

Example
-------

The following program finds out the Linear Profile of a Vector Boolean function together with the linear expressions that have the highest value, except from the value in :math:`\matr{LP}(F)(\vec{0},\vec{0})`, their probability, this highest value and the linear potential.

.. code-block:: c

#include <iostream>
#include <fstream>
#include "VBF.h"

int main(int argc, char *argv[])
{
  using namespace VBFNS;

  VBF     F;
  NTL::mat_GF2 T;
  NTL::ZZ   w;
  NTL::RR   bias;

  ifstream input(argv[1]);
  if(!input) {
   cerr << "Error opening " << argv[1] << endl;
   return 0;
  }
  input >> T;
  F.puttt(T);
  input.close();

  cout << "The Linear Profile is:" << endl;
  cout << LAT(F) << endl;

  w = maxLAT(F);
  cout << endl << "The highest value of the Linear Profile is= " 
  << w << endl << endl;

  cout << "The linear expressions that have the highest value are:" 
  << endl;
  linear(cout,F,w);

  ProbLin(bias,F,w);
  cout << endl;
  cout << "These expressions hold with probability bias= " 
  << bias << endl;

  cout << endl << "The linear potential is= " << lp(F) << endl;

  return 0;
}

If we use as input of this program the Truth Table of *NibbleSub*, the output of the program would be the following:

.. code-block:: console

The Linear Profile is:
[[256 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
[0 0 16 16 0 0 16 144 16 16 0 0 16 16 0 0]
[0 0 16 16 0 0 16 16 0 0 16 16 0 0 144 16]
[0 0 0 0 0 0 0 0 16 144 16 16 16 16 16 16]
[0 16 0 16 16 64 16 0 0 16 0 16 16 64 16 0]
[0 16 16 0 16 0 64 16 16 0 64 16 0 16 16 0]
[0 16 16 64 16 0 0 16 0 16 16 64 16 0 0 16]
[0 16 0 16 16 64 16 0 16 0 16 0 64 16 0 16]
[0 0 0 0 0 0 0 0 16 16 16 16 16 16 16 144]
[0 0 16 16 0 0 16 16 64 0 16 16 0 64 16 16]
[0 64 16 16 64 0 16 16 16 16 0 0 16 16 0 0]
[0 64 0 64 64 0 64 0 0 0 0 0 0 0 0 0]
[0 16 64 16 16 0 16 0 16 0 16 64 0 16 0 16]
[0 16 16 0 16 64 0 16 64 16 16 0 16 0 0 16]
[0 16 16 0 16 64 0 16 16 0 0 16 64 16 16 0]
[0 16 64 16 16 0 16 0 0 16 64 16 16 0 16 0]
]

The highest value of the Linear Profile is= 144

The linear expressions that have the highest value are:
x4=y2+y3+y4
x3=y1+y2+y3
x3+x4=y1+y4
x1=y1+y2+y3+y4

These expressions hold with probability bias= 0.0625

The linear potential is= 0.5625

The figure represents the Linear Profile of *NibbleSub* and emphasizes in red the elements which achieve the highest value. 

.. image:: /images/LP.png
   :width: 750 px
   :align: center