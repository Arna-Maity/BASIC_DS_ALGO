//WAP to demonstarate how ceratin exception type are not allowed to be thrown
#include <iostream>
using namespace std;


void f(int val) throw(int, char)
{
  if(val==0)
     throw val;
  if(val==1)
     throw 'a';
  if(val==2)
     throw 123.23;
}

int main()
{
    int val;
  try{
    cout << "Enter Val: ";
    cin >> val;
    f(val);
  }
  catch(int i) {
    cout << "Caught an integer\n";
  }
  catch(char c) {
    cout << "Caught char\n";
  }
  catch(double d) {
    cout << "Caught double\n";
  }
  return 0;
}
