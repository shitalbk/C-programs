#include <stdio.h>
int pro_natural(int a,int b);
int main()
{
	int a,b,pro;
	printf("Please enter two numbers: ");
	scanf("%d%d",&a,&b);
	pro = pro_natural(a,b);
	printf("The product of %d and %d is %d",a,b,pro);
}
int pro_natural(int a,int b)
{
static int	pro =0,i=0;
	if(i<a)
	{
		pro = pro + b;
		i++;
		pro_natural(a,b);
	}
	return pro;
	
}
