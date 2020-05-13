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
                    }
            }
};
