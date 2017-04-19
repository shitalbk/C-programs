#include <stdio.h>
int power(int b,int p);
int main()
{
	int b,p;
	printf("Enter the base & the power: ");
	scanf("%d%d",&b,&p);
	printf("The result of %d power %d is %d",b,p,power(b,p));
}
int  power(int b,int p)
{
	int rev=1,i;
	if(p<0)
	{
		for(i=p;i<0;i++)
		{
		   rev = rev/b;	
		}
	}
	else
	{
		for(i=1;i<=p;i++)
		{
			rev = rev*b;
		}
	}
	return rev;
}
