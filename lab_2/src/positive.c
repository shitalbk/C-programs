#include <stdio.h>
int main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("The number you entered is a negative.Thank you");
	}
	else
	{
		printf("The number you entered is a positive.Thank you");
	}
	
}
