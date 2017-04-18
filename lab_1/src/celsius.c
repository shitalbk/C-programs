#include <stdio.h>
#include <conio.h>

int main()
{
	float f,c;
	printf("Please enter the temperature in celsius: ");
	scanf("%f",&c);
	f = 1.8 * c + 32;
	printf("The temperature converted in fahrenheit is = %.2f ",f);
	getch();
	return 0;
	
}

	
