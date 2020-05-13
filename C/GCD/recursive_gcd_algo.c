//This Program implements the recursive version of the euclidean gcd algo...

#include<stdio.h>

//Definations...
#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a<b)?a:b

//Function Prototype/Declaration...
int recursive_gcd(int,int);

int main()
{
	
}

///Function Defination...
int recursive_gcd(int X,int Y)
{
	 int x = MAX(X,Y);
	 int y = MIN(X,Y);
	 
	 if(y==0)
	  return x;
	  
	 else if((x>=y)&&(y>0))
	   return recursive_gcd(y,x%y);
}
