#include<iostream>

using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "\nBase Constructor";
		}
		
		~Base()
		{
			cout << "\nBase Destructor";
		}
};

class Derived
{
	public:
		Derived()
		{
			cout << "\nDerived Constructor";
		}
		
		~Derived()
		{
			cout << "\nDerived Destructor";
		}
};


int main()
{
	Base *pb;
	pb = new Derived;
	delete pb;
	return 0;
}
