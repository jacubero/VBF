#!/bin/bash

POBLACION=(100 330 1000 3300 10000 33000)
GENERACION=(33 100 330 1000)
CROSSOVER=(0.9 0.3 0.1 0.033 0.01)
MUTACION=(0.33 0.1 0.033 0.01 0.0033 0.001)

for i in ${POBLACION[@]}; do
  for j in ${GENERACION[@]}; do
    for k in ${CROSSOVER[@]}; do
      for l in ${MUTACION[@]}; do
        MATCH=$(ls "$1-$2-$i-$j-$k-$l.txt")
        if [[ -z "$MATCH" ]]; then
          echo "$1,$2,$i,$j,$k,$l" 
        fi
      done
    done
  done
done

exit 0  
