#include<stdio.h>
#include<math.h>
int request_arr[20],request,distance,head,seek=0,i;
int main(){
    printf("Disk Scheduling\nFirst Come First Serve\nEnter no. of requests : ");
    scanf("%d",&request);
    printf("Enter the requests : ");
    for(i=0;i<request;i++)
        scanf("%d",&request_arr[i]);
    printf("Enter the head position : ");
    scanf("%d",&head);
    printf("Path : %d->",head);
    for(i=0;i<request;i++) {
        printf("%d",request_arr[i]);
        if ((i+1)!=request){
            printf("->");
        }
    }
    for(i=0;i<request;i++) {
        distance = fabs(head - request_arr[i]);
        seek+=distance;
        head=request_arr[i];
    }
    printf("\nTotal seek distance : %d\n",seek);
}