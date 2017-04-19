#include <stdio.h>
#define ROW 5
#define COL 5
int main()
{
   	int a[ROW][COL],b[ROW][COL],c[ROW][COL],i,j,k,r1,c1,r2,c2;
   	printf("Enter order of first matrix not more than 5*5: ");
   	scanf("%d%d",&r1,&c1);
   	printf("Enter order of second matrix not more than 5*5: ");
   	scanf("%d%d",&r2,&c2);
   	if(c1!=r2)
   	{
   		printf("Matrix multiplication is not defined");
   	}
   	else 
   	{
   		printf("Enter elements of first matrix: ");
   		for(i=0;i<r1;i++)
   		{
   			for(j=0;j<c1;j++)
   			{
   				printf("\n a[%d][%d] = ",i,j);
   				scanf("%d",&a[i][j]);
   			}
   		}
   		printf("Enter elements of 2nd matrix: ");
   		for(i=0;i<r2;i++)
   		{
   			for(j=0;j<c2;j++)
   			{
   				printf("\n b[%d][%d] = ",i,j);
   				scanf("%d",&b[i][j]);
   			}
   		}
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
   		printf("Resultant matrix is : \n");
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
