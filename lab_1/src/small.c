#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && b<c)
	{
		printf("The smallest number is = %d ",a);
		
	}
	else if(b<c && b<a)
	{
		printf("The smallest number is = %d",b);
		
	}
	else
	printf("The smallest number is = %d",c);
	return 0;
}

