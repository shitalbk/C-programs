#include <stdio.h>
int main()
{
	int fact;
	int i,j,n,r,total = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{ 
	fact = 0;
	for(j = 1;j<=n;j++)
	{
		r = i%j;
			if(r==0)
		{
			fact++;
		}
		
	}
	
		if(fact==2)
		{
			printf("%d\ ",i);
				total++ ;
			
		}
		
		}
		printf("\nThe total prime numbers is %d",total);
	
	}

		
		

	
	
		
	

