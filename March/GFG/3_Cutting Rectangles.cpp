vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
        long long int k = __gcd(L, B);
        long long int n = (long long int) (L/k)*(B/k);
        return {n,k};
    }
