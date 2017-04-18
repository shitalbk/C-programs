#include <stdio.h>
#include <conio.h>
#define PI 3.141593
int main()
{
	float r,area,circum;
	printf("Please enter the radius of the circle: ");
	scanf("%f",&r);
	area = PI * r * r;
	circum = 2 * PI * r;
	printf("\nThe area of the circle is = %.2f ",area);
	printf("\nThe circumference of the circle is = %.2f ",circum);
	getch();
	return 0;
}

