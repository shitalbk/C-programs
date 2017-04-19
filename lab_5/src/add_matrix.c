#include <stdio.h>
#define ROW 5
#define COL 5
void read(int a[][COL],int b[][COL],int r,int c,int r1,int c1);
void display(int a[][COL],int b[][COL],int r,int c,int r1,int c1);
int add(int a[][COL], int b[][COL],int r,int c);

int main()
{
	int r,c,r1,c1,a[ROW][COL],b[ROW][COL];
	printf("Please enter the order  of first matrix less than 5*5:\n");
	scanf("%d%d",&r,&c);
	printf("Please enter the order of second matrix less than 5*5:\n");
	scanf("%d%d",&r1,&c1);
	read(a,b,r,c,r1,c1);
	display(a,b,r,c,r1,c1);
	add(a,b,r,c);
}
void read(int a[][COL],int b[][COL],int r, int c, int r1, int c1)
{
	int i,j;
	printf("Enter numbers in the first %d * %d matrix:\n ",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter numbers in the second %d * %d matrix:\n",r1,c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
}
void display(int a[][COL],int b[][COL],int r, int c,int r1,int c1)
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
int add(int a[][COL],int b[][COL],int r,int c)
{
	int i,j,d[ROW][COL];
	printf("The resultant matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    	d[i][j] = a[i][j] + b[i][j];
				printf("%d\t",d[i][j]);	
		}
		printf("\n");
	}
	return d[i][j];

}
