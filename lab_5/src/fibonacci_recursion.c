#include <stdio.h>
int fibo(int);
int main()
{
	int n,i;
	printf("Please enter nth term: ");
	scanf("%d",&n);
	printf("First %d terms of fibonacci series is:\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fibo(i));
    }
	
}
int fibo(int n)
{
	if(n<=1)
	return n;
	else
	return (fibo(n-1) + fibo(n-2));
}
