#include <stdio.h>
int small(int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Please enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The small number is = %d",small(a,b,c));
}
int small(int p,int q,int r)
{
	int s;
	if(p<q && p<r)
	{
		s = p;
	}
	else if(q<p && q<r)
	{
		s = q;
	}
	else
	{
		s = r;
	}
	return s;
}
