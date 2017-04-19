#include <stdio.h>
struct student
{
	int roll;
	char name[15];
};
typedef struct student record;
int main()
{
record st = {101,"Ayush"};
record *pst;
pst = &st;
printf("Roll = %d",pst->roll);
printf("\nName = %s",pst->name);

}

