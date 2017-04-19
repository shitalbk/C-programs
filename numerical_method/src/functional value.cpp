/*program to find Root of a function*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
#define E 0.001
#define f(x) 3*x*x-6*x+2
 int main()
 {

 	int count=0;
 	float x0,x1,x2,f0,f1,f2;
 	printf("Bisection Method\n\n");
 	printf("Enter the value of x1:");
 	scanf("%f",&x1);
 	printf("Enter the value of x2:");
 	scanf("%f",&x2);
 	f1=f(x1);
 	f2=f(x2);
 	if(f1*f2>0)
 	printf("Solution does not exit!!!");
 	else
 	{
 		begin:
 			x0=(x1+x2)/2;
 			f0=f(x0);
 			if((f1<f0)<0)
 			x2=x0;
 			else
 			{
 				x1=x0;
 				f1=f0;
 			}
 			if((fabs(x2-x1)/x1)<E)
 			{
 				x0=(x1+x2)/2;
				 printf("\nRoot=%f",x0);
				 printf("\nFunctional value =%f",f0);
				  		printf("\nIteration steps =%d",count);
			}
				  	else
				  	{
				  		count ++;
				  		 goto begin;
				  		
				  	}
	}	
				  			getch();
				  			
 			
 	}
 
 
