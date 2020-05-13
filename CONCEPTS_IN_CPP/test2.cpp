#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	unsigned int N;
	unsigned int n =1; 
    cin >> T; 
	for(int i=0;i<T;i++)
	{
	    cin >> N;
	    while(n<=N)
	    {
	        n = (n<<2)+1;
	    }
	    
	    n = (n-1)>>2;
	    
	    cout << (N|n) << endl;
	}
	return 0;
}
