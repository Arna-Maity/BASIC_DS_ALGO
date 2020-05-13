#include<iostream>

using namespace std;

namespace outer
{
    int a;
    namespace inner
        {
            int b;
        }
}

int main()
{
    outer::a = 100;
    outer::inner::b = 100;
    cout << "Sum = " << outer::a + outer::inner::b << endl;
    return 0;
}

/*




*/
