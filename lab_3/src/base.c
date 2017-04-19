#include <stdio.h>
int main()
{
	int base, power,result =1 ,i;
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the power: ");
	scanf("%d",&power);
	if(power>0)
	{
		for(i = 1;i<=power;i++ )
		{
			result = result * base;
		
		}
			printf("The value of given base to given power is = %d",result);
	}
}
