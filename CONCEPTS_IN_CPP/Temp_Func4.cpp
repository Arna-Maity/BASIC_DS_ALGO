// Overloading of two or more Generic Functions.

#include<iostream>

using namespace std;

template<class A, class B> void f(A a, B b)
{
    cout << " a = " << a << " b = " << b << endl;
}

template <class T> void f(T a)
{
    cout << " a = " << a << endl;
}

int main()
{
    f(10);
    f("H","Hello");

    return 0;
}
