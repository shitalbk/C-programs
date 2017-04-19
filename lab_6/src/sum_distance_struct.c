#include <stdio.h>
struct dist
{
	int feet;
	float inches;
};
typedef struct dist distance;
distance add(distance,distance);
void showdist(distance);
int main()
{
	distance d1,d2,d3;
	printf("Enter distance d1 in feet & inches: ");
	scanf("%d%f",&d1.feet,&d1.inches);
	printf("\nEnter distnace d2 in feet & inches: ");
	scanf("%d%f",&d2.feet,&d2.inches);
	d3 = add(d1,d2);
	printf("\nDistance d1 is: ");
	showdist(d1);
	printf("\nDistance d2 is: ");
	showdist(d2);
	printf("\nsum of d1 & d2 is: ");
	showdist(d3);
}
void showdist(distance d)
{
	printf("%d\'-%g\"",d.feet,d.inches);
}
distance add(distance d1,distance d2)
{
	distance temp;
	temp.feet = 0;
	temp.inches = d1.inches + d2.inches;
	while(temp.inches>=12)
	{
		temp.inches-=12;
		temp.feet++;
	}
	temp.feet+= d1.feet + d2.feet;
	return (temp);
}
