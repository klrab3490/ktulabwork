#include<stdio.h>

void main(){
    int a,frame,twt,atat;
    printf("FCFS\nEnter No Of Process : ");
    scanf("%d",&a);
    int bt[a],wt[a],tat[a];
    printf("Enter Burst Time :\n");
    for(int i=0;i<a;i++){
        printf("P[%d] : ",i+1);
        scanf("%d",&bt[i]);
    }
    
    wt[0]=0;
    tat[0]=bt[0];
    for (int i=1;i<a;i++){
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i-1]+bt[i];
    }
    
    printf("\nProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<a;i++) {
        printf("P[%d]\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
        twt+=wt[i];
        atat+=tat[i];
    }
    
    printf("\nAvarage Waiting Time : %f",(twt*1.0)/(a*1.0));
    printf("\nAvarage Turn Around Time : %f\n",(atat*1.0)/(a*1.0));
}
