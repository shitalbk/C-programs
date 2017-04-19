#include <stdio.h>
int main()
{
	int i,n,sum = 0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i =1;i<n;i++)
	{
	    if(i%2==0)
		{
			printf("%d\ ",i);
			sum = sum + i;
			
		}	
	}
	printf("\nThe sum is = %d",sum);
}

