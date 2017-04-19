#include <stdio.h>
int main()
{
   int i = 1,n,r,factor=0;
   	printf("Enter a number: ");
   	scanf("%d",&n);
   	while(i<=n)
   	{
   	   r = n%i;
   	   if(r==0)
   	   {
   	   	factor++;
   	   	i++;
   	   }
   	   else
   	   i++;
		  	
   	}
   	if(factor==2)
   	{
   		printf("The number you have entered is a prime number = %d",n);
   	}
   	else
   	printf("The number you have entered is not a prime number = %d",n);
	
	
	
	
}

	  
    



	  	
	  





