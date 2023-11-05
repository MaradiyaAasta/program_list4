#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		string name;
		student(int r,string n)
		{
			roll_no=r;
			name=n;
		}
		void display()
		{
			cout<<"Roll no is ::"<<roll_no<<endl;
			cout<<"Name is ::"<<name<<endl;
		}
};
int main()
{
	student s1(112,"Asta");
	s1.display();
	return 0;
}
