#include <stdio.h>
int area(int l,int b,int h);
int main()
{
	int l,b,h;
	printf("Enter the length, breadth & height of the box: ");
	scanf("%d%d%d",&l,&b,&h);
	printf("The area of the box is = %d",area(l,b,h));
  	
}
int area(int a, int b, int c)
{
	int area;
	area = 2*((a*b)+(b*c)+(a*c));
	return area;
	
}
