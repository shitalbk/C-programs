#include <iostream>
using namespace std;
int main()
{
	int celsius,farenheit;
	cout<<"Please enter the temperature in celsius: "<<endl;
	cin>>celsius;
	farenheit = 1.8*celsius +32;
	cout<<"The temperature in farenheit is: "<<farenheit<<endl;
	return 0;
}
