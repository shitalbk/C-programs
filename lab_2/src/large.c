#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter the first number: ");
	scanf("%d",&a);
	printf("Please enter the second number: ");
	scanf("%d",&b);
	printf("Please enter the third number: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(b>c)
		{
			printf("The largest number is = %d",a);
		}
		else
		printf("The largest number is = %d",c);
	}
	 else
	 {
	 		if(b>c)
		{
			printf("The largest number is = %d",b);
		}
		else
		printf("The largest number is = %d",c);
	 }
	
	
}

