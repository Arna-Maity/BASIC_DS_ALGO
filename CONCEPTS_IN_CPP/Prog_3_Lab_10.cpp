#include <iostream>

using namespace std;

void Func(int num)
{
    if(num == 0)
        throw num;

    else if(num > 0)
        throw "string";

    else
        throw 'c';
}

int main()
{
    int k;

    try{
        cout << "\nEnter Value K: ";
        cin >> k;
        Func(k);
    }
    catch(int e)
    {
        cout <<"\n(int) Exception returned!";
        }
    catch(const char* str)
    {
      cout << "\n(String) Exception returned!";
        }
    catch(char c)
    {
      cout << "\n(Char) Exception returned!";
        }
    return 0;
}
