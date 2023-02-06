class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // vector<int> ans;
        // for(int i=0; i+n<2*n; i++){
        //     ans.push_back(nums[i]);
        //     ans.push_back(nums[i+n]);
        // }
        // return ans;
  
         //since nums[i]<=10^3, which has 10 bits in binary format
        int tenBitNum = pow(2,10)-1;  // Geting a 10 bit number to extract the First encoded number 
        for(int i=0;i<n;i++){   // encoding the the y(i) and x(i) number in the i th index 
            int secNum = nums[n+i] << 10 ;
             nums[i] = nums[i] | secNum ; 
        }
        for(int i = n - 1  ; i >= 0 ; i-- ){   // decoding the the y(i) and x(i) number in the i th index 
            nums[2*i + 1] = nums[i] >> 10 ;
            nums[2*i] =  nums[i] & tenBitNum ;
        }
        return nums ;
    }
};
