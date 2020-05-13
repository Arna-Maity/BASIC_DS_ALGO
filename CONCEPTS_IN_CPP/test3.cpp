#include <iostream>
using namespace std;

int main() {
	//code
    int T;
	int X,G;
    cin >> T
    for(int i=0;i<T;i++)
	{
      cin >> X >> G;
    	cout << ~(X-G) << endl;
    }
	return 0;
}
