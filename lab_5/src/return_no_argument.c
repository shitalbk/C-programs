#include <stdio.h>
float simple_interest();
int main()
{
  	printf("The simple interest is = %.2f",simple_interest());
}
float simple_interest()
{
	float p,r,si;
	int t;
	printf("Enter the value of principal, time & rate: ");
	scanf("%f%d%f",&p,&t,&r);
	si = (p*t*r)/100;
	return si;
}
