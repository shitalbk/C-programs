#include <stdio.h>
int main()
{
	int a[20],i,n,large,small;
	printf("Enter the size of array less than 20: ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
      large = a[0];
      small = a[0];
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		large = a[i];
		if(small>a[i])
		small = a[i];
	}
	printf("\nThe large number is %d",large);
    printf("\nThe small number is %d",small);
}
