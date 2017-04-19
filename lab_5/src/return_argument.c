#include <stdio.h>
float simple_interest(float p,int t,float r);
int main()
{
    float p,r,si;
	int t;
	printf("Enter the principal, time and rate: ");
	scanf("%f%d%f",&p,&t,&r);
	si = simple_interest(p,t,r);
	printf("The simple interest is = %.2f",si);
}
float simple_interest(float p, int t, float r)
{
	float s;
	s = (p*t*r)/100;
	return s;
	
}
