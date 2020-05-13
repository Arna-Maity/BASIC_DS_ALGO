#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

    public:
        Point() { x=0; y=0;}

        Point(int a, int b) {x=a; y=b;}

        Point operator++()
        {
          x++;
          y++;
          return (*this);
            }

        void Display()
        {
            cout << "P.x = " << x << endl;
            cout << "P.y = " << y << endl;
        }
       
};

int main()
{
    Point p1(20,30);
    p1.Display();
    p1 = ++p1;
    p1.Display();
    p1.operator++();
    p1.Display();
    return 0;
}
