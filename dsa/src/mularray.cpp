//Lab work 3
//program to find product of two matrices using dynamic allocation
#include<stdio.h>
#include<stdlib.h>

void read(int**,int,int);
void write(int**,int,int);


int main()
{
int **a;
int **b;
int **m;
int r1,c1,r2,c2,i,j,k;

printf("Enter no of row and columns of first matrix\n");
scanf("%d%d",&r1,&c1);
printf("Enter no of row and columns of second matrix\n");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
	 printf("\n columns in first matrix and rows in second matrix must be equal.");
     exit(1);
}
a =(int **)malloc(r1 *sizeof(int *));
b = (int **) malloc( r2 * sizeof(int *));
m = ( int **) malloc (r1 * sizeof(int *));


for(i=0;i<r1;i++)
{
 *(a+i)=(int*)malloc(sizeof(int)*c1);
 *(m+i)=(int*)malloc(sizeof(int)*c2);
} 

for(i=0;i<r2;i++)
{
 *(b+i)=(int*)malloc(sizeof(int)*c2);
}

printf("Enter elements of first matrix");
read(a,r1,c1);
printf("Enter elements of Second matrix\n");
read(b,r2,c2);

for(i=0;i<r1;i++)
{
 for(j=0;j<c2;j++)
 {
      *(*(m+i)+j)=0;
	 for(k=0;k<c1;k++)
	{
    	  m[i][j] = m[i][j]+ a[i][k]* b[k][j];
	      //(*(*(m+i)+j))+=*(*(a+i)+k)*(*(*(b+k)+j));
    }
 }
}
printf("Matrix A is:\n\n");
write(a,r1,c1);

printf("Matrix B is:\n\n");
write(b,r2,c2);

printf("product of matrix A and B is:\n\n");
write(m,r1,c2);

printf("\n\n");
system("pause");
return 0;
}

// read matrix
void read(int **x,int r,int c)
{
   int i,j;
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
      scanf("%d",*(x+i)+j);
     }
   }
}

// display matrix
void write(int**y,int r,int c)
{
   int i,j;
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
        {
            printf("%d\t",*(*(y+i)+j));
        }
      printf("\n");
   }
}
