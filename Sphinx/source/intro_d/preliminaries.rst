*************
Preliminaries
*************

The mathematical theory of Vector Boolean Functions starts with the formal definition of vector spaces whose elements (vectors) have binary elements. Let :math:`< \gf{GF(2)}, +, \cdot >` be the finite field of order 2, where :math:`\gf{GF(2)} = \bbbz_2 = \{0,1\}`, :math:`'+'` the 'integer addition modulo 2' and :math:`'\cdot'` the 'integer multiplication modulo 2'. :math:`\gf{V_n}` is the vector space of n-tuples of elements from :math:`\gf{GF(2)}`. The *direct sum* of :math:`\vec{x} \in \gf{V_{n_1}}` and :math:`\vec{y} \in \gf{V_{n_2}}` is defined as :math:`\vec{x} \oplus \vec{y}  = (x_1, \ldots, x_{n_1}, y_1, \ldots, y_{n_2}) \in \gf{V_{n_1+n_2}}`. The *inner product* of :math:`\vec{x},\vec{y} \in \gf{V_n}` is denoted by :math:`\vec{x} \cdot \vec{y}`, and the inner product of real vectors :math:`\vec{x}, \vec{y} \in \bbbr^n` is denoted by :math:`\left\langle\vec{x},\vec{y}\right\rangle`. 

One can now define binary functions between this type of vector spaces, whose linearity analysis (for robustness-against-attacks purposes) will become very important. :math:`f: \gf{V_n} \to \gf{GF(2)}` is called a *Boolean function* and :math:`\funct{F}_n` is the set of all Boolean functions on :math:`\gf{V_n}`. :math:`\funct{L}_n` is the set of all linear Boolean functions on :math:`\gf{V_n}: \funct{L}_n = \{l_{\vec{u}} \  \fa \vec{u} \in \gf{V_n} \given l_{\vec{u}}(\vec{x})=\vec{u} \cdot \vec{x}\}` and :math:`\funct{A}_n` is the set of all affine Boolean functions
on :math:`\gf{V_n}`. 

It is possible to characterize Boolean functions via alternative and very useful associated mappings. In the following, some of these mappings are presented. The real-valued mapping :math:`\chi_{\vec{u}}(\vec{x})={(-1)}^{\sum_{i=1}^{i=n} u_i x_i}={(-1)}^{\vec{u} \cdot \vec{x}}` for :math:`\vec{x}, \vec{u} \in \gf{V_n}` is called a *character*. The character form of :math:`f \in \funct{F}_n` is defined as :math:`\chi_f(\vec{x})=(-1)^{f(\vec{x})}`. The Truth Table of :math:`\chi_f` is called as the *(1,-1)-sequence vector* or *sequence vector* of :math:`f` and is denoted by :math:`\xi_f \in \bbbr^{2^n}`. 

Let :math:`f \in \funct{F}_n` be a Boolean function; the *Walsh Transform* of :math:`f` at :math:`\vec{u} \in \gf{V_n}` is the n-dimensional Discrete Fourier Transform and can be calculated as follows:

.. math::
   :nowrap: 

	\begin{equation}
	   \walsh{\chi}_f(\vec{u}) = \left\langle \xi_f, \xi_{l_{\vec{u}}} \right\rangle = \sum_{\vec{x} \in \gf{V_n}} (-1)^{f(\vec{x}) + \vec{u} \vec{x}} 
	\end{equation}

The *autocorrelation* of :math:`f \in \funct{F}_n` with respect to the shift :math:`\vec{u} \in \gf{V_n}` is a measure of the statistical dependency among the involved variables (indicating robustness against randomness-based attacks). It is the cross-correlation of :math:`f` with itself, denoted by :math:`\R_{f}(\vec{u}): \gf{V_n} \to \bbbz` and defined by [#f1]_:

.. math::
   :nowrap:
 
	\begin{equation}
	   \R_f(\vec{u}) = \sum_{\vec{x} \in \gf{V_n}} \chi_f(\vec{x}) \chi_f(\vec{x}+\vec{u}) = \sum_{\vec{x} \in \gf{V_n}} (-1)^{f(\vec{x})+f(\vec{u}+\vec{x})}
	\end{equation}

The *directional derivative* of :math:`f \in \funct{F}_n` in the direction of :math:`\vec{u} \in \gf{V_n}` is defined by:

.. math::
   :nowrap:

	\begin{equation}
    	   \Delta_{\vec{u}}f(\vec{x}) = f(\vec{x}+\vec{u}) + f(\vec{x}), \  \  \vec{x} \in \gf{V_n}
	\end{equation}

We shall call the linear kernel of :math:`f` the set of those vectors :math:`\vec{u}` such that :math:`\Delta_{\vec{u}}f` is a constant function. The linear kernel of any Boolean function is a subspace of :math:`\gf{V_n}`. Any element :math:`\vec{u}` of the linear kernel of :math:`f` is said to be a linear structure of :math:`f`.

Given :math:`f \in \funct{F}_n`, a nonzero function :math:`g \in \funct{F}_n` is called an *annihilator* of :math:`f` if :math:`fg = 0`.

We now extend the scope of the study by considering functions between any pair of binary-valued vector spaces. :math:`F: \gf{V_n} \to \gf{V_m}, \ F(\vec{x}) = (f_1(\vec{x}),\dots,f_{m}(\vec{x}))` is called a *Vector Boolean function* and :math:`\funct{F}_{n,m}` is the set of all Vector Boolean Functions :math:`F:\gf{V_n} \to \gf{V_m}`. Each :math:`f_i: \gf{V_n} \to \gf{GF(2)} \ \fa i \in \{1, \ldots, m \}` is a coordinate function of :math:`F`. The *indicator function* of :math:`F \in \funct{F}_{n,m}`, denoted by :math:`\theta_F : \gf{V_n} \times \gf{V_m} \to \left\{0,1\right\}`, is defined in [ChabaudV:94]_ as:

.. math::
   :nowrap:
   :label: IndicatorFunction

	\begin{equation}
    	   \theta_F(\vec{x},\vec{y}) = \left\{
	      \begin{array}{ll}
		1 & \mbox{if }\vec{y}=F(\vec{x}) \\
		0 & \mbox{if }\vec{y} \neq F(\vec{x})
	      \end{array}
           \right.
	\end{equation}

Again, several mappings associated with a Vector Boolean Functions can be defined, in similar terms to the binary functions case. Hence, the character form of :math:`(\vec{u},\vec{v}) \in \gf{V_n} \times \gf{V_m}` can be defined as follows: :math:`\chi_{(\vec{u},\vec{v})}(\vec{x},\vec{y}) = {(-1)}^{\vec{u} \cdot \vec{x} + \vec{v} \cdot \vec{y}}`. Similarly, let `F \in \funct{F}_{n,m}` be a Vector Boolean function; its *Walsh Transform* is the two-dimensional Walsh Transform defined by:

.. math::
   :nowrap:
   :label: WalshTransformInnerVector

	\begin{equation}
	   \walsh{\theta}_F(\vec{u}, \vec{v}) = \sum_{\vec{x} \in \gf{V_n}} \sum_{\vec{y} \in \gf{V_m}} \theta_F(\vec{x},\vec{y}) \chi_{(\vec{u},\vec{v})}(\vec{x},\vec{y}) = \sum_{\vec{x} \in \gf{V_n}} (-1)^{\vec{u}\vec{x} + \vec{v} F(\vec{x})} 
	\end{equation}

Also, the *autocorrelation* of :math:`F \in \funct{F}_{n,m}` with respect to the shift :math:`(\vec{u},\vec{v}) \in \gf{V_n} \times \gf{V_m}` is the cross-correlation of :math:`F` with itself, denoted by :math:`\R_F(\vec{u},\vec{v}): \gf{V_n} \times \gf{V_m} \to \bbbz`, so that [fse-Nyberg:94]_:

.. math::
   :nowrap:
   :label: AutocorrelationVBF
 
	\begin{equation}
	   \R_F(\vec{u},\vec{v}) = \sum_{\vec{x} \in \gf{V_n}} \chi_{\vec{v} F}(\vec{x} + \vec{u}) \chi_{\vec{v} F}(\vec{x}) = \sum_{\vec{x} \in \gf{V_n}} (-1)^{\vec{v} F(\vec{x} + \vec{u}) + \vec{v} F(\vec{x})} 
	\end{equation}

Let :math:`F \in \funct{F}_{n,m}$ and $\vec{u} \in \gf{V_n}`, then the *difference Vector Boolean function* of :math:`F` in the direction of :math:`\vec{u} \in \gf{V_n}`, denoted by :math:`\Delta_{\vec{u}}F \in \funct{F}_{n,m}` is defined as follows: :math:`\Delta_{\vec{u}}F(\vec{x})=F(\vec{x}+\vec{u})+F(\vec{x}), \  \vec{x} \in \gf{V_n}`. If the following equality is satisfied:
:math:`\Delta_{\vec{u}}F(\vec{x})=\vec{c}, \  \ \vec{c} \in \gf{V_n} \ \fa \vec{x} \in \gf{V_n}$ then $\vec{u} \in \gf{V_n}` is called a linear structure of :math:`F`. 

Finally, we define the simplifying notation for the maximum of the absolute values of a set of real numbers :math:`\{a_{\vec{u}\vec{v}}\}_{\vec{u},\vec{v}}`, characterized by vectors :math:`\vec{u}` and :math:`\vec{v}`, as: :math:`\max \ (a_{\vec{u}\vec{v}})= \max_{(\vec{u},\vec{v})}\ \{|a_{\vec{u}\vec{v}}|\}`. Using the same simplifying notation, we can define the :math:`\stackrel{*}{\max}(\cdot)` operator on a set of real numbers :math:`\{a_{\vec{u}\vec{v}}\}_{\vec{u},\vec{v}}`, as: :math:`\stackrel{*}{\max}(a_{\vec{u}\vec{v}})=\max_{(\vec{u},\vec{v})\neq(\vec{0},\vec{0})}\{|a_{\vec{u}\vec{v}}|\}`. This notation will be used in some criteria definitions. 

.. rubric:: Footnotes

.. [#f1] Most authors omit the factor :math:`\frac{1}{2^n}`

