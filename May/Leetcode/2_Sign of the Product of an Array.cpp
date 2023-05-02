class Solution {
public:
    int arraySign(vector<int>& nums) {
        int countn=0, countz=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0) countn++;
            else if(nums[i]==0) countz++;
        }

        if(countz) return 0;
        else if(countn & 1) return -1;
        else return 1;
    }
};
