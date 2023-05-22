int solve(int N, vector<int> p){
    // code here
    vector<int> temp(N,0);
    for(int i=1;i<N;i++){
        temp[p[i]]++;
        temp[i]++;
    }
    int ans=0;
    for(auto x:temp)if(x==1)ans++;
    if(ans==N)return 0;
    return N-1-ans;

}
