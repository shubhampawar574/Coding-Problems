char help(string s){
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]!='?')return s[i];
            if(s[j]!='?')return s[j];
            i++;
            j--;
            
        }
        return '#';
    }
    int minimumSum(string s) {
        // code here
        int i=0,j=s.length()-1,ans=0;
        char prev = '#';
        while(i<=j){
            if(s[i]=='?' and s[j]=='?'){
                if(prev=='#'){
                    prev = help(s);
                    if(prev=='#')return 0;
                }
            }
            else if(s[i]=='?'){
                if(prev!='#'){
                    ans+=2*abs(prev-s[j]);
                }
                prev=s[j];
            }
            else if(s[j]=='?'){
                if(prev!='#'){
                    ans+=2*abs(prev-s[i]);
                }
                prev=s[i];
            }
            else if(s[i]==s[j]){
                if(prev!='#'){
                    ans+=2*abs(prev-s[i]);
                }
                prev=s[i];
            }
            else return -1;
            i++;
            j--;
        }
        return ans;
    }
