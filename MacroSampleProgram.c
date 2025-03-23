/*****************************************************************
experiment no:21
date:28/11/2024
name: jesbin shaju
class: s1 aiml
roll no: 40
aim: To write a cprogram to find the factorial of a number using recurrsive and non recurrsive functions
******************************************************************/

/*#include<stdio.h>
int fact_recursive(int n);
int fact_iterative(int n);

int main()
{
  int n,choice,result;
  
  printf("\n\n  Available options: \n");
  printf("1. factorial using recurrsive\n");
  printf("2. factorial using iterative function\n");
  
  printf("Enter your choice : ");
  scanf("%i",&choice);
  
  printf("Enter number : ");
  scanf("%d",&n);
  
  if (n<0)
  {
    printf("You have entered a negative number, factorial not possibble");
  }
  
  switch(choice)
  {
    case 1: 
         printf("result of %d ! using recurrsion is %d\n",n,fact_recursive(n));
         break;
         
    case 2: 
      result=fact_iterative(n);
      printf("Result of %d! is %d \n ",n,result);
      break;
  }
  
}



int fact_recursive(int n)
{
  if(n==0)
    return 1;
    
    else
      return n*fact_recursive(n-1);
}


int fact_iterative(int n)
{
  int result=1;
   for(int i=1;i<=n;i++)
    {
      result*=i;
    }
     return result;
}*/









/*****************************************************************
experiment no:22
date:28/11/2024
name: jesbin shaju
class: s1 aiml
roll no: 40
aim: To write a cprogram to find the largest of three numbers using macro
******************************************************************/

#include<stdio.h>

#define MAX (x,y,z) ; if ( x >= y && x >=  z)\
                      printf("%d is the largest \n",x);\
                   if(y>=z && y>=x)\
                      printf("%d is the largest \n", y);\
                   else\
                      printf("%d is the largest \n",z);\
                      
            
             
 int main ()
 {
 
  int x, y,z;
  
   printf("Enter x: ");
   scanf("%i",&x);
   
   printf("Enter y: ");
   scanf("%i",&y);
   
   printf("Enter z: ");
   scanf("%i",&z);
   
   
   MAX(x,y,z);
   
 }
