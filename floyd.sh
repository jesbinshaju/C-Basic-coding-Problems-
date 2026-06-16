#!/bin/bash
read -p "Enter number : " n
$number=1
for((i=1;i<=$n;i++));
do
    for((j=0;j<=i;j++));
    do
    # if n comes to avoid going to the next  lione afetre each step
        echo -n "$number "
        number=$((number+1))
    done
    echo "" # Printing a new line after each entry
done