#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=7;i+=2)
	{
	   for(j=7;j>i;j-=2)
	   {
	   	printf(" ");
	   }
	   for(k=0;k<i;k++)
	   {
	   	printf("*");
	   }
	   printf("\n");	
	}
	for(i=1;i<=5;i+=2)
	{
		for(j=0;j<i;j+=2)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
}
