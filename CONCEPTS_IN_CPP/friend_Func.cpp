#include <iostream>

`using namespace std;

class B;                                 // Forward Class Declaration of B.

class A
{
    int a;

        public:
            A(int i): a(i)
             {         }

            void Inp()
              {  cin >> a; }

            friend void add(A , B);
};

class B
{
    int b;

        public:
           B(int i): b(i)
            {       }

            void Inp()
              {  cin >> b; }

             friend void add(A , B);
};

void add(A a1,B b1)
{      cout <<"\nA.a + B.b: " << a1.a+b1.b << endl; }


int main()
{
    A a1(5);
    B b1(4);
    add(a1,b1);

    return 0;
}
