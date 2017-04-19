/*program to find the factorial of number using function*/
#include<stdio.h>
#include<conio.h>

long int fact(int);

int main()
{
	int n;
	long int f;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<0)
		printf("Factorial of negative number doesn't exist.");
	else
	{
	f=fact(n);
	printf("Factorial of %d is %1d",n,f);
    }
	getch();
	return 0;
}

long int fact(int n)
{
	long int fa=1;
	int i;
	for(i=n;i>=1;i--)
	fa*=i;
	return(fa);
}
