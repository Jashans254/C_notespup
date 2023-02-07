//FRIEND FUNCTION
#include<iostream>
using namespace std;
class test
{
	private:
	int a;
	public:
		void func()
		{
			cout<<a;
		}
		friend main();
		
};
main()
{
	test t;
	cout<<"enter a";
	cin>>t.a;
	cout<<"a = ";
	t.func();
}
