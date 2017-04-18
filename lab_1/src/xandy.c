#include <stdio.h>
int main()
{
float x,y,a,b,sum;
printf("Please enter the value of a: ");
scanf("%f",&a);
printf("Please enter the value of b: ");
scanf("%f",&b);
x = (a*a*a) + (3*a*a*b) + (b*b*b);
y = (a+b)/(b*(a-b));
sum = x + y;
printf("The sum of x and y is = %.2f",sum);
return 0;
}



