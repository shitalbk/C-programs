#include <stdio.h>
int main()
{
	int i,j,swap,a[20],n,temp;
	printf("Enter the size of the array less than 20 : ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: \n",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe numbers you entered are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	// bubblesort begins
	for(i = 0;i<n-1;i++)
	{ 
		for(j = 0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
					temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}	 
		}
	}
	printf("\nThe numbers sorted in ascending order are: ");
	printf("\n");
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
