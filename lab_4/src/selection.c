#include <stdio.h>
int main()
{
	int i,j,temp,a[20],n,pointer;
	printf("Enter the size of the array less than 20: ");
	scanf("%d",&n);
	printf("Enter %d numbers in the array: \n",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers you entered are: ");
		for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	// selection sort begins
	
	for(i = 0;i<n-1;i++)
	{
		pointer = i;
		for(j = i+1;j<n;j++ )
		{
	      if(a[pointer]>a[j])
	     {
	     	pointer = j;
	     }
		if(pointer !=i)
		{
		   	temp = a[i];
		a[i] = a[pointer];
		a[pointer] = temp;	
		}
		
	}
}
	printf("\n");
		for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	

}
