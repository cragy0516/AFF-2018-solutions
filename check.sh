#!/bin/bash

if [ "$1" == "" ]; then
	echo "Usage : $0 <challenge_id>"
	exit;
fi

for file in `ls ~/flask-aff/flaskr/files/results | grep result_$1_`; do
	read line < ~/flask-aff/flaskr/files/results/$file
	if [[ "${line}" =~ "correct" ]]; then
		echo "continue"
	else echo $file
	fi
done
