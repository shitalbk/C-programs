#include <stdio.h>
int isprime(int n);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(isprime(n))
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}
int isprime(int n)
{
	int i;
	if(n==1)
	{
		return 0;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			return 0;
		}
		return 1;
	}
}
