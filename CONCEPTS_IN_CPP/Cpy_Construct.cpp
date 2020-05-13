#include <iostream>

using namespace std;

class Person
{
	int age;
	public:
		Person(int a){cout << "Constructor Called" << endl; age = a;}
		
		Person(const Person &copy) {cout << "Copy Constructor Called" << endl;}
		
		void show()
		{
			cout <<" Age = " <<age<<endl;
		}
		
};

int main()
{
	Person p1(20);
	Person p2=p1;
	p2.show();
	return 0;
}
