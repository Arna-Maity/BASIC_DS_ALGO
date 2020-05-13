/*write a program to demonstrate the application of multiple catch statement.*/
#include<iostream>
using namespace std;
void num(int k)
{try
{if(k==0) throw k;
else 
if(k>0) throw 'P';
else 
if(k<0) throw .0;
cout<<"try block"<<endl;
}
catch(char g)
{cout<<"caught a positive value"<<endl;
}
catch(int j)
{cout<<"caught a null value"<<endl;
}
catch(double f)
{cout<<"caught a negative value"<<endl;
}
cout<<"try catch"<<endl;
}
int main()
{cout<<"multiple catches execution"<<endl;
num(0);
num(5);
num(-1);
return 0;
}
