#!/bin/bash
read -p "Enter number" number
prime=0
if [ $number -eq 0 ] || [ $number -eq 1 ]
then
	echo "Number is not prime"
	exit
fi

for ((i=2;i<=number/2;i++));
do
	if (( number % i == 0 ));then
		prime=1
		break
	fi
done

if [ $prime -eq 1 ];
then
	echo "Number is not a prime number"
else
	echo "Number is a prime number"
fi


