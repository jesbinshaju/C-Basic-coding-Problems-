
#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char str1[60][60], temp[30];

    printf("Enter the number of names to enter: ");
    scanf("%d", &n);

    // Input names
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", str1[i]);  
    }

    // Display names before sorting
    printf("\nNames (Before sorting):\n");
    for (int i = 0; i < n; i++) {
        printf("Name %d: %s\n", i + 1, str1[i]);
    }

    // Sorting names using bubble sort
    for (int i = 0; i < n - 1; i++) { // Adjust outer loop boundary
        for (int j = 0; j < n - i - 1; j++) { // Adjust inner loop boundary
            if (strcmp(str1[j], str1[j + 1]) > 0) {
                strcpy(temp, str1[j]);
                strcpy(str1[j], str1[j + 1]);
                strcpy(str1[j + 1], temp);
            }
        }
    }

    // Display names after sorting
    printf("\nNames (After sorting):\n");
    for (int i = 0; i < n; i++) {
        printf("Name %d: %s\n", i + 1, str1[i]); // Start from 1
    }

    return 0;
}