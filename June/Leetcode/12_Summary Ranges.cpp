class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        // vector<string> res;
        // vector<int> temp;
        // if(nums.empty())
        //     return res;
        // temp.push_back(nums[0]);
        // string add;

        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i]-nums[i-1]>1){
        //         add=to_string(temp[0]);
        //         if(temp.size()==1){
        //             res.push_back(add);
        //         }
        //         else{
        //              add=add+"->"+to_string(temp.back());
        //              res.push_back(add);
        //         }
        //         temp.clear();
        //         temp.push_back(nums[i]);
        //     }
        //     else if(nums[i]-nums[i-1]==1){
        //         temp.push_back(nums[i]);
        //     }
        // }

        // add=to_string(temp[0]);
        // if(temp.size()==1){
        //     res.push_back(add);
        // }
        // else{
        //         add=add+"->"+to_string(temp.back());
        //         res.push_back(add);
        // }
        // return res;

        vector<string> Res;
        
        if(nums.size() < 1)
           return Res;
        
        for(int i=0;i<nums.size();)
        {
            int low=i;
            int high=i;
            
            while(high+1 < nums.size() && nums[high+1] == nums[high]+1)
                high++;
            
            if(high > low)
                Res.push_back(to_string(nums[low]) + "->" + to_string(nums[high]));
            
            else
                Res.push_back(to_string(nums[high]));
            
            i=high+1;
            
        }  
        
        return Res;
    }
};
