#include<stdio.h>
#include<stdlib.h>

int n, len[20], Idx[20];
struct Block{
	int data[20];
}blk[20];

void main() {
	printf("Indexd File Allocation\nEnter no. of Files: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int item;
		printf("Enter index of file %d: ", i+1);
		scanf("%d", &Idx[i]);
		printf("Enter Length of file %d: ", i+1);
		scanf("%d", &len[i]);
		printf("Enter the blocks: ");
		for(int j=0; j<len[i]; j++){
			scanf("%d", &blk[Idx[i]].data[j]);
		}
	}
    printf("\nFile Name\t\t Length\t\t Index");
	for(int i=0; i<n; i++)
		printf("\n%d\t\t\t %d\t\t\t%d",i+1, len[i], Idx[i]);
	do {
		int fn;
		printf("\nEnter file name (0 = exit) : ");
		scanf("%d", &fn);
		if(fn!=0) {	
			printf("\nFile name is : %d", fn);
			printf("\nLength is : %d", len[fn-1]);
			printf("\nIndex is : %d", Idx[fn-1]);
			printf("\nBlocks occupied : ");
			for(int i=0; i<len[fn-1]; i++)
				printf("\t %d", blk[Idx[fn-1]].data[i]);
		}
		else {
			exit(0);
		}
	}while(1);
}
