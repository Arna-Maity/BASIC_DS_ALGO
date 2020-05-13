#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    double *i;
    int *d;
    cout << typeid(d).name() << endl;
    return 0;
}



