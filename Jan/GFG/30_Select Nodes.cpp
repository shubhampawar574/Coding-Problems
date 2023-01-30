int dfs(vector<int> adj[],int node,vector<int> &vis,int &ans){
        if(vis[node])return 0;
        vis[node]=1;
        int kamkarnahai=0;
        for(auto x:adj[node]){
            if(!vis[x]){
                int temp = dfs(adj,x,vis,ans);
                if(temp==0){
                    kamkarnahai=1;
                }
            }
        }
        if(kamkarnahai)ans++;
        return kamkarnahai;
    }
    int countVertex(int N, vector<vector<int>>edges){
        // code here
         vector<int> adj[N+1];
        vector<int> vis(N+1,0);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int ans=0;
        dfs(adj,1,vis,ans);
        return ans;
    }
