/*Program to check whether a number is prime or not using user defined functions*/


#include<stdio.h>
#include<conio.h>

int isprime(int);

int main()
{
	int n;
	printf("Enter a positive number: ");
	scanf("%d",&n);
	if(isprime(n))
		printf("%d is prime.",n);
	else
		printf("%d is not prime.",n);
	getch();
	return 0;
}

int isprime(int n)
{
	int i,flag=1;
	if(n==1)
		return 0;
	else
		return 1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
    }
    if(flag==1)
    	return 1;
    else
    	return 0;
    
}
