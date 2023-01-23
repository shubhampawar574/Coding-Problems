void convert(int arr[], int n) {
	    // code here
	    
	    vector<int> arr1(arr, arr+n);
	    
	    sort(arr1.begin(), arr1.end());
	    unordered_map<int, int> mp;
	    for(int i=0; i<n; i++){
	        mp[arr1[i]]=i;
	    }
	   // for(int i=0; i<n; i++){
	   //     cout<<arr1[i]<<" ";
	   // }cout<<endl;
	    
	    for(int i=0; i<n; i++){
	        arr[i]=mp[arr[i]];
	    }
	    
	}
