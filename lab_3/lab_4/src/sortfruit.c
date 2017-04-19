#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	char temp[20][20];
	char fruit[20][20] = {"orange","guava","banana","apple","mango","grapes"};
	for(i=0;i<6;i++)
	{
		printf("%s\t",fruit[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(strcmp(fruit[i],fruit[j])>0)
			{
				strcpy(temp[i],fruit[i]);
				strcpy(fruit[i],fruit[j]);
				strcpy(fruit[j],temp[i]);
			}
		}
	}
	printf("\nAfter sorting: ");
	for(i=0;i<6;i++)
	{
		printf("%s\t",fruit[i]);
	}
}
