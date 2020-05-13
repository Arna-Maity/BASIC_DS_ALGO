//This Program implements the Non- recursive version of the euclidean gcd algorithm....

#include<stdio.h>

int gcd(int,int);

int main()
{
	int a,b;
	printf("\nEnter The 2 NUMBERS: ");
	scanf("%d%d",&a,&b);
	
	printf("\n THE gcd(%d,%d) = %d\n",a,b,gcd(a,b));
	
	return 0;
}

int gcd(int a,int b)
{
	while(a != b)
	 {
	 	if(a>b)
	 	 a = a-b;
	 	 
	 	else
	 	 b = b-a;
	 }
	 
	 return a;
}
