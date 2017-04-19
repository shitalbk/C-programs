#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],d[10][10];
	int r,c,r1,c1,i,j,n;
	printf("Enter the row of the first matrix: ");
	scanf("%d",&r);
	printf("Enter the column of the first matrix: ");
	scanf("%d",&c);
	printf("Enter numbers in %d * %d matrix:\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the row of the second matrix: ");
	scanf("%d",&r1);
	printf("Enter the column of the second matrix: ");
	scanf("%d",&c1);
	printf("Enter numbers in %d * %d matrix:\n",r1,c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("The sum of the row and column is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			d[i][j] = a[i][j]+b[j][i];
			printf("\nd[%d][%d] = ",i,j);
			printf("%d ",d[i][j]);
		}
	}
}
