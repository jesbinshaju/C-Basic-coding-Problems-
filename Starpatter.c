
/*****************************************
experiment no:10
date:24 oct.2024
aim:To write a c program to print a pattern using star symbols.
name:Jesbin Shaju 
class:s1 AIML
roll no: 40/
******************************************/
#include<stdio.h>
int main()
{
  int i=0,j=0,n; 
  printf("Enter number of rows for the pattern:  ");
  scanf("%i",&n);
  
  for(i<=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     if(j>=i)
     {
       printf("*");
     }
     else
     {
       printf(" ");
     }       
       
  }
  printf("\n");
  }
}
