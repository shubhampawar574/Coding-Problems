int help(int n,int index,vector<int> &arr,vector<int> &vis,vector<int> &dfs){
        if(index>=n or index<0){
            return 1;
        }
        if(dfs[index])return 2;
        if(vis[index])return vis[index];
        vis[index]=1;
        dfs[index]=1;
        int next = index+arr[index];
        int temp = help(n,next,arr,vis,dfs);
        if(temp==2)vis[index]=2;
        dfs[index]=0;
        return vis[index];
    }
    int goodStones(int n,vector<int> &arr){
        // Code here
        vector<int> vis(n,0),dfs(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vis[i] = help(n,i,arr,vis,dfs);
            }
        }
        for(auto x:vis)if(x==1)ans++;
        return ans;
    } 
