#include <stdio.h>
int main()
{
	int i,j,k,n;
	int a[20] = {1,2,3,5,9,11,24,25,67,89};
	printf("Enter a number for the search: ");
	scanf("%d",&n);
	int low= 0;
    int	high = 9;
	int mid;
	for(i=0;i<9;i++)
	{
	
	 mid = (low+high)/2;
	if(i==mid)
	{
		printf("The number is found in %d position",mid+1);
	}
		
	}
	
}
