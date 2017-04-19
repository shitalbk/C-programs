#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.001
#define f(x) x*x+4*x-9
#define g(x) 2*x+4

int main()
{
	int i=0;
	float a,x0,x1,f1,g1;
	printf("Enter the value of x0\n");
	scanf("%f",&x0);
	do
	{	f1=f(x0);
		g1=g(x0);
		x1=x0-(f1/g1);
		a=fabs(x1-x0)/x1;
		x0=x1;
		i++;
	}while(a>E);
	printf("The solution is %f",x1);
	printf("the iteration is %d",i);
	return 0;
}
