#include <stdio.h>
int rev(int a);
int main()
{
	int n,r;
	printf("Please enter the number: ");
	scanf("%d",&n);
	printf("The reverse of the number is %d",rev(n));
}
int rev(int a)
{
	int r,rev=0;
	while(a!=0)
	{
		r = a%10;
		rev = rev*10+r;
		a = a/10;
	}
	return rev;
}
