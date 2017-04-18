#include <stdio.h>
int main()
{
	int a,b,c,d;

	printf("\nPlease enter four numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b && b>c && c>d)
	{
		printf("\nThe largest number is = %d",a);
		
	}
	else if(b>a && b>c && b>d)
	{
		printf("The largest number is = %d",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("The largest number is = %d",c);
	}
	else
	printf("The largest number is = %d",d);
	return 0;
	
	
}
