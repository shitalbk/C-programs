#include <stdio.h>

/* Fuck this man its just a COMMENT */
int main()
{
	int r,n;
int factor = 0;
int i = 1;
printf("Please enter the number: ");
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
	{
		i++;	
	}
	
}
if(factor==2)
{
	printf("The number you have entered is a prime number. Thank you!!Yipeeeeeeeeeeeeeeee!!!");
}
else{
	printf ("The number you have entered is not a prime number. Dhanyabaad!!");
}
			

}
