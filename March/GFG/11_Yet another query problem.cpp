vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        vector<int> v(N);
        unordered_map<int,int> mp;
        for(int i=N-1; i>=0; i--){
            mp[A[i]]++;
            v[i]=mp[A[i]];
        }
        vector<int>ans;
        
        for(auto x:Q){
            int cnt=0;
            for(int i= x[0]; i<=x[1]; i++ ){
                if(v[i]==x[2]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        
        return ans;
    }
