// Lab work 7 (c)
// Product of two number by recursive function

 #include <stdio.h>
 #include<stdlib.h>
 
 int mul(int,int);
 
int main()
{
  int a,b;
 int prod;
  printf("Enter two numbers to multiply\n");
  scanf("%d %d",&a,&b);
 
  
    prod = mul(a,b);
 
  printf("\n The product  of %d and %d = %d\n", a,b, prod);
 system("pause");
  return 0;
}


int mul(int a, int b)
{
	if(b==1)
	  return a;
	else
	{
		return (a+mul(a,b-1));
	}	
}
