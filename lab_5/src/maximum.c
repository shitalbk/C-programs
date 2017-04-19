#include <stdio.h>
void max(int a,int b);
int main()
{
	int a,b;
	printf("Please enter any two numbers: ");
	scanf("%d%d",&a,&b);
	max(a,b);
}
void max(int a,int b)
{
	int l;
	if(a>b)
	{
	  l = a;	
	}
	else
	{
		l = b;
	}
	printf("The large number is = %d",l);
}
