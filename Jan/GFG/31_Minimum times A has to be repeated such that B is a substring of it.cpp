int minRepeats(string A, string B) {
        // code here
        if(A==B)return 1;
        int i=0,n=A.length(),m=B.length(),ans=1,j=0;
        while(i<n)
        {
            if(A[i]==B[j]){
                j++;
            }
            else{
                if(A[i]==B[0])j=1;
                else j=0;
            }
            i++;
        }
        i=0;
        if(j!=m)ans++;
        while(j<m and A[i]==B[j]){
            i++;
            i%=n;
            if(i==0)ans++;
            j++;
        }
        if(j!=m)return -1;
        if(i==0)ans--;
        return ans;
    }
