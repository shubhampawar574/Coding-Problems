void dfs(int node,vector<bool> &vis,vector<int> &ans,vector<int> adj[]){
	    vis[node]=true;
	    for(int x:adj[node]){
	        if(!vis[x]){
	            dfs(x,vis,ans,adj);
	        }
	    }
	    ans.push_back(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool> vis(V,false);
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,ans,adj);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
