#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

    public:
        Point() { x=0; y=0;}

        Point(int a, int b) {x=a; y=b;}

        void Display()
        {
            cout << "P.x = " << x << endl;
            cout << "P.y = " << y << endl;
        }

       Point operator=(Point rhs)
        {
            x = rhs.x;
            y = rhs.y;
            return (*this);
        }
    
};


int main()
{
    Point p1(10,20);
    p1.Display();
    Point p2;
    p2=p1;
    p2.Display();

 return 0;
}
