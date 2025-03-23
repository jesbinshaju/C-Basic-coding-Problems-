/*****************************************
experiment no:5
date:17 oct.2024
aim:To write a c programto swap two numbers using exclusive or operator
name:Jesbin Shaju 
class:s1 AIML
roll no: 40/
******************************************/


#include <stdio.h>
int main()

{
  int number1, number2;
   printf("Enter number1: \n");
   scanf("%i",&number1);
   
   printf("Enter number2: \n");
   scanf("%i",&number2);
   
   printf("Numbers before swapping= number1=%i,number2=%i\n",number1,number2);
   
        number1=number1^number2;
        number2=number1^number2;
        number1=number1^number2;
        
   printf("Numbers after swapping= number1=%i,number2=%i\n",number1,number2);
}
