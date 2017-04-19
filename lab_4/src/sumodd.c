#include <stdio.h>
int main()
{
	int a[20],i,n,sum =0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			sum = sum + a[i];
		}
	}
	printf("The sum is = %d ",sum);
}
