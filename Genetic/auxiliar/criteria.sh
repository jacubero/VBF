echo "NL,LD,DEG,AI,MAXAC,sigma,LP,DP"

for file in *.txt
do
tail -n 2 ${file} | head -n 1 > ${file}.bin
../../binario.exe ${file}.bin >> criteria.out
done
