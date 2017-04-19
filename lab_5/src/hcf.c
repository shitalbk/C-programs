#include <stdio.h>
int hcf(int a,int b);
int main()
{
   int a,b;
   printf("Please enter two numbers:\n");
   scanf("%d%d",&a,&b);
   printf("The hcf is = %d",hcf(a,b));	
}
int hcf(int p,int q)
{
	int r;
	r = p%q;
	while(r!=0)
	{
		p = q;
		q = r;
		r = p%q;	
	}
	return q;
}
