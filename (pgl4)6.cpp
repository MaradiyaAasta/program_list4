#include<iostream>
using namespace std;
class product
{
	public:
		string name;
		int manufacture;
		int expiryear;
		string calculate_selfline;
		product(string n,int my,int ey)
		{
		name=n;
		manufacture=my;
		expiryear=ey;
	}
	 product calculate_selfline()
	{
		return manufacture-expiryear;
	}
};
int main()
{
	cout<<"expire year ::";
	cout<<"Manufactuer ::";
	return 0;
}
