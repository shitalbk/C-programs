#include <stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=6;i++)
  {
  	for(k=6;k>i;k--)
  	{
  		printf(" ");
  	}
  	for(j=1;j<=i;j++)
  	{
  		for(k = 1;k<=1;k++)
  		{
  		printf("%d",k);
  		printf(" ");	
  		}
  	
  	}
  	printf("\n");
  }	
}
