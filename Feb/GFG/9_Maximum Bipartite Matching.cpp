bool desktehai(vector<vector<int>> &G,int banda,vector<int> &vis,vector<int> &job){
        for(int i=0;i<G[0].size();i++){
            if(G[banda][i]==1 and !vis[i]){
                vis[i]=1;
                if(job[i]==-1){
                    job[i]=banda;
                    return true;
                }
                else if(desktehai(G,job[i],vis,job)){
                    job[i]=banda;
                    return true;
                }
            }
        }
        return false;
    }
	int maximumMatch(vector<vector<int>>&G){
	    // Code here
	    int M = G.size();
	    int N = G[0].size();
	    vector<int> job(N,-1);
	    int ans=0;
	    for(int i=0;i<M;i++){
	        vector<int> vis(N,0);
	        if(desktehai(G,i,vis,job))ans++;
	    }
	    return ans;
	}
