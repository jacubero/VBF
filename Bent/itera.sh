#!/bin/bash

for linea in $(cat $1); do
  echo '$'$linea'$'
  echo
done

exit 0  
