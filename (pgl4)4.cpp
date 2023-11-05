#include<iostream>
using namespace std;
class Example
{
	public:
		int a;
		void add(Example E)
		{
			a=a+E.a;	
		}
};
int main()
{
	Example e1,e2;
	e1.a=50;
	e2.a=100;
	cout<<"no 1 is ::"<<e1.a<<endl;
	cout<<"no 2 is ::"<<e2.a<<endl;
	e2.add(e1);
	cout<<"no 1 is ::"<<e1.a<<endl;
	cout<<"no 2 is ::"<<e2.a<<endl;
	
	return 0;
}
