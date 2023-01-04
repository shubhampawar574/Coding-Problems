class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int rounds=0;
        unordered_map<int, int> mp;
        for(int i=0; i<tasks.size(); i++){
            mp[tasks[i]]++;
        }
        for(auto i: mp){
            int s=i.second;
            if(s==1) return -1;
            else if(s==2) rounds+=1;
            else{
                rounds+=ceil((double)s/3.0);
            }
        }
        return rounds;
    }
};
