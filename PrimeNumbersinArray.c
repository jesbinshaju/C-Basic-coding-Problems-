/*****************************************
experiment no:15
date:7 nov.2024
aim:To write a c program to read an array of size n and display the prime numbers.
name:Jesbin Shaju 
class:s1 AIML
roll no: 40
******************************************/


#include<stdio.h>
int main()
{
   
   int i,n,prime=0,j;
   
   printf("Enter the number of terms you want to enter: ");
   scanf("%i",&n);
   
   int array[50];
   
   for(i=0;i<n;i++)
   {
     printf("Enter number %i: ",i+1);
     scanf("%i",&array[i]);
   }
   
   printf("Original array is: ");
   
   for(i=0;i<n;i++)
   {
      printf(" %i ",array[i]);
   }
   
   printf("\n");
   
   for(i=0;i<n;i++)
   {
     
       prime=1;
       
        for(j=2;j<array[i];j++)
        {
          if(array[i]%j==0)
          {
            prime=0;
            break;
          }
        }
        
        if(prime && array[i]>1)
        {
          printf("%i is a prime number \n",array[i] );
        }
        
        else 
       {
         printf("%i is not a prime number  \n",array[i]);
       }
        
        
     }
   
   
    
 }  

