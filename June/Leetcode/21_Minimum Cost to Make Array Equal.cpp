class Solution {
public:
    long long calc_cost(vector<int> nums, vector<int> cost, long long median){
        long long res=0;
        for(int i=0; i<nums.size(); i++){
            res+=(1ll*abs(nums[i]-median))*(1ll*cost[i]);
        }
        return res;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int, int>> v(nums.size());
        for(int i=0; i<nums.size(); i++){
            v[i].first=nums[i];
            v[i].second=cost[i];
        }
        
        sort(v.begin(), v.end());
        
        long long tot_cost=0;
        for(int i=0; i<cost.size(); i++){
            tot_cost+=1ll*cost[i];
        }
        
        int i=0;
        long long total=0, median; 
        while(i<nums.size() && total<(tot_cost+1)/2){
            total+=1ll*v[i].second;
            median=v[i].first;
            i++;
        }
        
        return calc_cost(nums, cost, median);
        
    }
};
