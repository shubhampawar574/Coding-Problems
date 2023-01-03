class Solution {
public:
    bool wordPattern(string p, string s) {
        
        s.push_back(' ');
        string temp;
        int j=0;
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        bool flag=true;
        for(int i=0; i<s.size(); i++){
            
            if(s[i]==' '){
                if(m1.find(p[j]) == m1.end()){
                    m1[p[j]]=temp;
                    
                }
                else{
                    if(m1[p[j]] != temp){
                        flag=false;
                        break;
                    }        
                }
                
                if(m2.find(temp) == m2.end()){
                    m2[temp]=p[j];
                    
                }
                else{
                    if(m2[temp] != p[j]){
                        flag=false;
                        break;
                    }        
                }
                j++;
                temp="";
            }else{
                temp+=s[i];
            }
        }
        if(j!=p.size())
            return false;
        
        return flag;
    }
};
