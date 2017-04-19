#include <stdio.h>
int main()
{
	
	int i,j;
	char a[20];
	printf("Please enter a line of text: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			for(j=i;a[j]!='\0';j++)
			a[j] = a[j+1];
		}
		
	}
	puts(a);
}
