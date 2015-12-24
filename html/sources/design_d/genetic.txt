********************************************************
Optimization of Boolean functions via Genetic Algorithms
********************************************************

Description
===========

Galib
-----

The Genetic Algorithm Library called GAlib was (straightforwardly) linked with our VBF library to perform a search of Boolean functions with good combined cryptographic criteria. In using the GAlib library we will work primarily with two classes: a genome and a genetic algorithm. Each genome instance represents a single solution to our optimization problem. The genetic algorithm object defines how the evolution should take place. The genetic algorithm uses an objective function to determine how 'fit' each genome is for survival. It uses the genome operators (built into the genome) and selection/replacement strategies (built into the genetic algorithm) to generate new individuals. 

The following three items must be defined in order to solve an optimization problem using a genetic algorithm: A representation, the genetic operators and the objective function.

The *genetic algorithm* object determines which individuals should survive, which should reproduce, and which should die. It also records statistics and decides how long the evolution should continue. The algorithm updates the population of solutions over a number of iterations (or generations*). We have used the number of generations as a stopping measure. In each iteration a number of steps are involved:

1. Selection of parents from the current population of solutions.

2. Crossover of parents to produce offspring.

3. Mutation of the offspring.

4. Selection from the mutated offspring and the current population of solutions to determine the population of solutions for the next iteration.

Among the many different types of genetic algorithms offered by GAlib we have chosen the standard 'simple genetic algorithm' described by Goldberg in his book [Goldberg:1989]_. This algorithm uses non-overlapping populations and optional elitism. Each generation the algorithm creates an entirely new population of individuals.

Representation
--------------

When you use a genetic algorithm to solve an optimization problem, you must be able to represent a single solution to your problem in a single *data structure*. The genetic algorithm will create a population of solutions based on a sample data structure that you provide. The genetic algorithm then operates on the population to evolve the best solution. In GAlib, the sample data structure is called a GAGenome (some people refer to it as a chromosome). We have used a type of genome called GA2DBinaryStringGenome. This class is derived from the base GAGenome class and a data structure class which consists of a 2-dimensional array of Boolean with :math:`2^n` elements (the binary string is the Truth Table of the Boolean function).  

Genetic operators
-----------------

Each genome has three primary *operators*: initialization, mutation, and crossover. With these operators you can bias an initial population, define a mutation or crossover specific to our representation, or evolve parts of the genetic algorithm as our population evolves. 

The *initialization operator* determines how the genome is initialized. It is called when you initialize a population or the genetic algorithm. This operator does not actually create new genomes, rather it 'stuffs' the genomes with the primordial genetic material from which all solutions will evolve. We have used a uniform random initialization operator.  

The *mutation operator* defines the procedure for mutating each genome. The mutation operation introduces randomness to the population of solutions. Mutation is generally applied to the children which result from the breeding process. We have used the typical mutator for a binary string genome which flips the bits in the string with a given probability (uniform random bit flip).  

The *crossover operator* defines the procedure for generating a child from two parent genomes in order to obtain offspring. The crossover operation involves selecting two "parents" from the current population of solutions, picking a random point in the binary string representing each of the parents and swapping the values beyond that point between the two parents. This process results in two "children" with some characteristics of each of the parents.

Weighted Objective Functions
----------------------------

In addition to the three primary operators, each genome must also contain an *Objective Function*. The Objective Function is used to evaluate the
genome in order to know how good it is compared to the other genomes. Several objective functions were employed gradually involving more criteria in a weighted manner:

1. Nonlinearity of the Boolean function: :math:`\crit{NL}(f)`. This cryptographic criterion is represented by a locally smooth fitness
function:

.. math::

	o_1 = \crit{NL}(f)

2. The sum of the nonlinearity and linearity distance of the Boolean function, normalized with respect to their (a priori known) maximum values:  

.. math::

	o_2 = \frac{\crit{NL}(f)}{maxNL} + \frac{\crit{LD}(f)}{maxLD}

where *maxNL* and *maxLD* are the maximum values of nonlinearity and linearity distance which can be achieved by a Boolean function with the same number of input variables as *f* respectively. 

3. The sum of nonlinearity, algebraic degree and linearity distance of the Boolean function normalized with respect to their (a priori known) maximum values:

.. math::

	o_3 =  \frac{\crit{NL}(f)}{maxNL} + \frac{\crit{deg}(f)}{maxDEG} + \frac{\crit{LD}(f)}{maxLD}

where *maxNL*, *maxDEG* and *maxLD* are respectively the maximum values of nonlinearity, algebraic degree and linearity distance which can be achieved by a Boolean function with the same number of input variables as *f*.

4. The sum of nonlinearity, algebraic degree, algebraic immunity and linearity distance of the Boolean function normalized with respect to their (a priori known) maximum values:

.. math::

	o_4 = \frac{\crit{NL}(f)}{maxNL} + \frac{\crit{deg}(f)}{maxDEG} + \frac{\crit{AI}(f)}{maxAI} + \frac{\crit{LD}(f)}{maxLD} 

where *maxNL*, *maxDEG*, *maxAI* and *maxLD* are respectively the maximum values of nonlinearity, algebraic degree, algebraic immunity and linearity distance which can be achieved by a Boolean function with the same number of input variables as *f*.

5. The sum of nonlinearity, algebraic degree, algebraic immunity and linearity distance of the Boolean function normalized with respect to their (a priori known) maximum values:

.. math::

	o_5 = \frac{\crit{NL}(f)}{maxNL} + \frac{\crit{deg}(f)}{maxDEG} + \frac{\crit{AI}(f)}{maxAI} + \frac{\crit{LD}(f)}{maxLD} + \frac{2^{3n}-\sigma(f)}{max\sigma-min\sigma}

where *maxNL*, *maxDEG*, *maxAI*, *maxLD*, :math:`max\sigma` are respectively the maximum values of nonlinearity, algebraic degree, algebraic immunity, linearity distance and sum-of-square indicator which can be achieved by a Boolean function with the same number of input variables as $f$; and :math:`min\sigma` is the minimum value of the sum-of-square indicator achievable by a Boolean function with the same number of input variables as *f*. 

Implementation
==============

In order to use Galib library, the installation instructions described in `Installation Instructions for GAlib <http://lancet.mit.edu/galib-2.4/Installation.html>`_ must be followed. Once Galib is installed, we can use this library in conjunction with VBF library by using the following Makefile:

.. code-block:: c

	include makevars

	############# User settings ######################

	# set your C++ compiler and options here...
	GPP=g++
	LIBS=-lntl
	NTLINC= -I/usr/local/include -L/usr/local/lib
	GA_LIB_DIR= ga
	LIB_DIRS= -L$(GA_LIB_DIR)

	############# End of user settings ###############

	o1: o1.cpp VBF.h
	        $(GPP) $(NTLINC) -Wall o1.cpp -o o1.exe $(LIBS) $(LIB_DIRS) -lga

	o2: o2.cpp VBF.h
	        $(GPP) $(NTLINC) -Wall o2.cpp -o o2.exe $(LIBS) $(LIB_DIRS)  -lga

	o3: o3.cpp VBF.h
	        $(GPP) $(NTLINC) -Wall o3.cpp -o o3.exe $(LIBS) $(LIB_DIRS) -lga

	o4: o4.cpp VBF.h
	        $(GPP) $(NTLINC) -Wall o4.cpp -o o4.exe $(LIBS) $(LIB_DIRS) -lga

	o5: o5.cpp VBF.h
	        $(GPP) $(NTLINC) -Wall o5.cpp -o o5.exe $(LIBS) $(LIB_DIRS) -lga

	clean:
	        rm -f *.exe

Note that a file called "makevars" must be present in the same directory as the Makefile file.

Example program for each of the objective functions could be the following:

.. code-block:: c
   :caption: o1.cpp
   :name: o1.cpp

	#include <ga/GASimpleGA.h>	// we're going to use the simple GA
	#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
	#include <ga/std_stream.h>
	#include "VBF.h"

	#define cout STD_COUT

	float Objective(GAGenome &);	// This is the declaration of our obj function.

	int
	main(int argc, char **argv)
	{
	  int n = 0, m = 0;
	  int popsize;
	  int ngen;
	  float pmut;
	  float pcross;

      // We generate random seed

	  for(int ii=1; ii<argc; ii++) {
	    if(strcmp(argv[ii++],"seed") == 0) {
	      GARandomSeed((unsigned int)atoi(argv[ii]));
	    }
	  }

	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  int width    = 1 << n;
	  int height   = m;
	  popsize  = atoi(argv[3]);
	  ngen     = atoi(argv[4]);
	  pmut   = atof(argv[5]);
	  pcross = atof(argv[6]);

	  GA2DBinaryStringGenome genome(width, height, Objective);

	  GASimpleGA ga(genome);
	  ga.populationSize(popsize);
	  ga.nGenerations(ngen);
	  ga.pMutation(pmut);
	  ga.pCrossover(pcross);
	  ga.evolve();

	// Now we print out the best genome that the GA found.

	  cout << ga.statistics() << "\n";
	  cout << ga.statistics().bestIndividual() << "\n";

	  return 0;
	}
	 
	float
	Objective(GAGenome& g) {

	  using namespace VBFNS;

	  VBF F;
	  NTL::mat_GF2 T;
	  NTL::RR nonlin;
	  long spacen, m;

	  GA2DBinaryStringGenome & genome = (GA2DBinaryStringGenome &)g;
	  float score=0.0;

	  spacen = genome.width();
	  m = genome.height();

	  T.SetDims(spacen,m);
	  for(int i=0; i<spacen; i++){
	    for(int j=0; j<m; j++){
	      T[i][j] = to_GF2(genome.gene(i,j));
	    }
	  }

	  F.puttt(T);
	  nonlin = nl(F);
	  conv(score,nonlin);

	  return score;
	}

.. code-block:: c
   :caption: o2.cpp
   :name: o2.cpp

	#include <ga/GASimpleGA.h>	// we're going to use the simple GA
	#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
	#include <ga/std_stream.h>
	#include "VBF.h"

	#define cout STD_COUT

	float Objective(GAGenome &);	// This is the declaration of our obj function.

	int
	main(int argc, char **argv)
	{
	  int n = 0, m = 0;
	  int popsize;
	  int ngen;
	  float pmut;
	  float pcross;

      // We generate random seed

	  for(int ii=1; ii<argc; ii++) {
	    if(strcmp(argv[ii++],"seed") == 0) {
	      GARandomSeed((unsigned int)atoi(argv[ii]));
	    }
	  }

	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  int width    = 1 << n;
	  int height   = m;
	  popsize  = atoi(argv[3]);
	  ngen     = atoi(argv[4]);
	  pmut   = atof(argv[5]);
	  pcross = atof(argv[6]);

	  GA2DBinaryStringGenome genome(width, height, Objective);

	  GASimpleGA ga(genome);
	  ga.populationSize(popsize);
	  ga.nGenerations(ngen);
	  ga.pMutation(pmut);
	  ga.pCrossover(pcross);
	  ga.evolve();

	// Now we print out the best genome that the GA found.

	  cout << ga.statistics() << "\n";
	  cout << ga.statistics().bestIndividual() << "\n";

	  return 0;
	}
	 
	float
	Objective(GAGenome& g) {

	  using namespace VBFNS;

	  VBF F;
	  NTL::mat_GF2 T;
	  NTL::RR nonlin, lind, suma, nlm, ldm;
	  long spacen, m;

	  GA2DBinaryStringGenome & genome = (GA2DBinaryStringGenome &)g;
	  float score=0.0;

	  spacen = genome.width();
	  m = genome.height();

	  T.SetDims(spacen,m);
	  for(int i=0; i<spacen; i++){
	    for(int j=0; j<m; j++){
	      T[i][j] = to_GF2(genome.gene(i,j));
	    }
	  }

	  F.puttt(T);
	  nonlin = nl(F);
	  lind = ld(F);
	  nlm = nlmax(F);
	  ldm = ldmax(F);

	  suma = nonlin/nlm+lind/ldm;
	  conv(score,suma);

	  return score;
	}

.. code-block:: c
   :caption: o3.cpp
   :name: o3.cpp

	#include <ga/GASimpleGA.h>	// we're going to use the simple GA
	#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
	#include <ga/std_stream.h>
	#include "VBF.h"

	#define cout STD_COUT

	float Objective(GAGenome &);	// This is the declaration of our obj function.

	int
	main(int argc, char **argv)
	{
	  int n = 0, m = 0;
	  int popsize;
	  int ngen;
	  float pmut;
	  float pcross;

      // We generate random seed

	  for(int ii=1; ii<argc; ii++) {
	    if(strcmp(argv[ii++],"seed") == 0) {
	      GARandomSeed((unsigned int)atoi(argv[ii]));
	    }
	  }

	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  int width    = 1 << n;
	  int height   = m;
	  popsize  = atoi(argv[3]);
	  ngen     = atoi(argv[4]);
	  pmut   = atof(argv[5]);
	  pcross = atof(argv[6]);

	  GA2DBinaryStringGenome genome(width, height, Objective);

	  GASimpleGA ga(genome);
	  ga.populationSize(popsize);
	  ga.nGenerations(ngen);
	  ga.pMutation(pmut);
	  ga.pCrossover(pcross);
	  ga.evolve();

	// Now we print out the best genome that the GA found.

	  cout << ga.statistics() << "\n";
	  cout << ga.statistics().bestIndividual() << "\n";

	  return 0;
	}
	 
	float
	Objective(GAGenome& g) {

	  using namespace VBFNS;

	  VBF F;
	  NTL::mat_GF2 T;
	  NTL::RR nonlin, lind, suma, nlm, ldm;
	  long spacen, m;
	  int d, n;

	  GA2DBinaryStringGenome & genome = (GA2DBinaryStringGenome &)g;
	  float score=0.0;

	  spacen = genome.width();
	  m = genome.height();

	  T.SetDims(spacen,m);
	  for(int i=0; i<spacen; i++){
	    for(int j=0; j<m; j++){
	      T[i][j] = to_GF2(genome.gene(i,j));
	    }
	  }

	  F.puttt(T);
	  nonlin = nl(F);
	  lind = ld(F);
	  nlm = nlmax(F);
	  ldm = ldmax(F);
	  d = deg(F);
	  n = logtwo(spacen);

	  suma = nonlin/nlm+lind/ldm+to_RR(d)/to_RR(n);
	  conv(score,suma);

	  return score;
	}

.. code-block:: c
   :caption: o4.cpp
   :name: o4.cpp

	#include <ga/GASimpleGA.h>	// we're going to use the simple GA
	#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
	#include <ga/std_stream.h>
	#include "VBF.h"

	#define cout STD_COUT

	float Objective(GAGenome &);	// This is the declaration of our obj function.

	int
	main(int argc, char **argv)
	{
	  int n = 0, m = 0;
	  int popsize;
	  int ngen;
	  float pmut;
	  float pcross;

      // We generate random seed

	  for(int ii=1; ii<argc; ii++) {
	    if(strcmp(argv[ii++],"seed") == 0) {
	      GARandomSeed((unsigned int)atoi(argv[ii]));
	    }
	  }

	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  int width    = 1 << n;
	  int height   = m;
	  popsize  = atoi(argv[3]);
	  ngen     = atoi(argv[4]);
	  pmut   = atof(argv[5]);
	  pcross = atof(argv[6]);

	  GA2DBinaryStringGenome genome(width, height, Objective);

	  GASimpleGA ga(genome);
	  ga.populationSize(popsize);
	  ga.nGenerations(ngen);
	  ga.pMutation(pmut);
	  ga.pCrossover(pcross);
	  ga.evolve();

	// Now we print out the best genome that the GA found.

	  cout << ga.statistics() << "\n";
	  cout << ga.statistics().bestIndividual() << "\n";

	  return 0;
	}
	 
	float
	Objective(GAGenome& g) {

	  using namespace VBFNS;

	  VBF F;
	  NTL::mat_GF2 T;
	  NTL::RR nonlin, lind, suma, nlm, ldm;
	  long spacen, m;
	  int d, n, ai, maxai;

	  GA2DBinaryStringGenome & genome = (GA2DBinaryStringGenome &)g;
	  float score=0.0;

	  spacen = genome.width();
	  m = genome.height();

	  T.SetDims(spacen,m);
	  for(int i=0; i<spacen; i++){
	    for(int j=0; j<m; j++){
	      T[i][j] = to_GF2(genome.gene(i,j));
	    }
	  }

	  F.puttt(T);
	  nonlin = nl(F);
	  lind = ld(F);
	  nlm = nlmax(F);
	  ldm = ldmax(F);
	  d = deg(F);
	  n = logtwo(spacen);
	  ai = AI(F);
	  maxai = aimax(F);

	  suma = nonlin/nlm+lind/ldm+to_RR(d)/to_RR(n)+to_RR(ai)/to_RR(maxai);
	  conv(score,suma);

	  return score;
	}

.. code-block:: c
   :caption: o5.cpp
   :name: o5.cpp

	#include <ga/GASimpleGA.h>	// we're going to use the simple GA
	#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
	#include <ga/std_stream.h>
	#include "VBF.h"

	#define cout STD_COUT

	float Objective(GAGenome &);	// This is the declaration of our obj function.

	int
	main(int argc, char **argv)
	{
	  int n = 0, m = 0;
	  int popsize;
	  int ngen;
	  float pmut;
	  float pcross;

      // We generate random seed

	  for(int ii=1; ii<argc; ii++) {
	    if(strcmp(argv[ii++],"seed") == 0) {
	      GARandomSeed((unsigned int)atoi(argv[ii]));
	    }
	  }

	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  int width    = 1 << n;
	  int height   = m;
	  popsize  = atoi(argv[3]);
	  ngen     = atoi(argv[4]);
	  pmut   = atof(argv[5]);
	  pcross = atof(argv[6]);

	  GA2DBinaryStringGenome genome(width, height, Objective);

	  GASimpleGA ga(genome);
	  ga.populationSize(popsize);
	  ga.nGenerations(ngen);
	  ga.pMutation(pmut);
	  ga.pCrossover(pcross);
	  ga.evolve();

	// Now we print out the best genome that the GA found.

	  cout << ga.statistics() << "\n";
	  cout << ga.statistics().bestIndividual() << "\n";

	  return 0;
	}
	 
	float
	Objective(GAGenome& g) {

	  using namespace VBFNS;

	  VBF F;
	  NTL::mat_GF2 T;
	  NTL::RR nonlin, lind, suma, nlm, ldm;
	  NTL::ZZ s, smin, smax;
	  long spacen, m;
	  int d, n, ai, maxai;

	  GA2DBinaryStringGenome & genome = (GA2DBinaryStringGenome &)g;
	  float score=0.0;

	  spacen = genome.width();
	  m = genome.height();

	  T.SetDims(spacen,m);
	  for(int i=0; i<spacen; i++){
	    for(int j=0; j<m; j++){
	      T[i][j] = to_GF2(genome.gene(i,j));
	    }
	  }

	  F.puttt(T);
	  nonlin = nl(F);
	  lind = ld(F);
	  nlm = nlmax(F);
	  ldm = ldmax(F);
	  d = deg(F);
	  n = logtwo(spacen);
	  ai = AI(F);
	  maxai = aimax(F);
	  s = sigma(F);
	  smin = sigmamin(F);
	  smax = sigmamax(F);

	  suma = nonlin/nlm+lind/ldm+to_RR(d)/to_RR(n)+to_RR(ai)/to_RR(maxai)+1.0-(to_RR(s-smin)/to_RR(smax-smin));
	  conv(score,suma);

	  return score;
	}

The following program illustrates how can be set the seed (included in a file called "seed.bin" with the binary representation of the Truth Table of the function) of the Genetic algorithm for the o4 objective function:

.. code-block:: c

	#include <ga/GASimpleGA.h>	// we're going to use the simple GA
	#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
	#include <ga/std_stream.h>
	#include "VBF.h"

	#define cout STD_COUT

	float Objective(GAGenome &);	// This is the declaration of our obj function.

	int
	main(int argc, char **argv)
	{
	  int n = 0, m = 0;
	  int popsize;
	  int ngen;
	  float pmut;
	  float pcross;

	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  int width    = 1 << n;
	  int height   = m;
	  popsize  = atoi(argv[3]);
	  ngen     = atoi(argv[4]);
	  pmut   = atof(argv[5]);
	  pcross = atof(argv[6]);

	  GA2DBinaryStringGenome genome(width, height, Objective);

	  ifstream inStream("seed.bin");
	  if(!inStream){
	    cerr << "Cannot open " << "seed.bin" << " for input.\n";
	    exit(1);
	  }
	  inStream >> genome;
	  inStream.close();

	  GASimpleGA ga(genome);
	  ga.populationSize(popsize);
	  ga.nGenerations(ngen);
	  ga.pMutation(pmut);
	  ga.pCrossover(pcross);
	  ga.evolve();

	// Now we print out the best genome that the GA found.

	  cout << ga.statistics() << "\n";
	  cout << ga.statistics().bestIndividual() << "\n";

	  return 0;
	}
	 
	float
	Objective(GAGenome& g) {

	  using namespace VBFNS;

	  VBF F;
	  NTL::mat_GF2 T;
	  NTL::RR nonlin, lind, suma, nlm, ldm;
	  long spacen, m;
	  int d, n, ai, maxai;

	  GA2DBinaryStringGenome & genome = (GA2DBinaryStringGenome &)g;
	  float score=0.0;

	  spacen = genome.width();
	  m = genome.height();

	  T.SetDims(spacen,m);
	  for(int i=0; i<spacen; i++){
	    for(int j=0; j<m; j++){
	      T[i][j] = to_GF2(genome.gene(i,j));
	    }
	  }

	  F.puttt(T);
	  nonlin = nl(F);
	  lind = ld(F);
	  nlm = nlmax(F);
	  ldm = ldmax(F);
	  d = deg(F);
	  n = logtwo(spacen);
	  ai = AI(F);
	  maxai = aimax(F);

	  suma = nonlin/nlm+lind/ldm+to_RR(d)/to_RR(n)+to_RR(ai)/to_RR(maxai);
	  conv(score,suma);

	  return score;
	}
