
#include <stdio.h>
int main()
{
int i,j,k,n;
printf("\nPlease enter the nth terms: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=10;j++)
	{
		k = i * j;
		printf("\n%d * %d = %d",i,j,k);
	}
	printf("\n");
}
}

