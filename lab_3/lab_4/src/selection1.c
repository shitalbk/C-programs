#include <stdio.h>
int main()
{
	int a[20],i,j,n,pointer,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: ",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
	//selection sort begins
	for(i=0;i<n;i++)
	{
		pointer = i;
		for(j = i+1;j<n;j++)
		{
		  if(a[pointer]>a[j])
		  {
		  	pointer = j;
		  }
		}
		if(pointer!=i)
		{
			temp = a[i];
			a[i] = a[pointer];
			a[pointer] = temp;
		}
	}
	printf("\n");
    for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
