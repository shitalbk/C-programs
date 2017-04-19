#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
	int i,j,k,r1,c1,r2,c2;
	int a[ROW][COL],b[ROW][COL],c[i][j];
	
	printf("Enter the order of the first matrix not more than 3*3: ");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter the order of the seocnd matrix not more than 3*3: ");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nPlease enter the correct order of the matrix: ");
	}
	else
	{
		printf("Enter the number in the first matrix: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the number in the second matrix:\n ");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d] = ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j] = 0;
				
					for(k=0;k<r2;k++)
					{
						c[i][j]+= a[i][k] * b[k][j];
					}
				
			}
		}
		printf("The resultant matrix is: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
		
	}
}
