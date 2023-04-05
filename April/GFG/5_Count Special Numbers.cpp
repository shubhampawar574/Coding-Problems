nt countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        int mx = *max_element(arr.begin(),arr.end());
        // int special[mx+1];
        // memset(special,0,sizeof(special));
        vector<int> special(mx+1, 0);
        for(int i=0;i<N;i++){
            if(special[arr[i]]<2){
                for(int j=arr[i];j<=mx;j+=arr[i])special[j]++;
            }
        }
        int ans=0;
        for(auto x:arr)if(special[x]>1)ans++;
        return ans;
    }
