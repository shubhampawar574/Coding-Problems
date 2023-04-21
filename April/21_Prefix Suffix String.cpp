int prefixSuffixString(vector<string> &s1,vector<string> s2){
    // Code here
    unordered_map<string,bool> mm;
    for(auto x:s1){
        string temp="";
        for(int i=0;i<x.length();i++){
            temp+=x[i];
            mm[temp]=true;
        }
        temp="";
        for(int i=x.length()-1;i>=0;i--){
            temp=x[i]+temp;
            mm[temp]=true;
        }
    }
    int ans=0;
    for(auto x:s2){
        if(mm[x])ans++;
    }
    return ans;
}
