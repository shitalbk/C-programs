#include <stdio.h>
int main()
{
	int a[20],i,n,count = 0,count1 = 0,count2 = 0,count3 =0,count4 = 0;
	printf("Please enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter %d ages in the array: ",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++)
	{
		if(a[i]<13)
		{
		count = count + 1;	
		printf("\nCHILD");
	
		}
		
	    if(a[i]>=13 && a[i]<20)
		{
			count1 = count1 + 1;
			printf("\nTEEN");
		}
	    if(a[i]>=20 && a[i]<31)
		{
			count2 = count2 + 1;
			printf("\nADULT");
		}
		if(a[i]>=31 && a[i]<55)
		{
			count3 = count3 + 1;
			printf("\nYOUNG");
		}
		if(a[i]>=55)
		{
			count4 = count4 + 1;
			printf("\nOLD");
		}
		
	}
		printf("\n%d child ",count);
		printf("\n%d teen ",count1);
		printf("\n%d adult ",count2);
		printf("\n%d young ",count3);
		printf("\n%d old ",count4);
		
}
