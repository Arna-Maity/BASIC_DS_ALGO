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
       
    friend Point operator++(Point&);
    friend Point operator++(Point&,int);
};

Point operator++(Point& p1)
{
    p1.x++;
    p1.y++;
    return p1;
}

Point operator++(Point& p1, int dummy)
{
    p1.x++;
    p1.y++;
    return p1;
}

int main()
{
    Point p1(20,30), p2(200,300);
    Point p3;
   // p3 = p1-p2;
   // p3.Display();
    p3 = ++p1;
    p3.Display();
    p3 = p1++;
    p3.Display();
    return 0;
}
