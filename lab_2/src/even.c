#include <stdio.h>
int main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The number you have entered is an even number");
	}
	else
	{
	    printf("The number you have entered is an odd number");	
	}
}
