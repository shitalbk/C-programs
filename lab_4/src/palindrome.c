#include <stdio.h>
int main()
{
	char str[40];
	int i,j,flag = 1;
	printf("Enter a string: ");
	gets(str);
	i = 0;
	while(str[i]!='\0')
	{
		i++;
	}
	for(j=0;j<i/2;j++)
	{
		if(str[j]!=str[i-1-j])
		{
			flag = 0;
			break;
		}
	}
	if(flag==1)
	printf("%s is palindrome",str);
	else
	printf("%s is non-palindrome",str);
}
