#include <stdio.h>
#define ROW 5
#define COL 5
int main()
{
	int i,j,r1,c1,r2,c2;
	int a[ROW][COL],c[i][j];
	printf("Enter the order of the matrix not more than 5*5: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the number in the matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered matrix is: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of the matrix is: \n");
	r2 = c1;
	c2 = r1;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		    
		    c[i][j] = a[j][i];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
