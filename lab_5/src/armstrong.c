#include <stdio.h>
int arm(int n);
int main()
{
	int num,a,temp;
	printf("Please enter a number: ");
	scanf("%d",&num);
	temp = num;
    a =	arm(num);
	if(temp == a)
	
	{
		printf("The number is armstrong number");
	}
    else
    {
    	printf("The number is not armstrong number");
    }
}
int arm(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem = n%10;
		sum = sum + rem*rem*rem;
		n = n/10;
	}
	return sum;
}
