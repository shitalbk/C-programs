#include <stdio.h>
int main()
{
	char string[80],temp;
	int i,j;
	printf("Please enter a string: ");
	gets(string);
	j = 0;
	do 
	{
		j++;
	}while(string[j]!='\0');
	for(i=0;i<j/2;i++)
	{
		temp = string[i];
		string[i] = string[j-1-i];
		string[j-1-i] = temp;
	}
	puts(string);
}
