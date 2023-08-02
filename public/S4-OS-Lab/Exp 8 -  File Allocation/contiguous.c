#include<stdio.h>

void main() {
    int files,choice1,choice2,q=1;
    printf("Contiguous File Allocation\nEnter No. of Files : ");
    scanf("%d",&files);
    int start[files],length[files];
    for (int i=1;i<=files;i++) {
        printf("Enter File %d Details : \n\tEnter starting block : ",i);
        scanf("%d",&start[i]);
        printf("\tEnter Length : ");
        scanf("%d",&length[i]);
    }    
    printf("\nFile Name\tStart Block\tLength\n");
    for (int i=1;i<=files;i++) {
        printf("%d\t\t%d\t\t%d\n",i,start[i],length[i]);
    }    
    do {
        printf("Menu\n\tPress 1 Sequential File Allocation\n\tPress 2 Exit\nChoice : ");
        scanf("%d",&choice1);
        switch(choice1) {
        case 1:        
            printf("\nEnter File Name : ");
            scanf("%d",&choice2);
            printf("\n File Name is %d",choice2);
            printf("\n Length is : %d",length[choice2]);
            printf("\n Blocks Occupied : ");
            int a=start[choice2];
            int b=length[choice2];
            for (int i=0;i<b;i++) {
                printf("%d",a);
                a++;
                if (i<(b-1)){
                    printf("->");
                }
            }
            printf("\n");
            break;
        case 2:
            q=0;
            break;
        }
    } while(q==1);
}