#include <stdio.h>
#include <stdlib.h>
int main()
{
	int roll,i,n;
	char name[15],add[25];
	FILE *fp;
	fp =fopen("record.dat","w");
	if(fp==NULL)
	{
		printf("File not created");
		exit(0);
	}
	else
	{
		printf("how many students: ");
		scanf("%d",&n);
		printf("Enter roll,name and address of %d students:\n",n);
		for(i=1;i<=n;i++)
		{
			scanf("%d%s%s",&roll,name,add);
			fprintf(fp,"%d\t%s\t%s\n",roll,name,add);
		}
		fclose(fp);
		fp=fopen("record.dat","r");
		if(fp==NULL)
		printf("File not found");
		else
		{
			printf("Roll\tName\tAddress\n");
			while(fscanf(fp,"%d%s%s",&roll,name,add)!=EOF)
			printf("%d\t%s\t%s\n",roll,name,add);
			fclose(fp);
		}
	}
}
