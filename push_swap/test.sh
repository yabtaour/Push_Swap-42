

while true
do
	ARG=`./gen.py 500`
	RES=`./push_swap $ARG | ./checker_Mac $ARG`
	echo $RES
	if [[ $RES == "KO" ]]
	then
		echo $ARG
	fi
done
