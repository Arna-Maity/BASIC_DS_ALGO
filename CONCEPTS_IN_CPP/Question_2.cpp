/*  Create class Complex
    Data Members:
        1. Real Part (Private)
        2. Imaginary Part (Private)

    Overloaded Operators:
        1. Multiplication (*)

*/

#include <iostream>

using namespace std;

class Complex
{
    double Real;
    double Img;

    public:
        Complex() {Real = 0; Img = 0;}
        Complex(double i, double j) { Real = i; Img = j; }

      /*  Complex operator= ()
            {
                Complex temp;
                temp.Real = this->Real;
                temp.Img = this->Img;
                return *this;
            } */

        friend Complex operator* (Complex A, Complex B);
        
        void Display()
        {
            cout << Real << " + j" << Img << endl;
        }
};


Complex operator* (Complex A, Complex B)
 {
    Complex temp;
        temp.Real = (A.Real*B.Real) - (A.Img*B.Img);
        temp.Img = (B.Real*A.Img) + (A.Real*B.Img);
        return temp;
  }

int main()
{
  Complex A(3,2), B(4,5);
   Complex C;
    C = A*B;
    C.Display();
    return 0;
}
