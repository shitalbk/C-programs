#include <stdio.h>
int main()
{
	int i,n,sum = 0;
    for( i = 1;i<=10;i++)
    {
    	printf("%d\ ",i);
    	sum = sum + i*i*i;
    }
    printf("\nThe sum of the cube of natural numbers is = %d",sum);
}

	
