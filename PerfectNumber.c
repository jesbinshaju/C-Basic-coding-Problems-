#include<stdio.h>
int main()
{ int sum=0,n,i,org;
    printf("Enter n : ");
    scanf("%i",&n);
    org=n;
    for(i=1;i<=n/2;i++){
       if(n%i==0)
        sum=sum+i;}
    if(sum==org)printf("Perfect number\n");
    else printf("Not perfect number");
    
}