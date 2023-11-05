#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string  name; 
		person(string n,int a)
		{
			name=n;
			age=a;
		}
		void display()
		{
			cout<<"Name ::"<<name<<endl;
			cout<<"Age  ::"<<age<<endl;
		}
};
person(createperson(string name,int age))
{
	person p(name,age);
	return p;
}
int main()
{
	person person1=createperson("john",3);
	cout<<"Person 1 information ..."<<endl;
	person1.display();
	return 0;
}
