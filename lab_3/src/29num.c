#include <stdio.h>
int main()
{
	int i,j,k,l;
	for(i=5;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
			
			
		}
		for(l=i-1;l>0;l--)
		{
			printf("%d",l);
		}
	    
		
		printf("\n");
		
	}
}

