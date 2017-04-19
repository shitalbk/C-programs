#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
	int a[MAX][MAX],t[MAX][MAX],i,j,r,c,n;
	printf("Enter The Dimension Of matrix: ");
	scanf("%d%d",&r,&c);
	printf("%d*%d element of a matrix.\n",r,c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		printf("a[%d][%d]= ",i,j);
		scanf("%d",&a[i][j]);
		
		}
/*code for transpose start*/
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		t[i][j]=a[j][i];
		
	}
}
printf("Transpose Matrix is:\n");
for(i=0;i<c;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%5d",t[i][j]);
	
		
	}
		printf("\n");
}

	getch();
}

