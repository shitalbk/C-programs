//lab work 7 (b)- II
//fibonacci sequence by recursive function

#include<stdio.h>
#include<stdlib.h>
 
int Fibonacci(int);
 
main()
{
   int n, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 0 ; c < n ; c++ )
   {
      printf("%d\t", Fibonacci(c));
       
   }
 system("pause");
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 || n==1)
      return n;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
