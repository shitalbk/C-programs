#include <stdio.h>
int main()
{
	float cp,sp,profit,loss;
	printf("Please enter the cost price: ");
	scanf("%f",&cp);
	printf("Please enter the selling price: ");
	scanf("%f",&sp);
	if(sp>cp)
	{
		profit = sp - cp;
		printf("The profit amount is = %.2f",profit);
	}
	else if(sp==cp)
	{
		printf("The cost price and selling price is equal so there no profit and no loss");
	}
	else
	{
		loss = cp - sp;
		printf("The loss amount is = %.2f",loss);
	}
}

