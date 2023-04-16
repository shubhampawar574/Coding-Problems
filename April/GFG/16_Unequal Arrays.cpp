long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        long long sum=0,ans=0;
        vector<int> a,b,c,d;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            sum+=A[i]-B[i];
            if(A[i]%2!=0)a.push_back(A[i]);
            else b.push_back(A[i]);
            if(B[i]%2!=0)c.push_back(B[i]);
            else d.push_back(B[i]);
        }
        if(sum!=0 || a.size()!=c.size())return -1;
        for(int i=0;i<a.size();i++){
            ans+=(abs(a[i]-c[i])/2);
        }
        for(int i=0;i<b.size();i++){
            ans+=(abs(b[i]-d[i])/2);
        }
        return ans/2;
    }
