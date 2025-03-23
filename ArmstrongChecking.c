#include <stdio.h>
#include <math.h>
int main() {
    int count = 0, i, n, org, rem = 0;//Initializing all the variables
    double res = 0.0;

    printf("Enter n: ");scanf("%i", &n);//Inputting n from the user

    org = n;//Copying the value to avariable for future comparison

    while (n != 0) {count++; n = n / 10;}//Counting the number of digits

    n = org;
    
    while (n != 0) {
        rem = n % 10;res = res + pow(rem, count); n = n / 10;
    }
    
    if (org == (int)res) printf("Armstrong\n");
    else printf("Not armstrong\n");}