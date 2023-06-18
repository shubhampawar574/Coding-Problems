int distributeTicket(int N, int K) {
        // code here
        int i=1,j=N,ans;
        bool a=false;
        while(i<=j){
            if(!a){
                i+=K;
                ans=j;
            }
            else{
                j-=K;
                ans=i;
            }
            a=!a;
        }
        return ans;
    }
