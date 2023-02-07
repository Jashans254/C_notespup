//example of inheritance
#include<iostream>
using namespace std;
class s1
{
	protected:
		char a;
		public:
			void inp()
			{
				cout<<"enter a character";
				cin>>a;
			}
			void out()
		{
		cout<<"entered input is :: "<<a;
		}
};
class s2:public s1
{
	public:
		void upr()
		{
			if(a>=65 && a<=90)
			{
				cout<<endl<<a<<" in lower case = "<<char(a+32);
			}
			else
			{
				cout<<endl<<a<<" in uper case = "<<char(a-32);
			}
		}
};
int main()
{
	cout<<"program to convert lower case to upper case and vice versa"<<endl;
	s2 x;
	x.inp();
	x.out();
	x.upr();
}
