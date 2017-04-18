#include <stdio.h>
int main()
{
	int year;
	printf("Please enter the year: ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("The year you have entered is a leap year = %d",year);
    }


	else if(year%4==0 && year%100==0 && year%400==0)
		{
		  printf("The year you have entered is a leap year = %d",year);
		}
		else
		printf("The year is not a leap year");
	}
	
