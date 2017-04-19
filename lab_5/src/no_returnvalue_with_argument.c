#include <stdio.h>
void simple_interest(float p, int t, float r);
int main()
{
	float p,r;
	int t;
	printf("Enter the principal,time & rate: ");
	scanf("%f%d%f",&p,&t,&r);
	 simple_interest(p,t,r);
}
void simple_interest(float p,int t,float r)
{
	float s;
	s = (p*t*r)/100;
	printf("The simple interest is = %.2f",s);
}
