#include <stdio.h>  
int partition (int a[], int start, int end) 
{  
	int t;
	int pivot = a[end]; // pivot element  
	int i = (start - 1);  
	for (int j = start; j <= end - 1; j++) 
	{  
		if (a[j] < pivot) 
		{  
			i++; 
			int t = a[i];  
			a[i] = a[j];  
			a[j] = t;  
		}  
	}  
	t = a[i+1];  
	a[i+1] = a[end];  
	a[end] = t;  
	return (i + 1);  
}  
  
void quick(int a[], int start, int end) 
{  
	if (start < end) 
	{  
		int p = partition(a, start, end); //p is the partitioning index  
		quick(a, start, p - 1);  
		quick(a, p + 1, end);  
	}  
}  
  
void printArr(int a[], int n) 
{ 
	int i; 
	for (i = 0; i < n-1; i++) 
	{
		printf(" %d ,", a[i]); 
	}
	printf(" %d\n",a[n-1]); 
} 

void main()  
{  
	int i,n;
	printf("Quick Sort\nEnter the no. of elements : ");
	scanf("%d",&n);
	int a[n]; 
	for(i=0;i<n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[i]);
	}
	printf("Before sorting array elements are : \n");  
	printArr(a, n);  
	quick(a, 0, n - 1);  
	printf("\nAfter sorting array elements are : \n");    
	printArr(a, n);    
}
