#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int T,N,max;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;

	while(T--)
	{
		cin >> N;
		vector<int> A;
		FOR(i,0,N-1)
		{
			int num;
			cin >> num;
			A.push_back(num);
		}		

		int res[A.size()];
		res[0] = A[0];

		FOR(i,1,A.size()-1)
		{
			max=0;
			FOR(j,0,i-1)
				{
					if((A[j]<A[i])&&(res[j]>max))
						max=res[j];
				}
				res[i]=A[i]+max;
			}

			max=0;	
		FOR(j,0,A.size()-1)
			if(res[j]>max)
				max=res[j];

		printf("%d\n",max);
	}

	return 0;
}