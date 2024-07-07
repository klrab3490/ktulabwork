#include<stdio.h>

struct process {
    int no;
    int size;
    int hole;
};

struct hole {
    int no;
    int size;
    int balance;
};

void main() {
    int a=0,b=0,temp1=0,temp2=0,temp3=0,flag=0;
    printf("Worst Fit\n Enter No. of Process : ");
    scanf("%d",&a);
    struct process parr[a];
    for (int i=0;i<a;i++) {
        parr[i].no=i;
        printf("Enter size of process P[%d] :",i);
        scanf("%d",&parr[i].size);
        parr[i].hole=(a*100);
    }
    printf("\n Enter No. of Hole : ");
    scanf("%d",&b);
    struct hole harr[b];
    for (int i=0;i<b;i++) {
        harr[i].no=i;
        printf("Enter size of hole H[%d] :",i);
        scanf("%d",&harr[i].size);
        harr[i].balance=harr[i].size;
    }

    for ( int i=0;i<a;i++ ) {
        flag=-1;
        for ( int j=0;j<b;j++) {
            if (harr[j].balance>parr[i].size) {
                if (flag==-1) {
                    flag=j;
                }
                else if (harr[j].balance > harr[flag].balance) {
                    flag=j;
                }
            }
        }
        if (flag!=-1) {
            parr[i].hole=flag;
            harr[flag].balance-=parr[i].size;
        }
    }

    printf("\nWorst Fit Allocation\nProcess\t Size\tHole\n");
    for (int i=0;i<a;i++) {
        if (parr[i].hole!=(a*100)) {
            printf("%d\t %d\t %d\n",parr[i].no,parr[i].size,parr[i].hole);
        }
        else {
            printf("%d\t %d\t Not Allocated\n",parr[i].no,parr[i].size);
        }
    }
    printf("\nHole\t Size\tBalance\n");
    for (int i=0;i<b;i++) {
        printf("%d\t %d\t %d\n",harr[i].no,harr[i].size,harr[i].balance);
    }
}
