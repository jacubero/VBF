#!/bin/bash

for linea in $(cat $1); do
  n=$(echo $linea | cut -d"," -f1)
  m=$(echo $linea | cut -d"," -f2)
  POBLACION=$(echo $linea | cut -d"," -f3)
  GENERACION=$(echo $linea | cut -d"," -f4)
  CROSSOVER=$(echo $linea | cut -d"," -f5)
  MUTACION=$(echo $linea | cut -d"," -f6)
  ../ga_nl_ld.exe $n $m $POBLACION $GENERACION $CROSSOVER $MUTACION > "$n-$m-$POBLACION-$GENERACION-$CROSSOVER-$MUTACION.txt"
done

exit 0  
