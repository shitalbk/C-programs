#include <stdio.h>
#include <conio.h>

int main()
{
	int o,t,h,sum;
	int n = 123;
	int temp = 123;
	temp = n;

	o = n%10;
	n = n/10;
	t = n%10;
	n = n/10;
	h = n%10;
	n = n/10;
	
	sum = o + t + h;
	printf("The sum of the digits of %d is = %d",temp,sum);
	getch();
	return 0;
}
	
	
