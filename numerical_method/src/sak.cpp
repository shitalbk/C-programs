#include<iostream>
#include<stdlib.h>

using namespace std;
class test
{
	private:
		int a;
		int b;
		public:
			void set(int m,int n)
			{
				a=m;
				b=n;
			}
		friend	int sum(test);
};
int sum(test t1)
{
	return(t1.a+t1.b);
}
int main()
{
	test t;
	t.set(5,9);
	cout<<sum(t);
	return 0;
}
