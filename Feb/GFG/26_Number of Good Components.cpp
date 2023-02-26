void dfs(int i, int s, vector<vector<int>>& adj, vector<int> &vis, bool &a, int &node){
      node++;
      vis[i]=1;
      if(s!=adj[i].size()) a=false;
      for(auto x: adj[i]){
          if(!vis[x]) dfs(x, s, adj, vis, a, node);
      }
  }
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        // code here
        int ans=0;
        bool a;
        int node;
        vector<int> vis(V+1, 0);
        for(int i=1; i<=V; i++){
            if(!vis[i]){
                node=0;
                a=true;
                dfs(i, adj[i].size(), adj, vis, a, node);
                if(a and node-1==adj[i].size()) ans++;
            }
        }
        return ans;
    }
