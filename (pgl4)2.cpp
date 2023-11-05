#include<iostream>
using namespace std;
class Myclass
{
	private:
		static int code;
		static int count;
	public:
		static void incrementcount()
		{
			code=++count;	
		}
		static void getdata()
		{
			cout<<"count is ::"<<count;
		}
};
int Myclass::count;
int main()
{
	Myclass::getdata();
	cout<<"My class ::"<<getdata<<endl;
	return 0;
}
