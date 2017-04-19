#include <stdio.h>
int main()
{
	int i,n,sum,series;
	sum = 0;
	printf("Please enter the nth terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		series = 11 * i;
		printf("%d\t",series);
		sum = sum + series;
		
	}
	printf("\n");
	printf("The sum is = %d\n",sum);
}
