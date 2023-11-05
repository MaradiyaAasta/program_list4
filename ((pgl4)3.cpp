#include<iostream>
using namespace std;
class Myclass
{
	int number;
	static int count;
	public:
		void getdata(int a)
		{
			number=a;
			count++;
		}
		static void getcount()
		{
			cout<<"Value of count ::"<<count;
		}
};
int Myclass::count;
int main()
{
	Myclass a,b;
	a.getdata(10);
	b.getdata(23);
	a.getcount();
	b.getcount();
	return 0;
}
