int bin_search(int* A,int left,int right,int k){
    if((left==right)&&(A[left]==k))
        return left;
        
    else if((left==right)&&(A[left] != k))
        return -1;
        
    else
        {
            int mid = (left + right)/2;
            if(A[mid]==k)
                return mid;
            else if(k > A[mid])
                bin_search(A,mid+1,right,k);
            else
                bin_search(A,left,mid,k);
        }
    
}