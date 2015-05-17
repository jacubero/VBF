*****
Trace
*****

A VBF class can be initialized giving its trace *f* and the irreducible polynomial *g* with the following methods:

.. code-block:: c

   void putirrpol(GF2X& g)
   void puttrace(string& f)

To obtain its trace representation, the following method must be used:

.. code-block:: c

   void Trace(GF2EX& f, VBF& F)

When :math:`m=n`, we endow :math:`\gf{V_n}` with the structure of the field :math:`\gf{GF(2^n)}`. Any :math:`F \in \funct{F}_{n,n}` admits a unique *univariate polynomial representation* over :math:`\gf{GF(2^n)}` called trace, of degree at most :math:`2^n-1`:

.. math::
   :nowrap:

   \begin{equation}
      F(\vec{x}) = \sum_{i=0}^{2^n-1} \delta_i x^i, \ \delta_i \in \gf{GF(2^n)}
   \end{equation}

A general way to derive this polynomial representation is given by a Lagrange interpolation from the knowledge of the irreducible polynomial of degree :math:`n` over :math:`\gf{GF(2)}` associated with the field :math:`\gf{GF(2^n)}` and the Truth Table of *F*.

An example of use could be the following:

.. code-block:: c

   VBF  F;
   string       g;
   string       f;

   ifstream input(argv[1]);
   input >> g;
   F.putirrpol(g);
   input.close();

   ifstream input1(argv[2]);
   input1 >> f;
   F.puttrace(f);
   input1.close();

   ofstream output(argv[3]);

   output << Trace(F) << endl;

The resulting trace representation for *S7* is :math:`1x^128+1x^7+1x^2+1x+1`
