#include <stdio.h>
int main()
{
	float sa;
	printf("Please enter the Sales Amount: ");
	scanf("%f",&sa);
	if(sa<5000)
	{
		printf("The commision is =  0 %");
	}
	else if(sa>=5000 && sa<10000)
	{
		printf("The commision is = 5 % ");
	}
	else if(sa>=10000 && sa<15000)
	{
		printf("The commision is = 7 %");
	}
	else{
		printf("The commision is = 10 %");
	}
}
	
