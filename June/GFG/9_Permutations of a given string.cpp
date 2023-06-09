void nikaldo(string &s,vector<string> &ans,unordered_map<string,int> &mm){
      int i=0,j=s.length()-1;
      for(i=s.length()-2;i>=0;i--){
          if(s[i]<s[i+1])break;
      }
      if(i<0)return;
      for(int k=s.length()-1;k>i;k--){
          if(s[k]>s[i]){
              j=k;
              break;
          }
      }
      swap(s[i],s[j]);
      i++;
      j=s.length()-1;
      while(i<j){
          swap(s[i],s[j]);
          i++;
          j--;
      }
      mm[s]++;
      if(mm[s]==1)ans.push_back(s);
}

vector<string>find_permutation(string S)
{
    // Code here there
    sort(S.begin(),S.end());
    vector<string> ans;
    ans.push_back(S);
    unordered_map<string,int> mm;
    mm[S]++;
    int fact = 1;
    for(int i=2;i<=S.length();i++)fact*=i;
    fact--;
    while(fact--){
        nikaldo(S,ans,mm);
    }
    return ans;
}
