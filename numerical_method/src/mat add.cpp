/*matrix read and write using function*/
#include<stdio.h>
#include<conio.h>

void read_mat(int [][5],int,int);
void display_mat(int [][5],int,int);
void add_mat(int [][5],int[][5],int [][5],int,int);

int main()
{
		int a[5][5],sum[5][5],b[5][5],r1,c1,r2,c2;
		printf("Enter the order of first matrix: ");
		scanf("%d%d",&r1,&c1);
		printf("Enter the order of second matrix: ");
		scanf("%d%d",&r2,&c2)
		if(r1!=r2||c1!=c2);
		prinf("Matrix addition is not defined.");
   {
	printf("Enter the elements of first %d*%d matrix:\n",r1,c1);
		read_mat(a,r1,c1);
		printf("Enter the elements of second %d*%d matrix:\n",r1,c1);
		read_mat(b,r2,c2);	
		add_mat(a,b,sum,r1,c1);
		printf("The sum matrix is:\n");
		display_mat(sum,r1,c1);
	}
		getch();
		return 0;	
}

		void add_mat(int a[][5],int b[][5],int r,int c)
{
		int i,j;
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				sum[i][j]=a[i][j]+b[i][j];
}

void display_mat(int a[][5],int b[][5],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%6d",m[i][j]);
	}
		printf("\n");
}

