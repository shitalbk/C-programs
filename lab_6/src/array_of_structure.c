#include <stdio.h>
struct student
{
	int roll;
	char name[15];
	int age;
	
};
int main()
{
	struct student st[20];
	int i,n;
	printf("Enter how many students[<=20]: ");
	scanf("%d",&n);
	printf("Enter detail of %d student:\n",n);
	for(i=0;i<n;i++)
	{
		printf("For student %d:\n",i+1);
		printf("Roll =");
		scanf("%d",&st[i].roll);
			printf("Name =");
		scanf("%s",&st[i].name);
			printf("Age =");
		scanf("%d",&st[i].age);
	}
	printf("\t\tstudents detail are:\n");
	printf("Roll\t\tName\t\tAge\n");
	printf("---------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t%d\n",st[i].roll,st[i].name,st[i].age);
	}
}
