#include <stdio.h>
int main()
{
	int i,n,j,k;
	printf("Please enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		for(j=n;j>i;j-=2)
		{
			printf(" ");
		} 
		for(k=0;k<i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>1;i-=2)
	{
		for(j=9;j>i;j-=2)
		{
		 printf(" ");	
		}
		for(k=3;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
