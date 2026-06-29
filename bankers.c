#include <stdio.h>
int main() {
    // Standard variables: n=processes, m=resources
    int n, m, i, j, k;
    
    // Max size 10x10 to keep it simple
    int alloc[10][10], max[10][10], need[10][10];
    int avail[10], work[10], finish[10], safeSeq[10];
    int count = 0, found;

    printf("Enter number of processes: ");
    scanf("%d", &n);
    
    printf("Enter number of resources: ");
    scanf("%d", &m);

    // 1. Input Allocation Matrix
    printf("Enter Allocation Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &alloc[i][j]);
        }
    }

    // 2. Input Max Matrix
    printf("Enter Max Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    // 3. Input Available Resources
    printf("Enter Available Resources:\n");
    for (j = 0; j < m; j++) {
        scanf("%d", &avail[j]);
    }

    // 4. Calculate Need Matrix (Need = Max - Alloc)
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
        finish[i] = 0; // Initialize finish array to false (0)
    }

    // Initialize Work array = Available array
    for (j = 0; j < m; j++) {
        work[j] = avail[j];
    }

    // 5. Safety Algorithm (The core logic)
    while (count < n) {
        found = 0;
        for (i = 0; i < n; i++) {
            if (finish[i] == 0) { // If process not finished
                int canAllocate = 1;
                // Check if Need <= Work
                for (j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        canAllocate = 0;
                        break;
                    }
                }

                if (canAllocate == 1) {
                    // Process can finish
                    for (k = 0; k < m; k++) {
                        work[k] += alloc[i][k]; // Release resources
                    }
                    safeSeq[count++] = i; // Add to safe sequence
                    finish[i] = 1;        // Mark as finished
                    found = 1;
                }
            }
        }
        // If we went through all processes and found none that can run -> Unsafe
        if (found == 0) {
            printf("\nSystem is in UNSAFE state.\n");
            return 0;
        }
    }

    // If we reach here, system is Safe
    printf("\nSystem is in SAFE state.\nSafe Sequence: ");
    for (i = 0; i < n; i++) {
        printf("P%d ", safeSeq[i]);
    }
    printf("\n");
    return 0;
}