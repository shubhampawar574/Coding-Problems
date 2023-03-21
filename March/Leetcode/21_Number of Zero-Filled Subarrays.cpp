class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int ans = 0, cnt = 0;
        for(int x: nums){
            if(x)
             cnt=0;
            else 
                cnt++;
            ans+=cnt;
        }
        return ans;
    }
};
