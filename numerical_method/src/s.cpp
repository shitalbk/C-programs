#include<iostream>
using namespace std;
class beta;
class alpha
{
	private:
		int a;
		public:
			void setdata(int m)
			{
				a=m;
			}
			friend int max(alpha,beta);
};
class beta
{
	private:
		int a;
		public: 
		void setdata(int n)
		{
			a=n;
			
		}
		friend int max(alpha,beta);
};
	int max(alpha a1,beta b1)
	{
		return a1.a>b1.a?a1.a:b1.a;
	}
	int main()
	{
		int x,y;
		beta b;
		cout<<"enter 1st value:"<<endl;
		cin>>x;
		b.setdata(x);
		alpha a;
		cout<<"enter 2nd value:"<<endl;
		cin>>y;
		a.setdata(y);
		cout<<max(a,b);
		return 0;
	}

