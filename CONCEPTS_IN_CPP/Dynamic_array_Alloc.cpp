#include <iostream>

using namespace std;

int main()
{
	int* p = new int[3];
	for(int i=0;i<3;i++)
	{
		cout << "Enter an Integer: " << endl;
		cin >> p[i];
	}
	
	for(int j=0;j<3;j++)
	{
		cout << "\n" <<p[j];
	}
	delete []p;
	return 0;
}
