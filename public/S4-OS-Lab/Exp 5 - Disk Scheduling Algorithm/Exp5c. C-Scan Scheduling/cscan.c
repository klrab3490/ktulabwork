#include<stdio.h>
int main() {
	int request_arr[20],request,head,size,direction,seek=0,i,j;
	printf("Disk Scheduling\nCircular SCAN\nEnter the number of requests : ");
	scanf("%d",&request);
	printf("Enter the requests : ");
	for(i=0;i<request;i++)
 		scanf("%d",&request_arr[i]);
	printf("Enter the initial head position : ");
	scanf("%d",&head);
	printf("Total disk size : ");
	scanf("%d",&size);
	printf("Enter the head movement direction\n0-towards end\n1-Towards beginning\nChoice : ");
	scanf("%d",&direction);
	//sort
	for(i=0;i<request-1;i++){
		for(j=0;j<request-i-1;j++) {
			int temp;
			if(request_arr[j]>request_arr[j+1]) {
				temp=request_arr[j];
				request_arr[j]=request_arr[j+1];
				request_arr[j+1]=temp;
			}
		}
	}
	printf("Path : %d->",head);
	//greater than head
	if(direction==0) {
		int start=0;
		for(i=0;i<request;i++) {
			if(request_arr[i]<head)
				start=i;
			else
				break;
		}
		for(i=start+1;i<request;i++) {
			seek+=(request_arr[i]-head);
			head=request_arr[i];
			printf("%d->",request_arr[i]);
		}
		seek+=((size-1)-head);
		printf("%d->",size-1);
		seek+=(size-1);
		printf("0->");
		head=0;
		//less than head
		for(i=0;i<start;i++){
			seek+=(request_arr[i]-head);
			head=request_arr[i];
			printf("%d->",request_arr[i]);
		}
		seek+=request_arr[i]-head;
		printf("%d",request_arr[i]);
	}
	//case 2
	else {
		int start=0;
		for(i=0;i<request;i++) {
			if(request_arr[i]<head)
				start=i;
			else
				break;
		}
		for(i=start;i>=0;i--) {
			seek+=(head-request_arr[i]);
			head=request_arr[i];
			printf("%d->",request_arr[i]);
		}
		seek+=head;
		printf("0->");
		seek+=(size-1);
		head=size-1;
		printf("%d->",head);
		//greater
		for(i=request-1;i>start+1;i--) {
			seek+=(head-request_arr[i]);
			head=request_arr[i];
			printf("%d->",request_arr[i]);
		}
		seek+=request_arr[i]-head;
		printf("%d",request_arr[i]);
	}
	printf("\nTotal seek distance is : %d\n",seek);
	return 0;
}

