//Simple C++ Programs , Class Program
#include<iostream>
using namespace std;
class circle
{
	private:
	int r,a,p;
	public:
		void input()
		{
			cout<<"enter radius"<<endl;
			cin>>r;
		}
		void per()
		{
			cout<<"perimeter = "<<2*r*3.14<<endl;
		}
		void area()
		{
			cout<<"area = "<<r*r*3.14<<endl;
		}
};
int main()
{
	circle x;
	x.input();
	x.per();
	x.area();
}
