class Solution {
public:

    static bool comp(vector<int> &v1, vector<int> &v2){
        if(v1[1]==v2[1]){
            return v1[0]<v2[0];
        }
        return v1[1]<v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0) return 0;
        sort(points.begin(), points.end(), comp);

        int arrows = 1;
        int last = points[0][1];
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > last){
                arrows++;
                last = points[i][1];
            }
        }
        return arrows;
    }
};
