#include<iostream>
#include<iomanip>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			a=0;
			cout<<"control is in constructor"<<endl;
			
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	test t1;
	t1.show();
	test t2;
	t2.show();
	return 0;
}
