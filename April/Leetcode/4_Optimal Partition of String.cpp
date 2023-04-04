class Solution {
public:
    int partitionString(string s) {
        // unordered_set<char> st;
        // int count=0;
        // for(int i=0; i<s.size(); i++){
        //     if(st.find(s[i])==st.end())
        //         st.insert(s[i]);
        //     else{
        //         count++;
        //         st.clear();
        //         st.insert(s[i]);
        //     }  
        // }
        // if(!st.empty())
        //     count++;
        // return count;

        int count  = 0, right = 0;
        int n = s.size();
        int mask = 0;
        while(right < n){
            int pos = (s[right] - 'a');
            if(mask & (1 << pos)){  //left shift 1 by pos times
                mask = 0;
                count++;
            }
            mask |= (1 << pos);  //or mask and left shifted value
            right++;
        }
        if(mask) 
            count++;

        return count;
    }
};
