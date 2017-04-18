#include <math.h>
#include <stdio.h>


int main()
{
	int a,b,c;
	int ang_a,ang_b,ang_c;
   int s,area,semi;
	printf("Please enter the first side of the Triangle: ");
	scanf("%d",&a);
	printf("Please enter the second side of the Triangle: ");
	scanf("%d",&b);
	printf("Please enter the third side of the Triangle: ");
	scanf("%d",&c);
	
	printf("Please enter the angle a of the Triangle: ");
	scanf("%d",&ang_a);
	printf("Please enter the angle b of the Triangle: ");
	scanf("%d",&ang_b);
	printf("Please enter the angle c of the Triangle: ");
	scanf("%d",&ang_c);
	
	if(((a+b)>c && (b+c)>a && (c+a)>b) && (ang_a+ang_b+ang_c==180))
	{
		s = 0.5*(a+b+c);
	    semi = s*((s-a)*(s-b)*(s-c));
	    area = sqrt(semi);
     	printf("\nThe area of the triangle is = %d",area);	
	}
	else 
	printf("\nPlease enter the correct sides and angles of the triangle.Thank you!!!");
	
		if((a==b && b==c && c==a) && (ang_a==60 && ang_b==60 && ang_c==60) )
	{
		printf("\nThe triangle is equilateral triangle. Thank you...");
	}
	else if((a==b || b==c || c==a) && (ang_a==ang_b || ang_b==ang_c || ang_c==ang_a) && (ang_a+ang_b+ang_c==180))
	{
		printf("\nThe triangle is isoseles triangle.Thank you!!!");
	}
	else if((a!=b && b!=c && c!=a) && (ang_a!=ang_b && ang_b!=ang_c && ang_c!=ang_a)  && (ang_a+ang_b+ang_c==180))
	{
	printf("\nThe triangle is scalene triangle.Thank you...!!!");		
	}
	else 
	printf("\nThe triangle is neither equilateral nor isoseles nor scalene.... Thank you>>>>>");
	
	
	
		return 0;
	
	
}
