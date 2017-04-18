#include <stdio.h>
#include <conio.h>

int main()
{
	int year;
	system("cls");
	printf("Please enter the year: ");
	scanf("%d",&year);
	if(year%4 ==0)
	{
			printf("The year you have entered is the leap year = %d",year);	
		}
		

	  else if(year%4 ==0 && year%100 ==0 && year%400 ==0)
		{
		printf("The year you have entered is the leap year = %d",year);	
		}
	else
		printf("The year you have entered is not the leap year. Thank You.??????!!!!!!!");
		return 0;
}
