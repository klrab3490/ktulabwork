#include<stdio.h>

void main(){
    int a,frame,twt,atat,qt;
    printf("Round Robin\nEnter No Of Process : ");
    scanf("%d",&a);
    int bt[a],cbt[a],wt[a],tat[a];
    printf("Enter Burst Time :\n");
    for(int i=0;i<a;i++){
        printf("P[%d] : ",i+1);
        scanf("%d",&bt[i]);
        cbt[i]=bt[i];
    }
    printf("Enter Quantum Time : ");
    scanf("%d",&qt);
      
    printf("\nProcess\tBT\tWT\tTAT\n");
    int x=a;
    int i=0,sum=0,flag=0,temp1=0,temp2=0;
    while(x!=0){
    	if (cbt[i]<=qt && cbt[i]>0) {
    	    sum+=cbt[i];
    	    cbt[i]=0;
    	    flag=1;
    	}
    	else if (cbt[i]>0){
    	    cbt[i]-=qt;
    	    sum+=qt;
    	}
    	
    	if (cbt[i]==0 && flag==1) {
    	    printf("P[%d]\t%d\t%d\t%d\n",i+1,bt[i],sum-bt[i],sum);
    	    x--;
    	    twt+=(sum-bt[i]);
    	    atat+=sum;
    	    flag=0;
    	}
    	
    	if (i==a-1){
    	    i=0;
    	}
    	else{
    	    i++;
    	}
    }
    
    printf("\nAvarage Waiting Time : %f",(twt*1.0)/(a*1.0));
    printf("\nAvarage Turn Around Time : %f\n",(atat*1.0)/(a*1.0));
}
