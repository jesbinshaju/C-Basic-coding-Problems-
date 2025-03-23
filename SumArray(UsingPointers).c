/*****************************************************************

name: jesbin shaju
aim: To write a C program to display elements in an array using pointers and compute
the sum of elements using pointers and user-defined functions
******************************************************************/

#include<stdio.h>

void input(int *p, int index);
void output(int *p, int index);
void addSum(int *p, int index, int *sum);

int main() {

    int i, n, sum = 0;
    int array[40];
    int *p;
   
    p = array;

    printf("Enter the number of terms in array: ");
    scanf("%d", &n);

    // Input the elements
    for (i = 0; i < n; i++) {
        input(p, i);
        printf("\n");
    }

    // Output the elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        output(p, i);
        printf("\n");
    }

    // Calculate the sum
    for (i = 0; i < n; i++) {
        addSum(p, i, &sum);
    }

    printf("\n\nSum of the elements of the array: %d\n", sum);

    return 0;
}

void input(int *p, int index) {
    printf("Enter number %d: ", index + 1);
    scanf("%d", (p + index));
}

void output(int *p, int index) {
    printf("%d ", *(p + index));
}

void addSum(int *p, int index, int *sum) {
    *sum += *(p + index);
}
