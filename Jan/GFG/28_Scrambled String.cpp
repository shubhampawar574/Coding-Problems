unordered_map<string,bool> mm;
    bool isScramble(string S1, string S2){
        //code here
        if(S1==S2)return true;
        if(mm.find(S1+S2)!=mm.end())return mm[S1+S2];
        int n = S1.length();
        string temp ="";
        for(int i=0;i<n-1;i++)
        {
            temp+=S1[i];
            bool a = isScramble(temp,S2.substr(0,i+1));
            bool b = isScramble(temp,S2.substr(n-i-1,i+1));
            bool c = isScramble(S1.substr(i+1,n-i-1),S2.substr(i+1,n-i-1));
            bool d = isScramble(S1.substr(i+1,n-i-1),S2.substr(0,n-i-1));
            if((a and c) or (b and d))return true;
        }
        return mm[S1+S2]=false;
    }
