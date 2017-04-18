#include <stdio.h>
#include <conio.h>

int main()
{
	int days,years,months;
	printf("Please enter the number of days: ");
	scanf("%d",&days);
	years = days/365;
	months = (days%365)/30;
	days = (days%365)%30;
	printf("%d years,%d months,%d days\n",years,months,days);
	getch();
	return 0;
}

	
