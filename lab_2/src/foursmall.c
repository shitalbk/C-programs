#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Please enter the four numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b && a<c && a<d)
	{
		printf("The smaller number is = %d",a);
	}
	else if(b<a && b<c && b<d)
	{
		printf("The smaller number is = %d",b);
	}
	else if(c<a && c<b && c<d)
	{
		printf("The smaller number is = %d",c);
	}
	else
	printf("The smaller number is = %d",d);
	
}
