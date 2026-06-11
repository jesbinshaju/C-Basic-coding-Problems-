/*****************************************

date:24 oct.2024
aim:To write a c program to find the sum of first natural numbers using an array.
name:Jesbin Shaju 

******************************************/
#include<stdio.h>
int main()
{
  int n,i,sum=0,array[50];
  printf("Enter the value of n: ");
  scanf("%i",&n);
  
  array[n];
  for(i=0;i<n;i++)
  {
    array[i]=i+1;
  }
  for(i=0;i<n;i++)
  {
    sum=array[i]+sum;
  }
  printf("The sum of natural numbers upto %i is %i \n",n,sum);
}
