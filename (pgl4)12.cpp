#include<iostream>
using namespace std;
class person
{
	private:
		string name;
		int age;
	public:
		person(string n,int a)
		{
			name=n;
			age=a;
		}
		person(person &ab)
		{
			name=ab.name;
			age=ab.age;
		}
		void display()
		{
			cout<<"Name is ::"<<name<<endl;
			cout<<"age is ::"<<age<<endl;
		}
};
int main()
{
	person person1("Alice",25);
	cout<<"Person 1 information.."<<endl;
	person1.display();
	person person2(person1);
	cout<<"Person 2 information.."<<endl;
	person2.display();
	return 0;
}
