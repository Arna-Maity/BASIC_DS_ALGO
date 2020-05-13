// Creation of a Generic Class

#include <iostream>

using namespace std;

template <class A> class myclass
{
    A a;
    public:
        void Show(A temp)
            {
              a = temp;
              cout << " a = " << a << endl;
                }
};

int main()
{
    myclass<int> ob1;
    ob1.Show(10);
    ob1.Show(100.5);

    myclass<char> ob2;
    ob2.Show('A');
    ob2.Show(66);

    return 0;
}
