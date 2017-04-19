#include <stdio.h>
int main()
{
	int a,*p;
a = 5;
p = &a;
printf("a = %d",*p);
printf("\naddress of a = %u",p);
}

