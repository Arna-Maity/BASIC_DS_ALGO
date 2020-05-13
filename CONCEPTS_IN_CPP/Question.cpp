#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

     public:
        Point(int a)
            {x = a;}

  /*      int operator+(int a)
         {
            return (a + x);
               }    */
    friend int operator+(int,Point);      
};

int operator+(int a,Point p)
{
    return (a + p.x);
}

int main()
{
    Point P(5);
    int x = 20;
        int y = x + P;
    cout << " y = " << y << endl;
    return 0;
}
