int sumOfNaturals(int n) {
        // code here
        int mod = 1e9+7;
        return (((long long)n*(n+1))/2)%mod;
    }
