#include <stdio.h>
int main()
{
	int i,j,k;
	int r1 = 2,c1 = 3;
	int r2 = 3,c2 = 2;
	
	
	int a[2][3] = { {1,5,2}, {3,4,6} };
	int b[3][2] = { {-1,1}, {2,3},{5,2} };
	int c[i][j];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j] = 0;
			
				for(k=0;k<c1;k++)
				{
					c[i][j]+= a[i][k] * b[k][j];
				}
			
		}
		
		
	}
	printf("The resultant matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	
}
