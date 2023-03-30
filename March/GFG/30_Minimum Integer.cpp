int minimumInteger(int N, vector<int> &A) {
        // code here
        long long int sum=0;
        int ans = INT_MAX;
        sum = accumulate(A.begin(),A.end(),sum);
        for(int i=0;i<N;i++){
            if(sum<=(long long int)N*A[i])ans=min(ans,A[i]);
        }
        return ans;
    }
