#include <stdio.h>
void simple_interest();
int main()
{
	simple_interest();
}
void simple_interest()
{
	float p,r,si;
	int t;
	printf("Please enter the principal,time and rate: ");
	scanf("%f%d%f",&p,&t,&r);
	si = (p*t*r)/100;
	printf("The simple interest is = %.2f",si);
}
