#include <iostream>

using namespace std;

class Point
{
    int arr[3];
    
    public:
        Point() {}
        Point(int a, int b, int c) { arr[0]=a; arr[1]=b; arr[2]=c; }

        int operator[](int k)
        {
            return arr[k];
        }      
};

int main()
{
    Point P(20,30,40);
    cout << "P: " << P[0] << " " << P[1] << " " << P[2] << endl;

    return 0;
}
