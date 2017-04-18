#include <stdio.h>
#include <conio.h>

int main()
{
	int male,female;
	float ratio;
	printf("Please enter the number of male: ");
	scanf("%d",&male);
	printf("Please enter the number of female: ");
	scanf("%d",&female);
	ratio = (float)female/male;
	printf("The ratio of the female and male student is = %.2f",ratio);
	getch();
	return 0;
}

