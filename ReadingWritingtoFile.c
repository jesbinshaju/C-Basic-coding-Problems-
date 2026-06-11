#include<stdio.h>
int main()
{
    FILE*fp;
    char c;

 printf("Enter data to enter : ");
 //opening file
 fp=fopen("INPUT","r");
    //writing c/ontentd=s
    while((c=getchar())!=EOF)
    //writing character to inut
    putc(c,fp);
    fclose(fp);


    printf("Data output : ");
    fp=fopen("INPUT","r");
    while((c=getc(fp))!=EOF)
    printf("%c",c);
    fclose(fp);

    
}