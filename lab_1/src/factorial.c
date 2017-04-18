#include <stdio.h>
int main()
{
	int n;
	int fact = 1;
	printf("Please enter a number: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("The factorial of negative number does not exist. Thank you");
	}
	else{
		for(;n>=1;n--)
		{
			fact = fact * n;
		
          		
		}
		printf("The factorial is = %d ",fact);
		
		
	}
}
