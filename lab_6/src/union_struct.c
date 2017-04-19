#include <stdio.h>
struct student
{
	int roll;
	char name[15];
	int age;
	
};
union ustudent
{
	int roll;
	char name[15];
	int age;
};
int main()
{
	struct student st;
	 
	printf("size of struct student is %d Bytes",sizeof(st));
	printf("\nEnter roll,name & age of st: ");
	scanf("%d%s%d",&st.roll,st.name,&st.age);
	printf("Detail of st is:\n");
	printf("Roll = %d\n Name = %s\n Age = %d\n",st.roll,st.name,st.age);
	union ustudent ust;
	printf("For student ust:\n");
	printf("Enter age: ");
	scanf("%d",&ust.age);
	printf("Enter name: ");
	scanf("%s",ust.name);
	printf("Age and name of ust is %d and %s",ust.age,ust.name);
}
