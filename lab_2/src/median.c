#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter the first number: ");
	scanf("%d",&a);
	printf("Please enter the second number: ");
	scanf("%d",&b);
	printf("Please enter the third number: ");
	scanf("%d",&c);
	 if(a<b && b<c)
	 {
	 	printf("The medain is = %d",b);
	 }
	 else if(c<a && b>a)
	 {
	 	printf("The median is = %d",a);
	 }
	 else if(a>c && b<c)
	 printf("The median is = %d",c);
	 else
	 printf("Thank you");
   
	return 0;
}
