#include<stdio.h>
#include<stdlib.h>

int n, len[20], start[20];
struct Block{
    int data;
    struct Block *next;
};
struct Block * head[20];


void main() {
    printf("Linked List File Allocation\nEnter the no of Files : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int item;
        struct Block *new;
        struct Block *temp;
        head[i] = NULL;
        new = (struct Block *)malloc(sizeof(struct Block));
        printf("Enter the length file %d : ", i+1);
        scanf("%d", &len[i]);
        printf("Enter the starting block of file %d : ", i+1);
        scanf("%d", &item);
        new->data = item;
        new->next = NULL;
        head[i] = new;
        printf("Enter the blocks : ");
        for(int j=0; j<len[i]-1; j++){
            scanf("%d", &item);
            struct Block *new;
            struct Block *temp;
            new = (struct Block *)malloc(sizeof(struct Block));
            new->data = item;
            new->next = NULL;
            temp = head[i];
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new;
        }
    }
    printf("\nFile Name\t\tStart Block\t\tLength\t\tBlock");
    for(int i=0; i<n; i++){
        struct Block *temp;
        temp = head[i];
        printf("\n%d\t\t\t %d\t\t\t %d\t\t", i+1, temp->data, len[i]);
        while(temp->next != NULL){
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
    do {
        int fn;
        printf("\nEnter file name (0 = exit) : ");
        scanf("%d", &fn);
        struct Block *temp1;
        if(fn != 0){
            temp1 = head[fn-1];
            printf("\nFile name is: %d", fn);
            printf("\nLength is: %d", len[fn-1]);
            printf("\nBlocks occupied : ");
            int length=len[fn-1];
            for(int i=0; i<length; i++){
                printf("%d", temp1->data);
                temp1 = temp1->next;
                if(i<(length-1)) {
                    printf("->");
                }
            }
        }
        else{
            exit(0);
        }
    }while(1);
    }
}
