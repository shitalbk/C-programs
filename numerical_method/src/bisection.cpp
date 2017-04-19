#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
#define E 0.1
#define f(x) 3*x*x-6*x+2
int main()
{
	system("cls");
	int count=0;
	float x0,a,b,f0,f1,f2;
	printf("enter the value of x1\n");
	scanf("%f",&a);
	printf("enter the value of x2\n");
	scanf("%f",&b);
	f1=f(a);
	f2=f(b);
	if((f1*f2)>0)
	{
	printf("solution does not exist:\n");
	
}
	else
	{
	{	begin :
			x0=(a+b)/2;
			f0=f(x0);
			if((f1*f0)<0)
			{
			b=x0;
			f2=f0;
		}
			else{
			
		
		a=x0;
		f1=f0;
	}
	}
	if((fabs(b-a)/a)<E)
	{
		x0=(a+b)/2;
		printf("\nRoot=%f",x0);
		printf("\nFunctional value=%f",f0);
		printf("\nIteration step=%d",count);
	}
	else
	{
		count ++;
		goto begin;
	}
}
	
	getch();
	return 0;
}


