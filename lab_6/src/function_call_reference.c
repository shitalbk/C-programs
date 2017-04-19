#include <stdio.h>
void change(int *p);
int main()
{
	int a;
	a = 5;
	printf("Before calling function call:\n ");
	printf("a = %d",a);
	change(&a);
	printf("\nAfter function call:\n");
	printf("a = %d",a);
	return 0;
}
void change(int *p)
{
	*p = *p+4;
}
