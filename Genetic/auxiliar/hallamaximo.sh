#!/bin/bash

grep -h "maximum score since initialization" *.txt | cut -d'#'  -f1 | sort -r > max.out

exit 0  
