#include <stdio.h>
int sort(int *a,int *b);
int main()
{
	int a[10],n,i;
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The number you entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int sort(int *a,int *b)
{
	
}
