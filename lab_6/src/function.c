#include <stdio.h>
int func()
{
	int i = 0;
	printf("This is the function\n");
	i+=25;
	return i;
}
int main(int argc, char ** argv)
{
	printf("Hello World\n");
	printf("The value is = %d",func());
	return 0;
}
