#include<stdio.h>

struct sjf{
	int process;
	int bt;
};

void main(){
    int a,frame,twt,atat;
    printf("SJF\nEnter No Of Process : ");
    scanf("%d",&a);
    struct sjf arr[a];
    int wt[a],tat[a];
    printf("Enter Burst Time :\n");
    for(int i=0;i<a;i++){
        arr[i].process=i+1;
        printf("P[%d] : ",i+1);
        scanf("%d",&arr[i].bt);
    }
    
    for(int i=0;i<(a-1);i++){
    	for(int j=i+1;j<a;j++){
    	    int temp1,temp2;
    	    if(arr[i].bt>arr[j].bt){
    	        temp1=arr[i].process;
    	        temp2=arr[i].bt;
    	        arr[i].process=arr[j].process;
    	        arr[i].bt=arr[j].bt;
    	        arr[j].process=temp1;
    	        arr[j].bt=temp2;
    		}
    	}	 	
    }
    wt[0]=0;
    tat[0]=arr[0].bt;
    for (int i=1;i<a;i++){
        wt[i]=wt[i-1]+arr[i-1].bt;
        tat[i]=tat[i-1]+arr[i].bt;
    }
    
    printf("\nProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<a;i++) {
        printf("P[%d]\t%d\t%d\t%d\n",arr[i].process,arr[i].bt,wt[i],tat[i]);
        twt+=wt[i];
        atat+=tat[i];
    }
    printf("\nAvarage Waiting Time : %f",(twt*1.0)/(a*1.0));
    printf("\nAvarage Turn Around Time : %f\n",(atat*1.0)/(a*1.0));
}
