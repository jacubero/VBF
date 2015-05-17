******************
Linearity distance
******************

\textsl{Linearity distance} defined as the minimum among the linearity
  distances of all nonzero linear combinations of the coordinate functions of
  $F$; it can be computed from the Differential Profile the following way: 
\begin{equation}
\crit{LD}(F) = \min_{\vec{v} \neq \vec{0} \in \gf{V_m}} \crit{LD}(\vec{v} \cdot F)
\end{equation}

This criterion can take values from $0$ to $2^{n-1}-2^{n-m/2-1}$.

The method used to obtain this criterion is the following:

\begin{verbatim}
void ld(NTL::RR& x, VBF& F)
\end{verbatim}

An example of use could be:

\begin{verbatim}
VBF  F;

cout << "Linearity distance: " << ld(F) << endl;

