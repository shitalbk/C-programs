#include <stdlib.h>
#include <stdio.h>
struct student
{
	int roll;
	char name[15];
	int mark[5];
	int tm;
	float per;
};
typedef struct student record;
int main()
{
   int i,j,n;
   record *st[i];
   printf("How many students: ");
   scanf("%d",&n);
   st[i]= (record *)malloc(sizeof(record)*n);
   printf("Enter roll,name & marks in five subjects of %d students:\n",n);
   for(i=0;i<n;i++)
   {
   	scanf("%d%s",&st[i]->roll,st[i]->name);
   	st[i]->tm =0;
   	for(j=0;j<5;j++)
   	{
   		scanf("%d",&st[i]->mark[j]);
   		st[i]->tm+=st[i]->mark[j];
   	}
   	st[i]->per = st[i]->tm/5.0;
   }
   printf("Results of students are:\n");
   printf("Roll\tName\tsub1\tsub2\tsub3\tsub4\tsub5\tTotal\tpercentage\n");
   for(i=0;i<n;i++)
   {
   	printf("%d\t%s\t",st[i]->roll,st[i]->name);
   	for(j=0;j<5;j++)
   	printf("%d\t",st[i]->mark[j]);
   	printf("%d\t%.2f\n",st[i]->tm,st[i]->per);
   	
   }
   free(st[i]);
}
