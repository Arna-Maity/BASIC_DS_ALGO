/* This Program implements the recursive euclidean gcd algo.... */

#include<stdio.h>

#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a<b)?a:b

int recursive_gcd(int,int);

int main()
{
		int a,b;
	
	printf("\nEnter a & b respectively: ");
	scanf("%d%d",&a,&b);
	
	printf("\ngcd(%d,%d) = %d",a,b,recursive_gcd(a,b));
	
	return 0;
}

int recursive_gcd(int X,int Y)
{
	int x = MAX(X,Y);
	int y = MIN(X,Y);
	if(y==0)
	  return x;
	  
	else if((x>=y)&&(y>0))
	  return recursive_gcd(y,(x%y));
}
