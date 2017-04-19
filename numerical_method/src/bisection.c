#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
#define E 0.001
#define f(x) x*x-4*x-10
int main()
{
	clrscr();
	int count=0;
	float x0,x1,x2,f0,f1,f2;
	printf("enter the value of x1\n");
	scanf("%f",&x1);
	printf("enter the value of x2\n");
	scanf("%f",&x2);
	f1=f(x1);
	f2=f(x2);
	if((f1*f2)>0)
	printf("solution does not exist:\n");
	else
	{
		begin :
		x1=x0;
		f1=f0;
	}
	if((fabs(x2-x1)/x1)<E)
	{
		x0=(x1+x2)/2;
		printf("\nRoot=%f",x0);
		printf("\nFunctional value=%f",f0);
		printf("\nIteration step=%d",count);
	}
	else
	{
		count ++;
		goto begin;
	}
	
	getch();
	return 0;
}


