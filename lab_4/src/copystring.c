#include <stdio.h>
int main()
{
	char string1[40],string2[40];
	int i,j;
	printf("Enter a string: ");
	gets(string1);
	i = 0;
	while(string1[i]!='\0')
	{
		string2[i] = string1[i];
		i++;
	}
	string2[i] = '\0';
	printf("After copying the string string2 is: \n %s",string2);
}
