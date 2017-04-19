#include <stdio.h>
int bubble(int num[],int n);
int main()
{
	int num[20],i,n;
	printf("Please enter the size of array less than 20: ");
	scanf("%d",&n);
	printf("Please enter %d numbers in the array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("The numbers you entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	 bubble(num,n);

}
int bubble(int num[],int n)
{
	int i,j,temp;
	//bubblesort begins
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
			printf("\nThe numbers rearranged in the ascending order are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
     return num[i];
}
