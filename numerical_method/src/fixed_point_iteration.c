#include <stdio.h>

#define E 0.001
#define g(x) ((5/x)+x)/2
#include <math.h>
int main()
{
	int i=0;
	float a,x0,x1;
   	printf("Please enter the initial guess: ");
   	scanf("%f",&x0);
   	do
   	{
   		x1 = g(x0);
   		a = fabs((x1-x0)/x1);
   		if(a>E)
   		{
   			x0 = x1;
   		}
   		i++;
   	}while(a>E);
   		printf("\nThe root is %f",x1);
	printf("\nThe iteration is %d",i++);
	return 0;
}
