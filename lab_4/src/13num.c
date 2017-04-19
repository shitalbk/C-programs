#include <stdio.h>
int main()
{
	int  i,n,a[20],p;
	printf("Please enter any number less than 20: ");
	scanf("%d",&n);
	printf("Please enter %d numbers in the array:\n",n);
	for(i = 0;i<n;i++)
	{
		printf("N = ");
		scanf("%d",&a[i]);
	}
	printf("Please enter the number that you want to increment: ");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]+p);
	}
}
