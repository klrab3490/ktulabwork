#include<stdio.h>

struct p {
    int process;
    int burst;
};

int main()
{
    int n;
    printf("SJF Scheduling Algorithm\nEnter the no of processes:");
    scanf("%d",&n);
    int wt[n],bt[n],tat[n],ct[n],atat=0,awt=0,temp1=0,temp2=0;
    struct p arr[n];
    printf("Enter the burst time for the processes:\n");
    for(int i=0;i<n;i++)
    {
        printf("P[%d] : ",i+1);
        arr[i].process=i+1;
        scanf("%d",&bt[i]);
        arr[i].burst = bt[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i].burst>arr[j].burst)
            {
                temp1 = arr[i].process;
                temp2 = arr[i].burst;
                arr[i].process = arr[j].process;
                arr[i].burst = arr[j].burst;
                arr[j].process = temp1;
                arr[j].burst = temp2;
            }
        }
    }
    wt[0]=0;
    tat[0]=arr[0].burst;
    atat = arr[0].burst;
    for(int i=1;i<n;i++)
    {
        wt[i] = wt[i-1] + arr[i-1].burst;
        tat[i] = tat[i-1] + arr[i].burst;
        awt = awt + wt[i];
        atat = atat + tat[i];
    }
    atat=atat/n;
    awt=awt/n;
    printf("Process\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
    {
        printf("P%d\t%d\t%d\t%d\n",arr[i].process,arr[i].burst,wt[i],tat[i]);
    }
    printf("Average Waiting Time : %d\n",awt);
    printf("Average Turn Around Time : %d\n",atat);
    return 0;
}
