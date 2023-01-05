string longestString(vector<string> &words)
{
    // code here
    sort(words.begin(), words.end());
    unordered_set<string> st;
    for(auto i: words) st.insert(i);
    string ans;
    int maxi=INT_MIN;
    for(int i=0; i<words.size(); i++){
        string temp;
        int cnt=0, n=words[i].size();
        for(int j=0; j<n; j++){
            temp+=words[i][j];
            if(st.find(temp)!=st.end()) cnt++;

        }
        if(cnt==n && cnt>maxi){
            maxi=cnt;
            ans=words[i];
        }
    }

    return ans;
}
