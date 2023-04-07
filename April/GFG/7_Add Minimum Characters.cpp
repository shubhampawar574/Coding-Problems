bool isPalindrome(string str){
        int start=0;
        int end=str.size()-1;
        while(start<end){
            if(str[start]!=str[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
    int addMinChar(string str){    
        //code here
        if(isPalindrome(str)) return 0;
        int n=str.size();
        for(int i=n-1; i>=1; i--){
            if(isPalindrome(str.substr(0, i))) return n-i;
        }
        return n-1;
        
    }
