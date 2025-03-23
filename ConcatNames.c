/*****************************************************************

date:21/11/2024
name: jesbin shaju

aim: a c program to read first name and last name and then concatenate.
******************************************************************/

#include<stdio.h>
int main()
{
  int i,len1,len2;
  char name1[500];
  char name2[20];
  
  printf("Enter your first name: ");
  gets(name1);
  printf("Enter your last name: ");
  gets(name2);
  
  for(len1=0; name1[len1]!='\0'; len1++);
  for(len2=0; name2[len2]!='\0';len2++);

  name1[len1]=' ';



  
  for(i=0;i<=len2; i++)
  {
    name1[len1+i+1]=name2[i]; 
  }
  
  printf("Your full name is: %s\n",name1);

  return(0);

}
