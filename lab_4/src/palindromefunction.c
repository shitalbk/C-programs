#include <stdio.h>
#include <string.h>
int main()
{
   	char str[40],temp[40];
   	int i,j;
   	printf("Enter a word: ");
   	scanf("%s",str);
   	strcpy(temp,str);
   	strrev(str);
   	if(strcmp(str,temp)==0)
   	printf("\"%s\"is palindrome",temp);
   	else
   	printf("\"%s\"is not a palindrome",temp);
}
