// Lab work 2
// program to find the sum of two matrices and finding transpose of the sum
#include<stdio.h>
#include<stdlib.h>
void input(int [10][10], int , int);
void display( int [10][10], int,int);
void sum(int [10][10], int[10][10], int[10][10], int, int);
void transpose ( int a[10][10], int row , int col);
int main()
{

  int a[10][10], b[10][10], c[10][10];
  int i,j;
  int row, col;
  printf("\nSize of matrix\t");
  printf("\nEnter row and column of matrix\t");
  scanf("%d %d",&row,&col);
  
  printf("\nEnter elements of First matrix\n");
  input(a,row,col);

  printf("\nEnter elements of Second Matrix\n");
  input(b,row,col);

  //finding sum of matrix
   sum(a,b,c,row,col);
  
  //display matrix
   printf("\nFirst matrix:\n");
   display(a,row,col);
    
	printf("\n Second matrix\n");
   display(b,row,col);
   
   printf("\nThe sum of the matrices is\n");
   display(c,row,col);
   
   
   printf("\n The transpose of the sum is\n");
   transpose(c,row,col);
   printf("\n\n");

   system("pause");
   return 0;
}

void input(int a[10][10], int r, int c)
{
   int i,j;
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
   }
}

void display( int a[10][10], int r, int c)
{
   for(int i=0;i<r;i++)
   {
     for(int j=0;j<c;j++)
     {
       printf("%d\t",a[i][j]);
     }
     printf("\n");
   }
}

void sum( int a[10][10], int b[10][10], int c[10][10], int row , int col)
{
    for (int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
      {
        c[i][j] =a[i][j]+b[i][j];
      }
    }
}


void transpose ( int a[10][10], int row , int col)
{
    for(int i=0;i<col;i++)
    {
      for(int j=0;j<row;j++)
       {
         printf("%d\t",a[j][i]);
       }
      printf("\n");
    }   
}
