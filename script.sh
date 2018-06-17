#!/bin/bash

if [ "$1" == "" ] || [ "$2" == "" ]; then
	echo "Usage : $0 <challenge_id> <challenge_name>"
	exit;
fi

mkdir $1-$2
cd $1-$2
mkdir intended_solution
mkdir users_solutions

cp ~/solutions/sources/case_$1.c ./intended_solution
cp ~/flask-aff/flaskr/files/src/$1_*.c ./users_solutions
