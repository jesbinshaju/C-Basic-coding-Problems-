/*****************************************************************
experiment no:18
date:21/11/2024
name: jesbin shaju
class: s1 aiml
roll no: 40
aim: to write a cprogram to check if a string is pallindrome or not
******************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
  char string[40];
  int length,i,flag=1;
  
  printf("Enter the word that has to be checked for pallindrome: ");
  gets(string);
  
  length = strlen(string);
  
  for(i=0; i<length/2; i++)
  {
    if(string[i]!=string[length-i-1])
    {
      flag=0;
       break;
    }
  }  
  
  if(flag==1)
  {
    printf("%s is a pallindrome string",string );
  }
  else
  {
    printf("%s is not a pallindrome string\n", string);
  }
  
}

