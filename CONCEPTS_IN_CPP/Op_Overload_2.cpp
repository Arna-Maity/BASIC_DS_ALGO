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
            if((k < 0) || (k > 2))
                cout << "\nYou are trying to access beyond the array Boundary"
            return arr[k];
        }      
};

int main()
{
    Point P(20,30,40);
    cout << "P: " << P[0] << " " << P[1] << " " << P[2] << endl;

    return 0;
}
