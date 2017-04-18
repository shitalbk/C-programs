#include <stdio.h>
int main()
{
	int a,b,sum,diff,pro,divide;
 char ch;

printf("\t\t\tMENU\t\t\t\n");
printf("\t\t\t======\t\t\t\n");
printf("+ For Addition\n");
printf("- For Subtraction\n");
printf("* For Multiplication\n");
printf("/ For Integer Division\n");
printf("\nEnter your choice: ");
scanf("%c",&ch);
 printf("Enter value of a: ");
 scanf("%d",&a);
  printf("Enter value of b: ");
 scanf("%d",&b);
switch(ch)
{
case '+':
	sum = a+b;
	printf("\nThe sum is = %d",sum);
	break;
case '-':
		diff = a-b;
		printf("\nThe subtraction is = %d",diff);
		break;
case '*':
  pro = a*b;
  printf("\nThe product is = %d",pro);
  break;
  case '/':
  	divide = a/b;
  	printf("\nThe division is = %d",divide);
  	break;
  	default:
  		printf("\nPlease enter correct value");
   }
   
	
}


