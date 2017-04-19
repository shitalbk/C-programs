#include <stdio.h>
#include <stdlib.h>
#define ROW 10
int main()
{
	int *a[ROW],r,c,i,j;
	printf("Enter size of row & column: ");
	scanf("%d%d",&r,&c);
	/*alloccating one dimensional array*/
	for(i=0;i<r;i++)
	a[i] = (int *)malloc(c*sizeof(int));
	printf("Enter %d*%d elements of matrix:\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",a[i]+j);
		}
	}
	printf("Matrix you entered is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*(a[i]+j));
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	free(a[i]);
}
