int appleSequences(int n, int m, string arr){
        // code here 
        // code here 
        int ans=0,orange=0,j=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='O')orange++;
            while(orange>m){
                if(arr[j]=='O')orange--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
