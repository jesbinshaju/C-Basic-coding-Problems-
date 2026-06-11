#include <stdio.h>

void max(int array[], int n);
void min(int array[], int n);
void repeat(int array[], int n);

int main() {
    int array[40], i, n;

    printf("Enter number of terms in array: ");
    scanf("%d", &n);

    if (n > 40 || n <= 0) {
        printf("Invalid size! Enter a number between 1 and 40.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    max(array, n);
    min(array, n);
    repeat(array, n);

    return 0;
}

void max(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Maximum element is: %d\n", max);
}

void min(int array[], int n) {
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("Minimum element is: %d\n", min);
}

void repeat(int array[], int n) {
    int key, count = 0;

    printf("Enter number to search for occurrences: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            count++;
        }
    }
    printf("Number of occurrences of %d in the array is: %d\n", key, count);
}
