int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        if(N==1)return 0;
        int count=0;
        for(int i=0;i<N-1;i++){
            if(S[i]==S[i+1])count++;
        }
        int i=0;
        while(count){
            int index = P[i];
            if(S[index]!='?'){
                if(index!=0){
                    if(S[index]==S[index-1])count--;
                }
                if(index!=N-1){
                    if(S[index]==S[index+1])count--;
                }
                S[index]='?';
            }
            i++;
        }
        return i;
    }
