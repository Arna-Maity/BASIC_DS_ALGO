/* This Program implements the non recursive version of the eucliean gcd algo ... */

#include<stdio.h>

int gcd(int a,int b);

int main()
{
	int a,b;
	
	printf("\nEnter a & b respectively: ");
	scanf("%d%d",&a,&b);
	
	printf("\ngcd(%d,%d) = %d",a,b,gcd(a,b));
	
	return 0;
}

//Non recursive euclid's gcd algorithm...
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		  a = a-b;
		  
		else
		  b = b-a;
	}
	
	return a;
}


