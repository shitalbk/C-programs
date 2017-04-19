#include <stdio.h>
int main()
{
	int fact;
	int i,j,k,r;
	for(i = 1;i<=100;i++)
	{ 
	fact = 0;
	for(j = 1;j<=100;j++)
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
		}
		
		}
	
	}

		
		

	
	
		
	

