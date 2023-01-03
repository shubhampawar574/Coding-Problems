class Solution {
public:
    bool detectCapitalUse(string word) {
        
        // int low=0, up=0, n=word.size(), ind;
        // for(int i=0; i<n; i++){
        //     if(isupper(word[i])){
        //         ind=i;
        //         up++;
        //     } 
        //     else if(islower(word[i])) low++;
        // }

        // if(up==n || low==n || ((up==1)&&(low==n-1)&&(ind==0))) return true;
        // return false;

        int n = word.size(); 
        if(n == 1) return 1;

        int st = 97, end = 122;
        if(word[0] <= 90 && word[1] <= 90) st = 60, end = 90;
        
        for(int i = 1; i < n ; i++)
            if(word[i] < st || word[i] > end) return false;

        return true;

    }
};
