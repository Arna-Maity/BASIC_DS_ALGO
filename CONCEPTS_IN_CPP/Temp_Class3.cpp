// Class taking multiple generic types.

#include <iostream>

using namespace std;

template<class A,class B=int> class myclass
{
    A a;
    B b;

        public:
            void show(A temp1, B temp2)
                {
                  a = temp1;
                  b = temp2;
                  cout << " a = " << a << " b = " << b << endl;
                    }
};

int main()
{
    myclass<int,char> ob1;
    ob1.show(10,'F');
    myclass<double> ob2;
    ob2.show(10.5,9);

    return 0;
}
