int findMaxSum(int *arr, int n) {
	    // code here
	    int first=arr[0];
	    int second=max(arr[1],arr[0]);
	    for(int i=2;i<n;i++){
	        int temp=max(second,arr[i]+first);
	        first=second;
	        second=temp;
	    }
	    if(n==1)return first;
	    return second;
	}
