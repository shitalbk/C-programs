#include <stdio.h>
#include <conio.h>

int main()
{
	float f,c;
	printf("Please enter the temperature in fahrenheit: ");
	scanf("%f",&f);
	c = (5*(f-32))/9;
	printf("The temperature converted in celsius is = %.2f ",c);
	getch();
	return 0;
	
}

	
