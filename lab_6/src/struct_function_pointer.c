#include <stdio.h>
struct student
{
	int roll;
	char name[15];
	int mc;

};
typedef struct student record;
void read(record *);
void display(record *);
int main()
{
	record st[10];
	int i,n;
	printf("How many students: ");
	scanf("%d",&n);
	printf("Enter detail of %d students:\n",n);
	for(i=0;i<n;i++)
	{
		printf("For student %d:\n",i+1);
		read(&st[i]);
	}
	printf("Detail of students are:\n");
	printf("--------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("For student %d:\n",i+1);
		printf("---------------------\n");
		display(&st[i]);
		printf("-----------------------\n");
	}
}
void read(record *pt)
{
	printf("Roll =");
	scanf("%d",&pt->roll);
	printf("Name = ");
	scanf("%s",pt->name);
	printf("Marking FOCP =");
	scanf("%d",&pt->mc);	
}
void display(record *pt)
{
	printf("Roll =%d\n",pt->roll);
	printf("Name=%s\n",pt->name);
	printf("Mark in FOCP = %d",pt->mc);
}
