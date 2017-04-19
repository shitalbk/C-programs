#include<iostream>
#include<iomanip>
using namespace std;
class account
{
	private:
		int accno;
		char name[15];
		double amt;
		public:
			void set account(int a,char an[],double b)
			{
				accno=a;
				strcpy(name,an);
				amt=b;
			}
			void show account();
			void baltransfer(account&,double);
		};
		void account::showaccount()
		{
			cout<<"account no="<<accno<<dndl<<"Account name="<<name<<endl<<"amount"<<ant;
		}
		void account::baltransfer(account&ac,double bal)
		{
			if(ant<bal)
			cout<"------"<<endl;
			else
			{
				amt=amt-bal;
				ac.amt=acc.amt+bal;
			}
		}
	



