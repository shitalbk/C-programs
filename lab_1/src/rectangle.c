#include <stdio.h>
#include <conio.h>

int main()
{
	int l,b,area,peri;
	printf("Please enter the length of the rectangle: ");
	scanf("%d",&l);
	printf("Please enter the breadth of the rectangle: ");
	scanf("%d",&b);
	area = l * b;
	peri = (2*l) + (2*b);
	printf("\nThe area of the rectangle is = %d",area);
	printf("\nThe perimeter of the rectangle is = %d",peri);
	getch();
	return 0;
}
	
	
