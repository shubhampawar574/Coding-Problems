void dfs(int i,int j,vector<vector<bool>> &arr,vector<vector<int>> &mat,int N,int M){
        if(arr[i][j])return;
        arr[i][j]=1;
        if(i+1<N and mat[i+1][j]>=mat[i][j])dfs(i+1,j,arr,mat,N,M);
        if(i-1>=0 and mat[i-1][j]>=mat[i][j])dfs(i-1,j,arr,mat,N,M);
        if(j+1<M and mat[i][j+1]>=mat[i][j])dfs(i,j+1,arr,mat,N,M);
        if(j-1<M and mat[i][j-1]>=mat[i][j])dfs(i,j-1,arr,mat,N,M);
    }
    int water_flow(vector<vector<int>> &mat,int N,int M){
    // Write your code here.
        vector<vector<bool>> Indian(N,vector<bool>(M,false));
        vector<vector<bool>> Arabian(N,vector<bool>(M,false));
        for(int i=0;i<M;i++){
            dfs(0,i,Indian,mat,N,M);
            dfs(N-1,i,Arabian,mat,N,M);
        }
        for(int i=0;i<N;i++){
            dfs(i,0,Indian,mat,N,M);
            dfs(i,M-1,Arabian,mat,N,M);
        }
        int ans=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(Indian[i][j] and Arabian[i][j])ans++;
            }
        }
        return ans;
        
    }
