#include<stdio.h>


void main(){
    int rows,col;
	printf("Banker's Algorithm\n Enter No. of Process : ");
	scanf("%d",&rows);
	printf("Enter No. of Resource : ");
	scanf("%d",&col);
	
	/*Allocation Matrix*/
	printf("Enter Allocation Matrix : \n");
	int alloc[rows][col];
	for(int i=0;i<rows;i++){
	    for(int j=0;j<col;j++){
	        scanf("%d",&alloc[i][j]);
	    }
	}
	
	/*Max Matrix*/
	printf("Enter Max Matrix : \n");
	int max[rows][col];
	for(int i=0;i<rows;i++){
	    for(int j=0;j<col;j++){
	        scanf("%d",&max[i][j]);
	    }
	}
	
	/*Need Matrix*/
	printf("Need Matrix : \n");
	int need[rows][col];
	for(int i=0;i<rows;i++){
	    for(int j=0;j<col;j++){
	        need[i][j]=max[i][j]-alloc[i][j];
	        printf("%d ",need[i][j]);
	    }
	    printf("\n");
	}
	
	/*Available Resource*/
	printf("Enter Available Resource : ");
	int available[col];
	for(int i=0;i<col;i++){
	    scanf("%d",&available[i]);
	}
	printf("Banker's Algorithm");
	int executed=0,count=0;
	int done[rows],safe[rows];
	while(executed < rows){
	    for(int i=0;i<rows;i++){
			count=0;
	        if(done[i]!=1){
	            for(int j=0;j<col;j++){
	                if (need[i][j]<=available[j]){
	                    count++;
	                }else{
	                    break;
	                }
	            }
	            if (count==col){
	                done[i]=1;
	                safe[executed]=i;
	                executed+=1;
	                printf("\nP[%d] is executed. Available : ",i);
	                for(int k=0,l=0;k<col,l<col;k++,l++){
	                    printf("%d ",available[k]+=alloc[i][l]);
	                }
	            }
	        }
	    }
	}
	
	/*Safe Sequence*/
	printf("\n Safe Sequence Is : ");
	for(int i=0;i<rows;i++){
	    printf("P[%d]",safe[i]);
	    if ((i + 1) != rows) {
			printf("->");
		}
	}
	printf("\n");
}