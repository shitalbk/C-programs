#include <stdio.h>
int findroots(int a,int b,int c);
int main()
{
	int root,a,b,c;
	root = findroots(a,b,c);
}
int findroots(int a,int b,int c)
{
	int d;
	float sr,x1,x2;
	printf("Enter the coefficient of quadratic equation: ");
	scanf("%d%d%d",&a,&b,&c);
	d = b*b-4*a*c;
	if(d<0)
	{
		printf("Roots are imaginary");
	}
	else if(d==0)
	{
	    x1 = -b/(2.0*a);
		printf("Both roots are same & is:%.2f",x1);	
	}
	else
	{
		sr = sqrt(d);
		x1 = (-b+sr)/(2*a);
		x2 = (-b-sr)/(2*a);
		printf("x1 = %.2f\n x2 = %.2f",x1,x2);
	}
	
}
