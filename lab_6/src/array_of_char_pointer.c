#include <stdio.h>
#include <stdlib.h>
void arrange(char *[],int);
int main()
{
	int i,n;
	char *name[20];
	printf("How many students: ");
	scanf("%d",&n);
	printf("Enter name of %d students:\n",n);
	for(i=0;i<n;i++)
	{
		name[i] = (char*)malloc(sizeof(char)*15);
		printf("Name of student %d =",i+1);
		scanf("%s",name[i]);
	}
	arrange(name,n);
	printf("Names in alphabetical order are:\n");
	for(i=0;i<n;i++)
	printf("%s\n",name[i]);
	for(i=0;i<n;i++)
	free(name[i]);
}
void arrange(char *name[],int n)
{
	int i,j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				temp = name[i];
				name[i] = name[j];
				name[j] = temp;
			}
		}
	}
}
