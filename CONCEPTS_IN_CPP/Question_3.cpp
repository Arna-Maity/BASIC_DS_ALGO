#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

     public:
        Point(int a,int b)
            {x = a; y = b;}
    
    int operator==(Point p1)
    {
        if((x == p1.x) && (y == p1.y))
            return 1;

        else
            return 0;
    }      
};

int main()
{
    Point p1(6,7), p2(6,7);
    if(p1==p2)
        cout << "Both are Equal!" << endl;

    else
        cout << "Unequal!!" << endl;

    return 0;
}

