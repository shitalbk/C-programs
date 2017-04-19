#include <stdio.h>
int main()
{
	
	int i,j;
	char s[80],t[80];
	printf("Enter string s: ");
	gets(s);
	printf("Enter string t: ");
	gets(t);
	i = 0;
	while(s[i]!= '\0')
	{
		i++;
	}
	j = 0;
    while(t[j]!='\0')
    {
    	s[i+j] = t[j];
    	j++;
    }
    s[i+j] = '\0';
	printf("After concatenation s is: \n%s",s);
}
