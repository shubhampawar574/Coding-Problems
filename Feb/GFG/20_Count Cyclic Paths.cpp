int countPaths(int N){
        // code here 
        long mod = 1e9+7,o=1,a=0,b=0,c=0;
        for(int i=1;i<=N;i++){
            long temp1=(a+b+c)%mod;
            long temp2=(o+b+c)%mod;
            long temp3=(o+a+c)%mod;
            long temp4=(o+b+a)%mod;
            o=temp1;
            a=temp2;
            b=temp3;
            c=temp4;
        }
        return o;
    }
