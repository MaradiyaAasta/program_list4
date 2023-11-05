#include<iostream>
using namespace std;
class student
{
	public:
		int Eno,semester;
		student()
		{
			Eno=112;
			semester=3;
		}
};
int main()
{
	student s;
	cout<<"Enrollment  no is ::"<<s.Eno<<endl;
	cout<<"Semester is ::"<<s.semester<<endl;
	return 0;
}
