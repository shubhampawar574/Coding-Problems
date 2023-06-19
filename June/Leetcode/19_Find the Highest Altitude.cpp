class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        int val=0;
        for(int i=0; i<gain.size(); i++){
            val+=gain[i];
            if(val>res){
                res=val;
            }
        }
        return res;
    }
};
