#include<stdio.h>
int main(){
    int arr[50],i,n,key;
    printf("No. of terms: ");scanf("%i",&n);
    for(i=0;i<n;i++){
        printf("ENtr element in %i : ",i+1);scanf("%i",&arr[i]);
    }
    printf("entr key : ");scanf("%i",&key);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==key)     printf("%i found in position %i",key,i+1);
    }printf('\n');
}