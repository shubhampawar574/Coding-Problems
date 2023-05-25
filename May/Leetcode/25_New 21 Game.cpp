class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        // Corner cases
        if (k == 0) return 1.0;
        if (n >= k-1 + maxPts) return 1.0;

        // dp[i] is the probability of getting point i.
        vector<double> dp(n + 1, 0.0);

        double probability = 0.0; // dp of N or less points.
        double windowSum = 1.0; // Sliding required window sum
        dp[0] = 1.0;
        for (int i = 1; i <= n; i++) {
            dp[i] = windowSum / maxPts;

            if(i < k) windowSum += dp[i];
            else probability += dp[i];
            
            if(i >= maxPts) windowSum -= dp[i - maxPts];
        }

        return probability;
    }
};
