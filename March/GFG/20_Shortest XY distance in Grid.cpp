int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        // code here
        int ans=0;
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(N,vector<bool>(M,false));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(grid[i][j]=='X'){
                    q.push({i,j});
                    vis[i][j]=true;
                }
            }
        }
        while(q.size()){
            int s = q.size();
            int x[]={-1,1,0,0};
            int y[]={0,0,1,-1};
            while(s--){
                auto t = q.front();
                q.pop();
                int i = t.first;
                int j = t.second;
                if(grid[i][j]=='Y')return ans;
                for(int k=0;k<4;k++){
                    int newi = i+x[k];
                    int newj = j+y[k];
                    if(newi>=0 and newj>=0 and newi<N and newj<M and vis[newi][newj]==false){
                        q.push({newi,newj});
                        vis[newi][newj]=true;
                    }
                }
            }
            ans++;
        }
        return -1;
    }
