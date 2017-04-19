#include <stdio.h>
int power(int b,int p);
int main()
{
	int b,p;
	printf("Please enter the base: ");
	scanf("%d",&b);
	printf("\nPlease enter the power:");
	scanf("%d",&p);
	printf("The result is %d",power(b,p));
}
int power(int b,int p)
{
	if(p==0)
	return 1;
	else if(p>0)
	return (b*power(b,p-1));
	else 
	return (power(b,p+1/b));
}
