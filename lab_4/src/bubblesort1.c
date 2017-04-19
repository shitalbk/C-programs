#include <stdio.h>
int main()
{
	int i,j,swap,a[20],n,temp,index;
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
	for(i = 0;i<n-i;i++)
	{
		index = i;
		for(j = i+1;j<n;j++)
		{
			if(a[index]>a[j])
			index = j;
		
		}
			 temp = a[i];
		a[i]  = a[index];
		a[index] = temp;	
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
} 
