#include <stdio.h>
int factorial(int f);
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Factorial of negative number does not exist.");
	}
	else
	{
	   printf("The factorial is %d",factorial(n));	
	}
}
int factorial(int f)
{
	int i;
	int fact = 1;
	for(i=f;i>=1;i--)
	{
	   fact = fact * i;	
	}
	return fact;
}
