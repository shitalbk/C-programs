#include <stdio.h>
int pyramid();
int main()
{
	int a;
	a = pyramid();
}
int pyramid()
{
	int i,j,k;
	for(i=1;i<=7;i+=2)
	{
	   for(j=5;j>=i;j-=2)
	   {
	   	printf(" ");
	   }
	   for(k=0;k<i;k++)
	   {
	   	printf("*");
	   }
	   printf("\n");	
	}
}

