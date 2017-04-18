#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,sum,diff,prod,quot,rem;
	printf("Please enter the first number: ");
	scanf("%d",&a);
	printf("Please enter the second number: ");
	scanf("%d",&b);
	sum = a + b ;
	diff = a - b;
	prod = a * b;
	quot = a/b;
	rem = a%b;
	printf("\nThe sum is = %d",sum);
	printf("\nThe difference is = %d",diff);
	printf("\nThe product is = %d",prod);
	printf("\nThe quotient is = %d",quot);
	printf("\nThe remainder is = %d",rem);
	getch();
	return 0;
}

