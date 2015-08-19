/* ----------------------------------------------------------------------------
  ex1.C
  mbwall 28jul94
  Copyright (c) 1995-1996  Massachusetts Institute of Technology

 DESCRIPTION:
   Example program for the SimpleGA class and 2DBinaryStringGenome class.
This program tries to fill the 2Dgenome with alternating 1s and 0s. 
  This example uses the default crossover (single point), default mutator
(uniform random bit flip), and default initializer (uniform random) for the
2D genome.
  Notice that one-point crossover is not necessarily the best kind of crossover
to use if you want to generate a 'good' genome with this kind of objective 
function.  But it does work.
---------------------------------------------------------------------------- */
#include <ga/GASimpleGA.h>	// we're going to use the simple GA
#include <ga/GA2DBinStrGenome.h> // and the 2D binary string genome
#include <ga/std_stream.h>
#include "VBF.h"

#define cout STD_COUT

float Objective(GAGenome &);	// This is the declaration of our obj function.
				// The definition comes later in the file.

int
main(int argc, char **argv)
{
  int n = 0, m = 0;
  int popsize;
  int ngen;
  float pmut;
  float pcross;

//  cout << "This program tries generate highly nonlinear Boolean functions\n";
//  cout << "using a genetic algorithm\n\n"; cout.flush();

// See if we've been given a seed to use (for testing purposes).  When you
// specify a random seed, the evolution will be exactly the same each time
// you use that seed number.

  for(int ii=1; ii<argc; ii++) {
    if(strcmp(argv[ii++],"seed") == 0) {
      GARandomSeed((unsigned int)atoi(argv[ii]));
    }
  }

  n = atoi(argv[1]);
  m = atoi(argv[2]);
// Declare variables for the GA parameters and set them to some default values.

  int width    = 1 << n;
  int height   = m;
  popsize  = atoi(argv[3]);
  ngen     = atoi(argv[4]);
  pmut   = atof(argv[5]);
  pcross = atof(argv[6]);

// Now create the GA and run it.  First we create a genome of the type that
// we want to use in the GA.  The ga doesn't operate on this genome in the
// optimization - it just uses it to clone a population of genomes.

  GA2DBinaryStringGenome genome(width, height, Objective);

// Now that we have the genome, we create the genetic algorithm and set
// its parameters - number of generations, mutation probability, and crossover
// probability.  And finally we tell it to evolve itself.

  GASimpleGA ga(genome);
  ga.populationSize(popsize);
  ga.nGenerations(ngen);
  ga.pMutation(pmut);
  ga.pCrossover(pcross);
  ga.evolve();

// Now we print out the best genome that the GA found.

  cout << ga.statistics() << "\n";
  cout << ga.statistics().bestIndividual() << "\n";

// That's it!
  return 0;
}
 



// This is the objective function.  All it does is check for alternating 0s and
// 1s.  If the gene is odd and contains a 1, the fitness is incremented by 1.
// If the gene is even and contains a 0, the fitness is incremented by 1.  No
// penalties are assigned. 
//   We have to do the cast because a plain, generic GAGenome doesn't have 
// the members that a GA2DBinaryStringGenome has.  And it's ok to cast it
// because we know that we will only get GA2DBinaryStringGenomes and
// nothing else.

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
