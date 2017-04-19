#include <stdio.h>
int main()
{
	int i,n,r,dig,sum = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the digits of number: ");
	scanf("%d",&dig);
	
	for(i=1;i<=dig;i++)
	{
		r = n%10;
		n = n/10;
		sum = sum + r;
	}
	printf("The sum of digits is = %d",sum);
}

