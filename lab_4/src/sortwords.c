#include <stdio.h>
#include <string.h>
int main()
{
	char name[20][20];
	char temp[20][20];
	int i,j,n;
	printf("How many words do you want to enter: ");
	scanf("%d",&n);
	printf("Please enter %d words:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&name[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp[i],name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp[i]);
			}
		}
	}
	printf("The words sorted in alphabetical order is:\n");
		for(i=0;i<n;i++)
	{
		printf("%s ",name[i]);
	}
}
