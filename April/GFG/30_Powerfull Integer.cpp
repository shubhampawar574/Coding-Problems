int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here
        
        map<int,int> mm;
        for(auto x:intervals){
            mm[x[0]]++;
            mm[x[1]+1]--;
        }
        int temp=0,ans=-1;
        for(auto x:mm){
            if(temp>=k and x.second<0)ans=x.first-1;
            temp+=x.second;
            if(temp>=k)ans=x.first;
        }
        return ans;
    }
