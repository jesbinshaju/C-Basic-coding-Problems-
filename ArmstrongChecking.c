#include <stdio.h>
#include <math.h>
int main() {
    int count = 0, i, n, org, rem = 0;
    double res = 0.0;

    printf("Enter n: ");scanf("%i", &n);
    if(n==0){printf("Armstrong Number");}

    org = n;//Copying the value to avariable for future comparison

    while (n != 0) {count++; n = n / 10;}//Counting the number of digits

    n = org;
    
    while (n != 0) {
        rem = n % 10;res = res + pow(rem, count); n = n / 10;
    }
    
    if (org == (int)res) printf("Armstrong Number\n");
    else printf("Not armstrong Number\n");}
