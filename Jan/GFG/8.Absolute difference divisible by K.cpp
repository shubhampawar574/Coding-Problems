class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]%k]++;
        }
        
        long long res=0;
        for(auto i: mp){
            int n=i.second;
            res+=n*(n-1)/2;
        }
        
        return res;
    }
};
