#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"Constructor is invoked.."<<endl;
		}	
		~student()
		{
			cout<<"Destructor is invoked.."<<endl;
		}
};
int main()
{
	student s1;
	student s2;
	return 0;
}
