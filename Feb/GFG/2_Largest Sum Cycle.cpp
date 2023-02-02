void help(long long &sum,vector<int> &Edge,int node){
      sum+=node;
      vector<int> vis(Edge.size(),0);
      vis[node]=1;
      int temp = Edge[node];
      while(!vis[temp]){
          sum+=temp;
          vis[temp]=1;
          temp = Edge[temp];
      }
  }
  void cycle(int node,vector<int> &vis,vector<int> &dfs,vector<int> &Edge,int &a){
      vis[node]=1;
      dfs[node]=1;
      int next_node = Edge[node];
      if(next_node!=-1){
          if(!vis[next_node]){
               cycle(next_node,vis,dfs,Edge,a);
          }
          else if(dfs[next_node]){
              a=next_node;
          }
      }
      dfs[node]=0;
  }
  long long largestSumCycle(int N, vector<int> Edge)
  {
    // code here
        long long ans=-1;
        vector<int> vis(N,0);
        vector<int> dfs(N,0);
        for(int i=0;i<N;i++){
            int a=-1;
            if(!vis[i]){
                cycle(i,vis,dfs,Edge,a);
                if(a!=-1){
                    long long sum=0;
                    help(sum,Edge,a);
                    ans=max(ans,sum);
                }
            }
        }
        return ans;
  }
