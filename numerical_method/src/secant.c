#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 2*x*x+4*x-10
#define E	0.001
int main()
{
	float f0,f1,f2,x0,x1,x2,e;
	int flag=1;
	printf("enter two initial guesses:\n\n");
	scanf("%f %f",&x0,&x1);
	
	do
	{
		printf("\t\t\tITERATION NUMBER %d\n\n\n\n",flag);
		flag++;
		f0=f(x0);
		f1=f(x1);
		x2=x1-((f1*(x1-x0))/(f1-f0));
		e=fabs(x2-x1)/x2;
		
		printf("the value of x2 is: %f\n\n",x2);
		printf("error is %f\n\n",e);
		if(e>E)
		{
		printf("since %f is greater than 0.001,so process continues:\n\n",e);
	}
		x0=x1;
		x1=x2;		
	}while(e>E);
	printf("%f is less than 0.001, so process stop and its value is %d",e,x1);
	return 0;
}
