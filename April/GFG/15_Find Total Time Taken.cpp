int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        unordered_map<int,int> mm;
        int ans = -1;
        for(int i=0;i<n;i++){
            ans++;
            if(mm[arr[i]]){
                ans+=time[arr[i]-1];
                ans--;
            }
            mm[arr[i]]++;
        }
        return ans;
    }
