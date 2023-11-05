//write a c++ program to demonstrate use of friend function.// 
#include<iostream>
using namespace std;
class number
{
	int no1,no2;
	public:
		void setdata(int a,int b);
		friend int add(number N);
};
void number::setdata(int a,int b)
{
	no1=a;
	no2=b;
}
int add(number N)
{
	return ((N.no1+N.no2));
}
int main()
{
	number N1;
	N1.setdata(20,10);
	cout<<"Print = "<<add(N1);
	return 0;
}
