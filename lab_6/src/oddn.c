#include <stdio.h>
int main()
{
	int i,n,j=1;
	printf("Enter the numbers: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		printf("%d\ ",j);
		j = j+2;
	}
}
