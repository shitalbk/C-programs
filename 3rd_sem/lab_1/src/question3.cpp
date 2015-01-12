#include <iostream>
const int PI = 3.14;
using namespace std;
int main()
{
	int area,circum,radius;
	cout<<"Please enter the radius of the circle:\n";
	cin>>radius;
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	cout<<"The area of circle is: "<<area<<endl;
	cout<<"The circumference of circle is: "<<circum;
	return 0; 
}
