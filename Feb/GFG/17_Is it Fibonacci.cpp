long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long sum=0;
        sum=accumulate(GeekNum.begin(),GeekNum.end(),sum);
        int j=0;
        for(int i=K;i<N;i++){
            GeekNum.push_back(sum);
            sum+=sum;
            sum-=GeekNum[j];
            j++;
        }
        return GeekNum[N-1];
    }
