#include<iostream>
using namespace std;
class x
{
	int a=5;
	friend class y;	
};
class y
{
	public:
		void display(x & x1)
		{
			cout<<"value of a is ::"<<x1.a;
		}
};
int main()
{
	x.x1;
	y.y1;
	return 0;
}
