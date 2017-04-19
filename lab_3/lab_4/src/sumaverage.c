#include <stdio.h>
int main()
{
	int a[20],n,i,sum =0,average;
	printf("Please enter the size of array less than or equal to 20: ");
	scanf("%d",&n);
	printf("Please enter %d numbers of array:\n",n);
	sum = 0;
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	printf("\nThe number you entered are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\ ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		sum = sum +a[i];
		average = sum/n;
	}
	printf("The sum is = %d\n ",sum);
	printf("\nThe average  = %d ",average);
	
}
