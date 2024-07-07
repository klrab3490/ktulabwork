#include<stdio.h>
int main()
{
	int n,awt=0,atat=0,i,j;
	printf("FCFS Scheduling Algorithm\nEnter Total Number Of Process : ");
	scanf("%d",&n);
	printf("Enter Process Burst Time : \n");
	int bt[n],wt[n],tu[n];
	for(i=0;i<n;i++) {
		printf("P[%d] : ",i+1); 
		scanf("%d",&bt[i]);
	}    
	wt[0]=0;
	for(i=1;i<n;i++) { 
		wt[i]=0;        
		for(j=0;j<i;j++) { 
			wt[i]=wt[i]+bt[j];
		}
	}    
	printf("\nProcess BT\tWT\tTAT");
	for(i=0;i<n;i++) { 
		tu[i]=bt[i]+wt[i]; 
		awt=awt+wt[i]; 
		atat=atat+tu[i]; 
		printf("\nP[%d]\t%d\t%d\t%d",i+1,bt[i],wt[i],tu[i]);   
	}    
	awt=awt/i;
	atat=atat/i;   
	printf("\n\nAverage Waiting Time : %d",awt);
	printf("\nAverage Turn Around Time : %d\n",atat);    
	return 0;
}
