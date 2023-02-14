int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<vector<long long int>> dp(N,vector<long long int>(3,0));
        dp[0][0]=colors[0][0];
        dp[0][1]=colors[0][1];
        dp[0][2]=colors[0][2];
        for(int i=1;i<N;i++){
            dp[i][0]=colors[i][0]+min(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=colors[i][1]+min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=colors[i][2]+min(dp[i-1][1],dp[i-1][0]);
        }
        return min({dp[N-1][0],dp[N-1][1],dp[N-1][2]});
    }
