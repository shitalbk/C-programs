#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c;
	printf("Please enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	c = a * b;
	printf("The multiplication of the two numbers is = %d", c);
	return 0;
	getch();
}
