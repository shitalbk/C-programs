#include <stdio.h>
#define ROW 5
#define COL 5
void read(int a[][COL],int b[][COL],int r,int c,int r1,int c1);
void display(int a[][COL],int b[][COL],int r,int c,int r1,int c1);
void multiply(int a[][COL],int b[][COL],int d[][COL],int r,int c,int c1);
int main()
{
	int a[ROW][COL],b[ROW][COL],d[ROW][COL],r,c,r1,c1;
	printf("Please enter the order of the first matrix less than 5*5:\n");
	scanf("%d%d",&r,&c);
	printf("Please enter the order of the second matrix less than 5*5:\n");
	scanf("%d%d",&r1,&c1);
	if(c==r1)
	{
    read(a,b,r,c,r1,c1);
	display(a,b,r,c,r1,c1);
	multiply(a,b,d,r,c,c1);
	}
	else
	{
		printf("Matrix multiplication is not compatible");
	}
}
void read(int a[][COL],int b[][COL],int r,int c,int r1,int c1)
{
	int i,j;
   printf("Enter the numbers in the %d * %d matrix:\n",r,c);
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   		printf("a[%d][%d]=",i,j);
   		scanf("%d",&a[i][j]);
   	}
   }	
   printf("Enter the numbers in the %d *%d matrix:\n",r1,c1);
   for(i=0;i<r1;i++)
   {
   	for(j=0;j<c1;j++)
   	{
   		printf("b[%d][%d]=",i,j);
   		scanf("%d",&b[i][j]);
   	}
   }
}
void display(int a[][COL],int b[][COL],int r,int c,int r1,int c1)
{
	int i,j;
	printf("The first matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}	
}
void multiply(int a[][COL],int b[][COL],int d[][COL],int r,int c,int c1)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			d[i][j]=0;
			for(k=0;k<c;k++)
			{
				d[i][j]+= a[i][k] * b[k][j];	
			}
		}
	}
	printf("The resultant matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
