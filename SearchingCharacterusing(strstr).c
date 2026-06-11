#include<stdio.h>
#include<string.h>
void search(char str1[],char str2[]);
int main(){
  char str1[40],str2[40];
  printf("Enter string 1:  ");gets(str1);
  printf("Enter string 2:  ");gets(str2);
  search(str1,str2);
  return 0;
}
void search(char str1[],char str2[]){
    char *ch;
    int pos;
    ch=strstr(str1,str2);
    pos=ch-str1;
    if(ch!=NULL)printf("%s found at position %d\n",str2,pos);
    else printf("string input not found\n");
}
