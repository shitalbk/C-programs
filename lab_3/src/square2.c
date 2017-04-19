#include <stdio.h>
int main()
{
	int i = 1,n,sum = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	do
	{
	   printf("%d\ ",i);
	   sum = sum + i * i;
	   i++;	
	}while(i<=n);
	printf("\nThe sum is = %d",sum);
}

	
