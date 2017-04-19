#include <stdio.h>
int main()
{
	char i,j,k,l;
	for(i = 0;i<=8;i++)
	{
	   for(j=65;j<=69-i;j++)
	{
		printf("%c",j);
	}	
	     for(k = 0;k<i;k++)
	     {
	     	printf(" ");
	     }
	     for(k = 0;k<i;k++)
	     {
	     	printf(" ");
	     }
	     
	     for(l=69-i;l>=65;l--)
	     {
	     	printf("%c",l);
	     }
	printf("\n");
	}
	
	}

