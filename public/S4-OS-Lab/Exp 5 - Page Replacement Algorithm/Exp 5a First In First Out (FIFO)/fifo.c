#include <stdio.h>
void main()
{
	int i,j,n,m,fnd,pg[100],fr[100],k=0,cnt=0,hit=0,miss=0;
	printf("First In First Out Page Replacement Algorithm\nEnter The Number Of Pages : ");
	scanf("%d",&n);
	printf("Enter : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&pg[i]);
	}
	printf("Enter The Number Of Frame : ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		fr[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		fnd=0;
		for(j=0;j<m;j++)
		{
			if(fr[j]==pg[i])
			{
				fnd = 1;
			}
		}
		if(fnd == 0)
		{
			fr[k] = pg[i];
			k = (k+1)%m;
			cnt++;
		}
		if(fnd==1)
		{
			hit++;
		}
		else
		{
			miss++;
		}
	}
	printf("\nTotal No. of Page Fault : %d",cnt);
	printf("\nTotal No. of Hit : %d",hit);
	printf("\nTotal No. of Miss : %d",miss);
	printf("\nLast Frame : ");
	for (int i=0;i<m;i++) {
	        printf("%d ",fr[i]);
	}
	printf("\n");
}


