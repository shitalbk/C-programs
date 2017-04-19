#include <stdio.h>
int square(int);
int (*ptr)(int);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	ptr = square;
	s = (*ptr)(n);
	printf("square of %d is %d",n,s);
}
int square(int n)
{
	return (n*n);
}
