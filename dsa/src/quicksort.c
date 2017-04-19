#include <stdio.h>
#include <stdlib.h>
int partition(a,l,r);
int main()
{
	int a[10],i,n,k;
	printf("Please enter size of the array: ");
	scanf("%d",&n);
	printf("Please enter %d numbers in the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}

int partition(a,l,r)
{
	int x,y,pivot;
	
}
