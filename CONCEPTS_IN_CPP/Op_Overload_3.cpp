#include <iostream>

using namespace std;

class Point
{
    int arr[3];
    
    public:
        Point() {arr[0] = 0; arr[1]=0; arr[2]=0; }
        Point(int a, int b, int c) { arr[0]=a; arr[1]=b; arr[2]=c; }

        int operator[](int k)
        {
            if((k < 0) || (k > 2))
                cout << "\nYou are trying to access beyond the array Boundary"
            return arr[k];
        }  

        void show()
        {
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
            cout << "z = " << z << endl;
        }    

        Point operator() (int i)
        {
            arr[0] = i;
            return *this
        }

        Point operator() (int i,int j)
        {
            arr[0] = i;
            arr[1] = j;
            return *this;
        }

        Point operator() (int i, int j, int k)
        {
            
         }
};

int main()
{

    return 0;
}
