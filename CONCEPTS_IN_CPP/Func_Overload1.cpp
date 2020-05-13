#include <iostream>

using namespace std;

double Area(double l)
 {   return (l*l);  }

double Area(double l,double b)
{    return (l*b);  }

class Shape
{
    double x;
    double y;

        public:
            void area()
            {
                cout << "\nEnter x and y:";
                cin >> x >> y;
                if(x==y)
                {
                  cout << "\nThe Area of Square: " << Area(x) << endl;
                    }

                else
                {
                 cout << "\nThe Area of Rectangle: " << Area(x,y) << endl;
                    }
            }
};

int main()
{
    Shape a;
    a.area();

    return 0;
}
