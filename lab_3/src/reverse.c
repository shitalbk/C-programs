#include <stdio.h>
int main()
{
	int i,n,r,p,rev = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the digits of number: ");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		r = n%10;
		n = n/10;
		rev = rev*10 + r;
	}
	printf("The reverse of the number is = %d",rev);
}



