#include <stdio.h>
int main()
{
	int emp,sal[20],i,count = 0;
	char name[20];
	printf("Enter the numbers of employees: ");
	scanf("%d",&emp);
	printf("Enter the name and the salary of the employee: ");
	printf("\n");
	for(i=0;i<emp;i++)
	{
		scanf("\n%s %d",&name[i],&sal[i]);
	}
	for(i=0;i<emp;i++)
	{
		if(sal[i]>=40000 && sal[i]<=60000)
		{
			count++;
			
		}
	}
	printf("%d employees recieve salary between 40000 and 60000",count);
}
