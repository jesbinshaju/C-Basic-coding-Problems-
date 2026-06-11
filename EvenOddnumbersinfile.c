#include<stdio.h>
int main()
{
    FILE*f1,*f2,*f3; int number,i;
    printf("Enter negative number to stop addding numbers\n");
    printf("ENter the numbers in dATA file: ");
    f1=fopen("INPUT","w");
    for(i=0;i<30;i++){ scanf("%i",&number);if(number<0)break;putw(number,f1);}fclose(f1);
    f1=fopen("INPUT","r");f2=fopen("EVEN","w");f3=fopen("ODD","w");
    while((number=getw(f1))!=EOF){if(number%2==0){putw(number,f2);}
        else {putw(number,f3);}}//Reading the file input odd eve
    fclose(f1);fclose(f2);fclose(f3);
    f2=fopen("ODD","r");f3=fopen("EVEN","r");
    printf("ODD NUMBERS\n");while((number=getw(f2))!=EOF)printf("  %d",number);printf("\n");
    printf("EVEN NUMBERS\n"); while((number=getw(f3))!=EOF)printf("  %d",number);printf("\n");
}