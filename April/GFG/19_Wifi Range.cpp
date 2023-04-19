bool wifiRange(int N, string S, int X){
    // code here
    vector<int>v;
    for(int i=0;i<N;i++){
        if(S[i]=='1'){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i]-1>2*X){
            return false;
        }
    }
    if(v[0]>X) return false;
    if(N-1-v[v.size()-1]>X) return false;

    return true;
}
