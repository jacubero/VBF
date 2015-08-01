#!/bin/bash

#n-m-POBLACION-GENERACION-CROSSOVER-MUTACION

grep "maximum score since initialization" *.txt | cut -d'#' -f1 | tr - , | sed 's/.txt:/,/'

exit 0  
