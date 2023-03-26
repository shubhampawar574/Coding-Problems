int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool> vis(leaves+1,false);
        for(int i=0;i<N;i++){
            int j = frogs[i];
            if(vis[j]==false){
                while(j<=leaves){
                    vis[j]=true;
                    j+=frogs[i];
                }
            }
        }
        int ans=0;
        for(int i=1;i<=leaves;i++){
            if(vis[i]==false)ans++;
        }
        return ans;
}
