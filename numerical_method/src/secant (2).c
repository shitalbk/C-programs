#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
#define E 0.001
#define f(x) 2*x*x+4*x-10

int main()
{
	double a;
		int count=0;
 	float x0,x1,x2,f0,f1,f2;
 	printf("Secant Method\n\n");
 	printf("Enter the value of x0:");
 	scanf("%f",&x0);
 	printf("Enter the value of x1:");
 	scanf("%f",&x1);
 	do
	{
	f1 = f(x0);
 	f2 = f(x1);
 	x2 = x1-(f2*(x1-x0))/(f2-f1);
    a = fabs(x2-x1)/x2;
 	if(a>E)
 	{
 		x0 = x1;
 		x1 = x2;
 		count++;
 	}
	  		
 	}while(a>E);
 	printf("The root is %f",x2);
 	printf("\nThe iteration is %d",count++);
 	getch();
 	return 0;
 
}
