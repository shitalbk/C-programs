#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	int t =2;
	int i = 1;
	printf("Please enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",t);
		t = t+2;
		i++;
	}
	return 0;
}
