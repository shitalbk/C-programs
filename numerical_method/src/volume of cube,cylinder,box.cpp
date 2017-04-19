/*Program to find volume of cube,cylinder and box*/
#include<iostream>
#define PI 3.14
double volume(double);
double volume(double,int);
double volume(double,double,double);
using namespace std;
int main()
{
     double l=2,b=3,h=4,r=5;
	cout<<"volume of cube = "<<volume(l)<<endl;
	cout<<"volume of cylinder = "<<volume(r,h)<<endl;
	cout<<"volume of box= "<<volume(l,b,h)<<endl;
	return 0;
}
double volume(double a)
{
	return (a*a*a);
	}
 double volume(double a,int b)
 {
 	return (PI*a*a*b);
 }
 double volume(double a,double b,double c)
 {
 	return(a*b*c);
 }

