#include<stdio.h>

int main()
{
    int i, j, n;
    int at[20], bt[20],visited[20], wt[20], tat[20], ct[20];
    int temp,completed=0;
    float wtavg = 0, tatavg = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter Arrival Time and Burst Time:\n");

    for(i = 0; i < n; i++)
    {
        printf("P%d Arrival Time: ", i + 1);
        scanf("%d", &at[i]);

        printf("P%d Burst Time: ", i + 1);
        scanf("%d", &bt[i]);
        visited[i]=0;
    }

    int time=0;

    while(completed<n){
        int min=9999,index=-1;
        for(int i=0;i<n;i++){
            if(at[i]<=time && !visited[i] && bt[i]<min){
                min=bt[i];
                index=i;
            }
        }
            if(index!=-1){
                visited[index]=1;
                time+=bt[index];
                ct[index]=time;
                completed++;
          
            }
            else time++;
        
    }
    
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for(i = 0; i < n; i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);

        wtavg += wt[i];
        tatavg += tat[i];
    }

    printf("\nAverage Waiting Time = %.2f", wtavg / n);
    printf("\nAverage Turnaround Time = %.2f\n", tatavg / n);

    return 0;

}