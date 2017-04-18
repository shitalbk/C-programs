#include <stdio.h>
#include <stdlib.h>
int main()
{
float l,b,area,peri;
char ch;
printf("\na for Area");
printf("\np for Perimeter");
printf("\ne for Exit");
printf("\nPlease enter your choice: ");
scanf("%c",&ch);


switch(ch)
{
	case 'a':
		printf("\nPlease enter the length of the rectangle: ");
scanf("%f",&l);
printf("\nPlease enter the breadth of the rectangle: ");
scanf("%f",&b);
		area = l*b;
		printf("\nThe area of the rectangle is = %.2f",area);
		break;
	case 'p':
		printf("\nPlease enter the length of the rectangle: ");
scanf("%f",&l);
printf("\nPlease enter the breadth of the rectangle: ");
scanf("%f",&b);
		peri = 2*(l+b);
		printf("\nThe perimeter of the rectangle is = %.2f",peri);
		break;
	case 'e':
		exit(0);
		break;
	default:
		printf("\nPlease enter the correct character");
	   
		
}	
}

