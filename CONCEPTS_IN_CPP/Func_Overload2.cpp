#include <iostream>
#include <cmath>

using namespace std;

double Area(double h,double b)
{
    return (0.5*b*h);
}

double Area(double a,double b,double c)
{
    double s = (a+b+c)/2;
    return (sqrt(s*(s-a)*(s-b)*(s-c)));
}

class Triangle
{
    double a1;
    double a2;
    double a3;

        public:
            Triangle()
            {
              cout << "\nEnter the values of the 3 sides of Triangle: ";
              cin >> a1 >> a2 >> a3;
                }

            void check_and_display()
            {
              if(!(((a1+a2) > a3)&&((a2+a3) > a1)&&((a1+a3) > a2)))
                {
                cout << "\n Input Data does not represent a Triangle!!";
                return;
                    }

                else
                {
                    if(((a1*a1)+(a2*a2)) == a3*a3)
                        cout << "Right angled Triangle Area: " << Area(a1,a2) << endl;

                    else if(((a3*a3)+(a2*a2)) == a1*a1)
                        cout << "Right angled Triangle Area: " << Area(a3,a2) << endl;

                    else if(((a1*a1)+(a3*a3)) == a2*a2)
                        cout << "Right angled Triangle Area: " << Area(a1,a3) << endl;

                    else
                        cout << "Area of Triangle: " << Area(a1,a2,a3) << endl;
                    }
                }
};

int main()
{
    Triangle a;
    a.check_and_display();
    return 0;
}
