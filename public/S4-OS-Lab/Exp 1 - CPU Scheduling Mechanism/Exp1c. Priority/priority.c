#include<stdio.h>

struct p {
    int process;
    int burst;
    int priority;       
};

int main()
{
    int n;
    printf("Priority Scheduling Algorithm\nEnter the no of processes:");
    scanf("%d",&n);
    int wt[n],bt[n],tat[n],atat=0,awt=0,temp1=0,temp2=0,temp3=0;
    struct p arr[n];
    printf("Enter the burst time & priority for the processes:\n");
    for(int i=0;i<n;i++)
    {
        printf("P[%d] : ",i+1);
        arr[i].process=i+1;
        scanf("%d",&bt[i]);
        arr[i].burst = bt[i];
        printf("Priority : ");
        scanf("%d",&arr[i].priority);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i].priority>arr[j].priority)
            {
                temp1 = arr[i].process;
                temp2 = arr[i].burst;
                temp3 = arr[i].priority;
                arr[i].process = arr[j].process;
                arr[i].burst = arr[j].burst;
                arr[i].priority = arr[j].priority;
                arr[j].process = temp1;
                arr[j].burst = temp2;
                arr[j].priority =temp3;
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
    printf("\tPriorityProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
    {
        printf("\t%d  \tP%d\t%d\t%d\t%d\n",arr[i].priority,arr[i].process,arr[i].burst,wt[i],tat[i]);
    }
    printf("Average Waiting Time : %d\n",awt);
    printf("Average Turn Around Time : %d\n",atat);
    return 0;
}
