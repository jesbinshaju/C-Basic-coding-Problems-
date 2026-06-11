#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Before sorting: %d %d %d\n", n1, n2, n3);

    // Sorting logic
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        int temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("After sorting: %d %d %d\n", n1, n2, n3);

    return 0;
}

