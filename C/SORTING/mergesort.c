/* This Program implements the  "Divide and Conquer" sorting algo mergesort with O(n*lg n) time complexity */ 

#include<stdio.h>

void Merge(int*,int,int,int);
void Merge_sort(int*,int,int);

int main()
{
	int i;
	int A[] = {1,6,2,4,3,4};
	
	Merge_sort(A,0,9);
	
	for(i=0;i<(sizeof(A)/sizeof(int));i++)
	 printf(" %d",A[i]);
	 
	 return 0;
}

//Function defination to merge two sorted arrays...
void Merge(int* A,int start,int mid,int end)
{
	//store the starting the mid positions in temporary variables...
	int p = start,q = mid+1;
	
	int Arr[end-start+1],i,k=0;
	
	for(i=start;i<=end;i++)
	{
	if(p > mid)
	 Arr[k++] = A[q++];
	 
	else if(q > end)
	 Arr[k++] = A[p++];
	 
	 else if(A[p] < A[q])
	   Arr[k++] = A[p++];
	   
	 else
	   Arr[k++] = A[q++];
  }
  
  //Copies the Contents of the temporary array into the original array...
	   int j;
	for(j=0;j<k;j++)
	 A[start++] = Arr[j];
}

//Function to perform mergesort...
void Merge_sort(int* A,int start,int end)
{
	if(start < end)
	{
		int mid = (start+end)/2;
		Merge_sort(A,start,mid);
		Merge_sort(A,mid+1,end);
		Merge(A,start,mid,end);
	}
}
