#include <stdio.h>
int main()
{
	int r,i;
	int rev = 0;
	int n = 132;
	
		
	while(n!=0)
	{
		r = n%10;
	rev = rev*10+r;	
	n = n/10;
	}
	printf("%d",rev);	
	}

      
	  	
	

      
	
	

