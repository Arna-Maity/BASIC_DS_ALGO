#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

    public:
        Point() { x=0; y=0;}

        Point(int a, int b) {x=a; y=b;}

        Point operator+(Point p2)
        {
            Point temp;
            temp.x = x+p2.x;
            temp.y = y+p2.y;
            return temp;
        }        

        Point operator-(Point p2)
        {
            Point temp;
            temp.x = x-p2.x;
            temp.y = y-p2.y;
            return temp;
        } 

        void Display()
        {
            cout << "P.x = " << x << endl;
            cout << "P.y = " << y << endl;
        }
       
};

int main()
{
    Point p1(20,30), p2(200,300);
    Point p3;
    p3 = p1-p2;
    p3.Display();
    p3 = p1+p2;
    p3.Display();
    return 0;
}
