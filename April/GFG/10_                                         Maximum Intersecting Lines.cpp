int maxIntersections(vector<vector<int>> lines, int N) {
        // Code here
        unordered_map<int,int> mm;
        for(auto x:lines){
            mm[x[0]]++;
            mm[x[1]+1]--;
        }
        int ans = 1,total=0;
        for(auto x:mm){
            total+=x.second;
            ans=max(ans,total);
        }
        return ans;
    }
