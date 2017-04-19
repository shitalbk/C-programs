#include <stdio.h>
int main()
{
	int a[10],i;
	printf("Enter 10no.s: ");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("With Pointer representation:\n");
	for(i=0;i<10;i++)
	{
		printf("a+%d = %x\t *(a+%d)=%d \n",i,a+i,i,*(a+i));
	}
}
