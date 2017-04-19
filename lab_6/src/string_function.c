#include <stdio.h>
void display_string(char *st);
int main()
{
	char str[80];
	printf("Enter a string: ");
	gets(str);
	printf("String you entered is:\n");
	display_string(str);
	
}
void display_string(char *st)
{
	while(*st)
	{
		putchar(*st);
		st++;
    }
}
