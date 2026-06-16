#!/bin/bash
#Loop forever until the user exits
while true
do
    echo " 1.addition "
    echo " 2.subtraction "
    echo " 3.exit "
    read -p " Enter your choice : " ch

    if [ $ch -eq 3 ];
    then
        echo "Exiting program"
        break
    fi

    read -p "Enter a: " a 
    read -p "Enter b: " b

    case $ch in 
        1) res=$((a+b))
            echo "Result : $res";;

        2) res=$((a-b))
            echo "Result : $res";;

        *) echo "Invalid result";;
    esac
done    
