class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=1; 
        int n=points.size();
       // slope of every point with selected point
        for(int i=0;i<n-1;i++){
            map<double,int> mp;
            for(int j=i+1;j<n;j++){
                if(points[j][1]==points[i][1]) 
                mp[INT_MAX]++;//i assume slope to avoid slope of 90 degree(we can say that is Perpendicular line) 
                else{ 
                    double x = (double)(points[j][0]-points[i][0])/(double)(points[j][1]-points[i][1]);
                    //storing the slop into map
                    mp[x]++;
                }
            }
            // same slope w.r.t.that selected point
            int temp = 0;
            for(auto it:mp)
                temp = max(temp, it.second+1);    // +1 for the current point(point itself)
            ans = max(temp, ans);
        }
        return ans;
    }
};
