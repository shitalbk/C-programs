#include <stdio.h>
int main()
{
		int a[20],i,j,n,sum =0,factor;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++)
	{
	    factor = 0;	
		for(j=1;j<=100;j++)
		{
			
			if(a[i]%j==0)
			{
				factor++;
			}
		}
		if(factor==2)
		{
			printf("%d ",a[i]);
		}
	}
	
}
