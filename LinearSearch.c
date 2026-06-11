#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[50],i,n,key;
    printf("No. of terms: ");scanf("%i",&n);
    for(i=0;i<n;i++){
        printf("Enter element in %i : ",i+1);scanf("%i",&arr[i]);
    }
    printf("enter key to search : ");scanf("%i",&key);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==key)     printf("%i found in position %i",key,i+1);break;
    }printf('\n');
    return 0;
    exit 0;
}
