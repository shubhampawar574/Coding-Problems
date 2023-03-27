int countWaystoDivide(int N, int K) {
        // Code here
        // Code here
        vector<vector<int>> dp(N+1,vector<int>(K+1,0));
        for(int i=1;i<=N;i++)dp[i][1]=1;
        for(int i=1;i<=N;i++){
            for(int j=2;j<=K;j++){
                if(i>=j)dp[i][j]=dp[i-1][j-1]+dp[i-j][j];
            }
        }
        return dp[N][K];
    }
