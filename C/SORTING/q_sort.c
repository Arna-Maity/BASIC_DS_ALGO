#include<stdio.h>

void swap(int*,int*);
int Partition(int*,int,int);
void Q_sort(int*,int,int);

int main()
{
	int i;
	int A[] = {1,6,3,5,9,2,6,3,8};
	
	Q_sort(A,0,sizeof(A)/sizeof(int)-1);
	
	for(i=0;i<sizeof(A)/sizeof(int);i++)
	 printf(" %d",A[i]);
	 
	 return 0;
}

//This Function implements the call by reference swap...
void swap(int* a,int* b)
{
	(*a) = (*a) + (*b);
	(*b) = (*a) - (*b);
	(*a) = (*a) - (*b);
}

//This Function implements the partition function....
int Partition(int* A,int start,int end)
{
	int piv = A[start];
	int i = start + 1;
	int j;
	for(j = start+1;j<=end;j++)
	 {
	 	if(A[j]<piv)
	 	{
	 		swap((A+i),(A+j));
	 		i++;
	 	}
	 }
	 
	 swap((A+start),(A+i-1));
	 
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
