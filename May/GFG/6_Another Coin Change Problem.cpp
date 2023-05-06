bool makeChanges(int N, int K, int target, vector<int> &coins) {
    // code here

    vector<vector<bool>> dp(K+1,vector<bool>(target+1,false));
    dp[0][0]=true;
    for(int i=0;i<N;i++){
        for(int j=1;j<=K;j++){
            for(int l=1;l<=target;l++){
                if(coins[i]<=l and dp[j][l]==false){
                    dp[j][l]=dp[j-1][l-coins[i]];
                }
            }
        }
    }
    return dp[K][target];
}
