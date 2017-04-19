//Lab work 7(a)-II
// Factorial by recursive  function

 #include <stdio.h>
 #include<stdlib.h>
 
 int factorial(int);
 
int main()
{
  int n;
 int fact;
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
  
    fact = factorial(n);
 
  printf("Factorial of %d = %d\n", n, fact);
 system("pause");
  return 0;
}


int factorial(int n)
{
	if(n==0)
	  return 1;
	else
	{
		return (n*factorial(n-1));
	}
	  
	
	
	}
