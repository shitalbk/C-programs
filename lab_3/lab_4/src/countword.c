#include <stdio.h>
int main()
{
	int i,j=0;
	char a[100];
	printf("Enter a line of text: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		
		 if(a[i]==' ')
		{
		  j++;
		}	
		
		
	}
	printf("%d",j+1);
}
