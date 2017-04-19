#include <stdio.h>
#include <string.h>
int main()
{
	char temp[20][20];
	int i,j;
	char name[20][20] = {"aman","akesh","anish", "anam", "anil", "anju"};
	for(i=0;i<7;i++)
	{
			printf("\n%s ",name[i]);
	}
	printf("\n");
	printf("The name in sorted order are:\n");
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp[i],name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp[i]);
			}
		}
	}
	for(i=0;i<7;i++)
	{
		printf("\n%s ",name[i]);
	}

}
