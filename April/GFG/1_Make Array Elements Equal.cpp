long long int minOperations(int N) {
        // Code here
        long long int x = N/2;
        if(N&1) return (long long int)x*(x+1);
        else return (long long int)x*x;
    }
