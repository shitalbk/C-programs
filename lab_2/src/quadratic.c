#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	float sr,root1,root2;
	printf("Enter the coefficient of quadratic equation: ");
	scanf("%d%d%d",&a,&b,&c);
	d = b*b-4*a*c;
	if(d<0)
	{
		printf("Roots are imaginary");
	}
	else if(d==0)
	{
		root1 = -b/(2.0*a);
		printf("Both roots are same and is = %.2f",root1);
	}
	else
	{
		sr = sqrt(d);
		root1 = (-b+sr)/(2*a);
		root2 = (-b-sr)/(2*a);
		printf("The first root is = %d",root1);
		printf("The second root is = %d",root2);
	}
}

