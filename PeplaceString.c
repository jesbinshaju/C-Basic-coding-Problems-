#include<stdio.h>
#include<string.h>
int main()
{
    int n1,i;
    char string1[50],string2[50],string3[50];
    printf("Enter dtring: ");
    scanf("%s",string1);

    printf("Enter substring: ");
    scanf("%s",string2);

    printf("Enetr replacement: ");
    scanf("%s",string3);

    n1=strlen(string1);
    int n2=strlen(string2);
    int n3=strlen(string3);



    printf("\n\nOriginal string: %s",string1);

    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]==string2[0])
        {
            if(string1[i+1]==string2[1])
            {
                string1[i]=string3[0];
                string1[i+1]=string3[1];
            }
        }
    }

    printf("\n\n");

    printf("Repalced string: %s\n\n",string1);

}