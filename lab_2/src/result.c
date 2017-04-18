#include <stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5;
	float total,percent;
	printf("Please enter the marks of the five subjects: ");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	total = sub1 + sub2 +sub3 + sub4 + sub5;
	percent = total/5;
	printf("\nYour total marks is = %.2f",total);
	printf("\nYour percentage is = %.2f",percent);
	if(sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40)
	{
		printf("\nYou are passed.Great");
		if(percent>=80)
		{
			printf("\nYou have got Distinction.");
		}
		else if(percent<80 && percent>=60)
		{
			printf("\nYou have got first division");
		}
		else if(percent<60 && percent>=50)
		{
				printf("\nYou have got second division");
		}
		else
		{
				printf("\nYou have got third division");
		}
	}
	else
	{
		printf("\ndYou are failed.Sorry");
	}
}

