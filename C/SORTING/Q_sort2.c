//This Program implements the Quicksort Algorithm...
#include<stdio.h>

//Function Declarations/Prototypes...
inline void swap(int*,int*);
int Partition(int*,int,int);
void Q_sort(int*,int,int);

int main()
{
	int i;
	int A[] = {1,5,2,4,3};
	
	Q_sort(A,0,4);
	
	for(i=0;i<5;i++)
	 printf(" %d",A[i]);
}

//Function Definations...
inline void swap(int* a,int* b)
{
	(*a) = (*a) + (*b);
	(*b) = (*a) - (*b);
	(*a) = (*a) - (*b); 
}

int Partition(int* A,int start,int end)
{
	int piv = A[start];
	int i = start+1;
	int j;
	
	for(j=start+1;j<=end;j++)
	 {
	 	if(piv > A[j])
	 	 {
	 	 	swap(A+i,A+j);
	 	 	i += 1; 
	 	 }
	 }
	 
	 swap(A+start,A+i-1);
	 return (i-1);
}

void Q_sort(int* A,int start,int end)
{
	if(start < end)
	{
		 int piv_pos = Partition(A,start,end);
		     Q_sort(A,start,piv_pos-1);
		     Q_sort(A,piv_pos+1,end);
	}
}
