#include <stdio.h>
int *large(int *,int *);
int main()
{
	int a,b,*l;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	l = large(&a,&b);
	printf("Larger number = %d",*l);
	
}
int *large(int *p,int *q)
{
	if(*p>*q)
	return p;
	else
	return q;
}
