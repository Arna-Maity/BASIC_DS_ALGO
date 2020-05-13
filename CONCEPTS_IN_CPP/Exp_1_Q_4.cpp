/* Write a c++ program to create a class named as "Convert" which ccontains */
#include<iostream>
using namespace std;
class convert{
unsigned int sec;
public:
convert()
{
cout<<"enter the seconds\n";
cin>>sec;
}
   void con	vert1()
    { int hour,min,secs;
    hour=(sec/3600);
    min =(sec%3600)/60;
    secs=((sec%3600)%60);
    cout << "\n" << hour << " : " << min << " : " << secs << endl;
    }
};

int main()
{
    convert a;
    a.convert1();
    return 0;
}               
