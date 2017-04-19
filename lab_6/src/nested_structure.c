#include <stdio.h>
struct dist 
{
	int feet;
	float inches;
};
struct room
{
	struct dist length;
	struct dist breadth;
	
};
int main()
{
	float lfeet,bfeet,area;
	struct room cr;
	printf("Enter the length of class room: ");
	printf("\nfeet=");
	scanf("%d",&cr.length.feet);
	printf("Inches =");
	scanf("%f",&cr.length.inches);
	printf("Enter breadth of class room: ");
	printf("\nfeet=");
	scanf("%d",&cr.breadth.feet);
	printf("Inches =");
	scanf("%f",&cr.breadth.inches);
	lfeet = cr.length.feet + cr.length.inches/12;
	bfeet = cr.breadth.feet + cr.breadth.inches/12;
	area = lfeet * bfeet;
	printf("Area of class room = %g",area);
}
