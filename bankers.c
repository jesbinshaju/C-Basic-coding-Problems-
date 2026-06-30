#include <stdio.h>
int main() {
    // Standard variables: n=processes, m=resources
    int n, m, i, j, k=0;
    
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
    printf("Need Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",need[i][j]);
        }printf("\n");
    }

    int possible=1;
    //Core logic in bankers algorithm
    while(count<n){
        int found=0;
        for(j=0;j<n;j++){
            if(finish[j]==0){
                possible=1;
                for(int r=0;r<m;r++){
                    if(avail[r]<need[j][r]){
                        possible=0;
                        break;
                    }
                }
                if(possible){
                    for(int r=0;r<m;r++){
                        avail[r]=avail[r]+alloc[j][r];
                    }
                    finish[j]=1;
                    safeSeq[k]=j;
                    k++;
                    found=1;
                    count++;
                }
            }
        }
        if(found==0){
            printf("The system is not in Safe State\n");
            break;
        }
    }
    // If we reach here, system is Safe
   if(count==n){ printf("\nSystem is in SAFE state.\nSafe Sequence: ");
    for (i = 0; i < n; i++) {
        printf("P%d ", safeSeq[i]);
    }
}
    printf("\n");
    return 0;
}