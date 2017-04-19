#include <stdio.h>
int sum(int n);
int main()
{
   	int n;
   	printf("Please enter nth term: ");
   	scanf("%d",&n);
   	printf("The sum of the first natural number is %d ",sum(n));
   	
}
int sum(int n)
{
	int num;
	if(n<=1)
	{
		num = 1;
	}
	else
	{
		num = n + sum(n-1);
	}
	return num;
}
