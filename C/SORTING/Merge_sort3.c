//This Program implements the "Divide and Conquer" based sorting algorithm MERGESORT...

#include<stdio.h>

void Merge(int*,int,int,int);
void Merge_sort(int*,int,int);

int main()
{
	int A[50],i,n;
	printf("\nEnter the LENGTH of ARRAY: ");
	scanf("%d",&n);
	
	printf("\nEnter the ELEMENTs of the ARRAY: ");
	for(i=0;i<n;i++)
	 scanf("%d",A+i);
	 
	 Merge_sort(A,0,n-1);
	 
	 printf("\nThe SORTED Array: ");
	 for(i=0;i<n;i++)
	  printf(" %d",A[i]);
	  
	return 0;
	
}

void Merge(int* A,int start,int mid,int end)
{
	//Store the the starting and middle indices in temporary variables...
	int p = start,q = mid+1;
	
	//Declare a temporary array Arr[] to store the merged array...
	int Arr[end-start+1],i,k=0;
	
	for(i=start;i<=end;i++)
	{
	  //if all the elements of the array before the middle element are stored store all the remaining elements 
	  // in the second half of the array... 
		if(p > mid)
		 Arr[k++] = A[q++];
		 
		else if(q > end)
		 Arr[k++] = A[p++];
		 
		else if(A[p] < A[q])
		 Arr[k++] = A[p++];
		 
		else
		 Arr[k++] = A[q++];
	}
	
	int j;
	for(j=0;j<k;j++)
	  A[start++] = Arr[j];
}

void Merge_sort(int* A,int start,int end)
{
	if(start < end)
	{
		int mid = (start + end)/2;
		Merge_sort(A,start,mid);
		Merge_sort(A,mid+1,end);
		Merge(A,start,mid,end);
	}
}
