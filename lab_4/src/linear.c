#include <stdio.h>
int main()
{
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	int a[20] = {22,3,4,5,1,7,24,9,47,90,42,44,66,77,13,49,52,6,43,12};
	for(i=0;i<20;i++)
	{
	   	if(num==a[i])
		   {
		       printf("%d is found in position %d",num,i+1);
			   break;	
	   	   }
	   	   if(i==19)
	   	   printf("The number %d is not in the list",num);
	}
      	
}
