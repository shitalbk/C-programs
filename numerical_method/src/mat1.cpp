/*matrix read and write using function*/
#include<stdio.h>
#include<conio.h>

void read_mat(int [][5],int,int);
void display_mat(int [][5],int,int);

int main()
{
		int a[5][5],i,j,r,c;
		printf("Enter the order of matrix: ");
		scanf("%d%d",&r,&c);
		printf("Enter the elements of %d*%d matrix:\n",r,c);
		read_mat(a,r,c);
		printf("The matrix you entered is:\n");
		display_mat(a,r,c);
		getch();
		return 0;
}

void read_mat(int m[][5],int r,int c)
{
		int i,j;
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				scanf("%d",&m[i][j]);
}

void display_mat(int m[][5],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%6d",m[i][j]);
		printf("\n");
	}
}

