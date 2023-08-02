#include<stdio.h>

int cols, rows, i, j, k, l, count=0, claim[10], alloc[10][10], max_claim[10][10], avail[0][10], sum_allo[10], done[10], need_tab[10][10];

int main() {
	printf("Banker's Algorithm\nEnter the no. of processes : ");
	scanf("%d", &rows);
	
	printf("Enter Resources : ");
	scanf("%d", &cols);
	
	printf("Enter Claim Vector : ");
	for (i = 0; i < cols; i++)
		scanf("%d", &claim[i]);
	
	printf("Enter Allocated Table : \n");
	
	// Resource table
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			scanf("%d", &alloc[i][j]);
			sum_allo[j] = 0;
		}
	}
	
	printf("Enter Claim Table : \n");
	
	// Claim table
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			scanf("%d", &max_claim[i][j]);
		}
	}
	
	for (i = 0; i < rows; i++)
		done[i] = -1;
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			need_tab[i][j] = max_claim[i][j] - alloc[i][j];
		}
	}
	
	printf("The Need table\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d\t", need_tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// Print claim
	printf("The claim vector is : ");
	for (i = 0; i < cols; i++)
		printf("%d  ", claim[i]);
	printf("\n\n");
	
	// Print resource table
	printf("Allocation Table\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d\t", alloc[i][j]);
		}
		printf("\n");
	}
	
	// Print claim table
	printf("\nMax Table\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d\t", max_claim[i][j]);
		}
		printf("\n");
	}
	
	// Sum of allocated resources
	printf("\nAllocated Resources : ");
	for (j = 0; j < cols; j++) {
		sum_allo[j] = 0;
		for (i = 0; i < rows; i++) {
			sum_allo[j] += alloc[i][j];
		}
		printf("%d\t", sum_allo[j]);
	}
	printf("\n");
	
	// Print available resources
	printf("\nAvailable Resources : ");
	for (i = 0; i < cols; i++) {
		avail[0][i] = claim[i] - sum_allo[i];
		printf("%d\t", avail[0][i]);
	}
	
	int executed = 0, array[10];
	while (executed < rows) {
		for (i = 0; i < rows; i++) {
			count = 0;
			if (done[i] != 1) {
				for (j = 0; j < cols; j++) {
					if (need_tab[i][j] <= avail[0][j])
						count++; // To ensure all the elements of the row are checked
					else
						break;
				}
				if (count == cols) {
					done[i] = 1;
					array[executed] = i;
					executed += 1;
					printf("\t Process P%d is executing (safe state)\nAvailable vector : ", i);
					for (k = 0, l = 0; k < cols, l < cols; k++, l++)
						printf("%d\t", avail[0][k] += alloc[i][l]); // Available vector
				}
			}
		}
	}
	
	printf("\nSafe Sequence : ");
	for (i = 0; i < rows; i++) {
		printf("P%d", array[i]);
		if ((i + 1) != rows) {
			printf("->");
		}
	}
	
	printf("\n");
	return 0;
}