#include <stdio.h>
int main()
{
	int n,bt[10],i,temp[10],a=0,b=0,flag=0,at[10],sum,quantum;
	float avgw=0,avgt=0;
	printf("Round Robin Scheduling Algorithm\nEnter the no of process : ");
	scanf("%d",&n);
	int x=n;
	for(i=0;i<n;i++){
		printf("Enter the burst time P%d: ",i+1);
		scanf("%d",&bt[i]);
		temp[i]=bt[i];
		at[i]=0;
	}
	printf("Enter the time quantum:");
	scanf("%d",&quantum);
	printf("\nprocess\tBT\tWT\tTAT\n");
	i=0;
	sum=0;
	while(x!=0){
		if(temp[i]<=quantum && temp[i]>0){
			sum=sum+temp[i];
			temp[i]=0;
			flag=1;
		}
		else if(temp[i]>0){
			temp[i]=temp[i]-quantum;
			sum=sum+quantum;
		}
		if(temp[i]==0 && flag==1){
			printf("P[%d]\t%d\t%d\t%d\n",i+1,bt[i],sum-bt[i],sum);
			x--;
			a=a+(sum-bt[i]);
			b=b+sum;
			flag=0;
		}
		if(i==n-1)
			i=0;
		else if(at[i]<=sum)
			i++;
		else
			i=0;
	}
	printf("\n");
	avgw=a/(n*1.0);
	avgt=b/(n*1.0);
	printf("\n");
	printf("Average Turnaround time = %f\n",avgt);
	printf("Average Waiting time =%f\n",avgw);
}