#include<stdio.h>
int main(){
    int i, time, remain, n,flag=0, avgtat=0, avgwt=0 ,tq;
    int at[10],bt[10],rt[10],tat[10],wt[10];
    printf("Enter the number of process: "); 
    scanf("%d",&n);
    remain=n;

    printf("Enter TimeQuantum: "); scanf("%d",&tq);

    for(i=0;i<n;i++){
        printf("Enter the AT[%i]: ",i+1);scanf("%d",&at[i]);
        printf("Enter the BT[%i]: ",i+1);scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }

    printf("PID\tAT\tBT\tCT\tTAT\tWT\t\n");

    for(i=0,time=0;remain!=0;){
        if(tq>=rt[i] && rt[i]>0){
            time+=rt[i];
            rt[i]=0;
            flag=1;
        }
        else if(rt[i]>0){
            rt[i]-=tq;
            time+=tq;
        }
        if(rt[i]==0 && flag==1){
            printf("P[%i]\t%d\t%d\t%d\t%d\t%d\t\n",i+1,at[i],bt[i],time,time-at[i],time-at[i]-bt[i]);
            remain--;
            flag=0;
            avgwt+=time-at[i]-bt[i];
            avgtat+=time-at[i];
        }
        if(i== (n-1)) i=0;
        else if (at[i+1]<=time) i++;
        else i=0;

    }
    printf("Average TAT: %f\n",(float)avgtat/n);
    printf("Average WT : %f\n",(float)avgwt/n); 
    return 0;
}