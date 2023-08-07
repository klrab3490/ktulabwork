#include<stdio.h>

struct priority{
	int process;
	int bt;
	int pri;
};

void main(){
    int a,frame,twt,atat;
    printf("Priority\nEnter No Of Process : ");
    scanf("%d",&a);
    struct priority arr[a];
    int wt[a],tat[a];
    printf("Enter Data :\n");
    for(int i=0;i<a;i++){
        arr[i].process=i+1;
        printf("P[%d] \n BT : ",i+1);
        scanf("%d",&arr[i].bt);
        printf(" Priority : ");
        scanf("%d",&arr[i].pri);
    }
    
    for(int i=0;i<(a-1);i++){
    	for(int j=i+1;j<a;j++){
    	    int temp1,temp2,temp3;
    	    if(arr[i].pri>arr[j].pri){
    	        temp1=arr[i].process;
    	        temp2=arr[i].bt;
    	        temp3=arr[i].pri;
    	        arr[i].process=arr[j].process;
    	        arr[i].bt=arr[j].bt;
    	        arr[i].pri=arr[j].pri;
    	        arr[j].process=temp1;
    	        arr[j].bt=temp2;
    	        arr[j].pri=temp3;
    		}
    	}	 	
    }
    wt[0]=0;
    tat[0]=arr[0].bt;
    for (int i=1;i<a;i++){
        wt[i]=wt[i-1]+arr[i-1].bt;
        tat[i]=tat[i-1]+arr[i].bt;
    }
    
    printf("\nPriority\tProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<a;i++) {
        printf("%d\tP[%d]\t%d\t%d\t%d\n",arr[i].pri,arr[i].process,arr[i].bt,wt[i],tat[i]);
        twt+=wt[i];
        atat+=tat[i];
    }
    printf("\nAvarage Waiting Time : %f",(twt*1.0)/(a*1.0));
    printf("\nAvarage Turn Around Time : %f\n",(atat*1.0)/(a*1.0));
}
