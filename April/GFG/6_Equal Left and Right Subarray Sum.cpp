int equalSum(int N, vector<int> &A) {
        // code here
        long long int lsum=0, rsum=0;
        for(int i=0; i<A.size(); i++){
            rsum+=A[i];
        }
        for(int i=0; i<A.size(); i++){
            rsum-=A[i];
            if(lsum==rsum) return i+1;
            lsum+=A[i];
        }
        return -1;
    }
