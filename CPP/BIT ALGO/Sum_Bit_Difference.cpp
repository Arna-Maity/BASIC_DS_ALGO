#include <iostream>
#include <cstdlib>

using namespace std;

inline int Bit_Diff(unsigned int,unsigned int);

int main() {
	//code
	int T,N,sum;
	unsigned int A[10];
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >> N;
	    for(int j=0;j<N;j++)
	     cin >> A[j];
	     
	    sum = 0;
	    
	    for(int j=0;j<N;j++)
	     for(int k=0;k<N;k++)
	      sum += Bit_Diff(A[j],A[k]);
	      
	    cout << sum << endl;
	    
	}
	return 0;
}

inline int Bit_Diff(unsigned int a,unsigned int b)
{
    int sum = 0;
    unsigned int c = a^b;
    while(c!=0)
    {
        sum += (c%2);
        c /=2;
    }
    return sum;
}