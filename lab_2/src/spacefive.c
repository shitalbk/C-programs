#include <stdio.h>
int main()
{
	int i,k,j;
	for(i=1;i<=5;i++)
	{
	     for(j = 4;j>=i;j--)
	     {
	     	printf(" ");
	     }
			for(k=1;k<=i;k++)
			{
			   printf("%d",k);
			   	
			}
			
			
		
		printf("\n");
		
	}
}
