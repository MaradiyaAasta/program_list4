#include<iostream>
using namespace std;
class employee
{
	private:
		char name[20],branch[20];
		int code,salary,no;
	public:
		void get_employee()
		{
			cout<<"Enter the employe no ::";
			cin>>no;
			cout<<"Enter Employee Name   :: ";
			cin>>name;

			cout<<"Enter Employee Branch :: ";
			cin>>branch;

			cout<<"Enter Employee Code   :: ";
			cin>>code;

			cout<<"Enter Employee Salary :: ";
			cin>>salary;
		}

		void display_employee()
		{
			cout<<"Empoyee no is ::"<<no<<endl<<endl;
			cout<<"Employee Name is   :: "<<name<<endl;

			cout<<"Employee Branch is :: "<<branch<<endl;

			cout<<"Employee Code is   :: "<<code<<endl;

			cout<<"Employee Salary is :: "<<salary<<endl;

		}
}e[2];
int main()
{
	int i;
	

	for(i=0;i<2;i++)
	{
		e[i].get_employee();
	}

	for(i=0;i<2;i++)
	{
		e[i].display_employee();
	}

	return 0;

}
