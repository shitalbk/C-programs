#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i+=2)
	{
		for(j=9;j>i;j-=2)
		{
		   printf(" ");
		}
		for(k =0;k<i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
