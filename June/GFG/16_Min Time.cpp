unordered_map<int,int> mm1,mm2;
long long help(int pos,int index,vector<int> &temp,vector<vector<long long>> &dp,int indication){
    if(index==temp.size())return 0;
    
    if(dp[index][indication]!=-1)
        return dp[index][indication];
        
    long long one=0,two=0;
    int left=mm1[temp[index]];
    int right=mm2[temp[index]];
    
    one = abs(pos-left)+abs(left-right)+help(right,index+1,temp,dp,1);
    if(index==temp.size()-1)
        one+=abs(right-0);
        
    two = abs(pos-right)+abs(left-right)+help(left,index+1,temp,dp,0);
    if(index==temp.size()-1)
        two+=abs(left-0);
        
    return dp[index][indication]= min(one,two);
}
long long minTime(int n, vector<int> &locations, vector<int> &types) {
    // code here
    int mx = *max_element(types.begin(),types.end());
    vector<int> ele(mx+1,0);
    for(int i=0;i<n;i++){
        ele[types[i]]=1;
        if(mm1.find(types[i])==mm1.end()){
            mm1[types[i]]=locations[i];
            mm2[types[i]]=locations[i];
        }
        else{
            mm1[types[i]]=min(mm1[types[i]],locations[i]);
            mm2[types[i]]=max(mm2[types[i]],locations[i]);
        }
    }
    vector<int> temp;
    for(int i=0;i<=mx;i++){
        if(ele[i]==1)temp.push_back(i);
    }
    vector<vector<long long>> dp(temp.size(),vector<long long>(2,-1));
    return help(0,0,temp,dp,0);
}
