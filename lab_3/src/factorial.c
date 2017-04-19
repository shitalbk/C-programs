#include <stdio.h>
int main()
{
    long int i,n,fact = 1;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i = 1;i<=n;n--)
	{
		fact = fact * n;
		
	}
	printf("\nThe factorial of the number is = %d",fact);
}

