#include <stdio.h>
#include <conio.h>

int main()
{
	int o,t,h,th,rev;
	int n;
    printf("Please enter the four digit number: ");
    scanf("%d",&n);
	o = n%10;
	n = n/10;
	t = n%10;
	n = n/10;
	h = n%10;
	n = n/10;
	th = n%10;
	n = n/10;
	
	rev = (o * 1000 )+(t * 100)  + (h * 10) + th;
	printf("The rev of the digits of is = %d",rev);
	getch();
	return 0;
}
	

