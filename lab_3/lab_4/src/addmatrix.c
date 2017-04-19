#include <stdio.h>
int main()
{
	int i,j,r,c,r1,c1,a[10][10],b[10][10],d[10][10];
	printf("Enter number of rows less than ten: ");
	scanf("%d",&r);
	printf("Enter number of columns less than ten: ");
	scanf("%d",&c);
	printf("Enter elements of %d * %d matrix: \n",r,c);
	for(i = 0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter number of rows less than ten: ");
	scanf("%d",&r1);
	printf("Enter number of columns less than ten: ");
	scanf("%d",&c1);
	
	printf("Enter elements of %d * %d matrix: \n",r1,c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("The sum is : ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		  d[i][j] = a[i][j] + b[i][j];
		  printf("\nd[%d][%d]=",i,j);
	     printf("%d ",d[i][j]);
		
		}
	}
	
}
