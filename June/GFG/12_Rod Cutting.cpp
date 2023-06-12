static int help(int index,int n,int price[],vector<vector<int>> &dp){
    if(index+1>n)return 0;
    if(dp[index+1][n]!=-1)return dp[index+1][n];
    int a=0,b=0;
    a=help(index+1,n,price,dp);
    b=price[index]+help(index,n-index-1,price,dp);
    return dp[index+1][n] = max(a,b);
}
int cutRod(int price[], int n) {
    //code here
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return help(0,n,price,dp);
}
