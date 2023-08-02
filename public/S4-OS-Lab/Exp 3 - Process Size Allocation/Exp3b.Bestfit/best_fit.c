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
    int a=0,b=0,temp1=0,temp2=0,temp3=0;
    printf("Best Fit\n Enter No. of Process : ");
    scanf("%d",&a);
    struct process parr[a];
/*Read*/
    for (int i=0;i<a;i++) {
        parr[i].no=i;
        printf("Enter size of process P[%d] :",i);
        scanf("%d",&parr[i].size);
        parr[i].hole=(a*100);
    }
    printf("\n Enter No. of Hole : ");
    scanf("%d",&b);
    struct hole harr[b];
/*Read And Sort*/
    for (int i=0;i<b;i++) {
        harr[i].no=i;
        printf("Enter size of hole H[%d] :",i);
        scanf("%d",&harr[i].size);
        harr[i].balance=harr[i].size;
    }
    for (int i=0;i<b;i++) {
        for (int j=0;j<b-i-1;j++) {
            if (harr[j].size>harr[j+1].size) {
                temp1=harr[j].no;
                temp2=harr[j].size;
                temp3=harr[j].balance;
                harr[j].no=harr[j+1].no;
                harr[j].size=harr[j+1].size;
                harr[j].balance=harr[j+1].balance;
                harr[j+1].no=temp1;
                harr[j+1].size=temp2;
                harr[j+1].balance=temp3;
            }    
        }
    }
/*Inserting Process*/
    for ( int i=0;i<a;i++ ) {
        for ( int j=0;j<b;j++) {
            if (parr[i].size<=harr[j].balance) {
                parr[i].hole=harr[j].no;
                harr[j].balance-=parr[i].size;
                break;
            }
            for (int k=0;k<b;k++) {
                for (int l=0;l<b-k-1;l++) {
                    if (harr[l].balance>harr[l+1].balance) {
                        temp1=harr[l].no;
                        temp2=harr[l].size;
                        temp3=harr[l].balance;
                        harr[l].no=harr[l+1].no;
                        harr[l].size=harr[l+1].size;
                        harr[l].balance=harr[l+1].balance;
                        harr[l+1].no=temp1;
                        harr[l+1].size=temp2;
                        harr[l+1].balance=temp3;
                    }    
                }
            }
        }
    }
/*Re-Sorting*/
for (int i=0;i<b;i++) {
        for (int j=0;j<b-i-1;j++) {
            if (harr[j].no>harr[j+1].no) {
                temp1=harr[j].no;
                temp2=harr[j].size;
                temp3=harr[j].balance;
                harr[j].no=harr[j+1].no;
                harr[j].size=harr[j+1].size;
                harr[j].balance=harr[j+1].balance;
                harr[j+1].no=temp1;
                harr[j+1].size=temp2;
                harr[j+1].balance=temp3;
            }    
        }
    }
/*Display*/
    printf("\nBest Fit Allocation\nProcess\t Size\tHole\n");
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
