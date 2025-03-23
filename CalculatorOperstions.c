/*****************************************
experiment no:8
aim:To write a menu driven program to perform calculator operations.
name:Jesbin Shaju 

******************************************/

#include<stdio.h>
int main ()

{

  int choice;
  float number1,number2,number,sum,difference,multiplication,division,square;
   printf("|******************|MENU|*****************| \n");
   printf("1.Addition\n");
   printf("2.Substraction\n");
   printf("3.Multiplication\n");
   printf("4.Division\n");
   printf("5.Square of number\n");
   
     scanf("%i",&choice);
     
     if (choice<=5&&choice>=1)
     {
        printf("Enter number1: \n");
        scanf("%f",&number1);
        printf("Enter number2: \n");
        scanf("%f",&number2);
     }
     
     
     switch(choice)
     {
      case 1 :
              sum=number1+number2;
              printf("Sum: %.2f",sum);
              break;
      case 2 : 
             difference=number1-number2;
             printf("Difference: %.2f",difference);
             break; 
      case 3:
             multiplication=number1*number2;
             printf("Multiplication result: %.2f",multiplication);
             break;
      case 4:
             if(number2==0)
             {
               printf("Invalid input.\n");
             }
             else
            {
             division=number1/number2;
             printf("Division result: %.2f",division);
            }
             break;
            
      case 5:
             {
             square=number1*number1 ;
             printf("Square of number1: %.2f \n",square);
             square=number2*number2 ;
             printf("Square of number2: %.2f\n",square);
             }
             break;
             
                   
                    
      
     }
}
