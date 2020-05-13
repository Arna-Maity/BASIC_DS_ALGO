#include <iostream>
#include "add.h"
#include "sub.h"

using namespace std;


int main()
{
   // using namespace A;
    cout << "Addition result: " << A::calculate(10,20) << endl;
    cout << "Sutraction result: " << B::calculate(10,20) << endl;
    return 0;
}
