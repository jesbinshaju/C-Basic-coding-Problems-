/*****************************************************************
experiment no:19
date:21/11/2024
name: jesbin shaju
class: s1 aiml
roll no: 40
aim: to write a cprogram to read a string and obtain its revese using a user defined function.
******************************************************************/
#include<stdio.h>
#include<string.h>
void reverse(char[]);
int main()
{
  char string[40];  
  
  printf("Enter the word that has to be reversed: ");
  gets(string);
  printf("The original string is: %s\n",string);
  reverse(string);
  printf("The reversed string is: %s\n",string);
  
}

void reverse(char string[])
{
   int length,i,temp;
 
  length= strlen(string);
  
  for(i=0; i<length/2; i++)
  {
    temp = string[i];
    string[i]= string[length-1-i];
    string[length-1-i]= temp;
  }
}


