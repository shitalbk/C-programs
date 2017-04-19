#include <stdio.h>
int factorial(int n);
int main()
{
	int n,fa;
    printf("Please enter a number:\n");
    scanf("%d",&n);
	fa = factorial(n);
	printf("The factorial of %d is %d",n,fa);	
}
int factorial(int n)
{
int result;
if(n<=1)
{
    result=1;	
}
else
{
	result = (n * factorial(n-1));
}
return result;
}
	
	
	

