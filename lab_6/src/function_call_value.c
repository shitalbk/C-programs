#include <stdio.h>
void change(int);
int main()
{
	int a = 5,b;
	printf("Before function call:\n");
	printf("a = %d",a);
   change(a);
	printf("\nAfter function call:");
	printf("a = %d",a);
}
void change(int a)
{
	a = a+4;
	
}
