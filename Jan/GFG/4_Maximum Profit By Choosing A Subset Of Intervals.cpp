class Solution {
  public:
  static bool comp(vector<int> v1, vector<int> v2){
      if(v1[1]==v2[1]){
          if(v1[0]==v2[0]) return v1[2]>v2[2];
          else return v1[0]<v2[0];
      }
      else{
          return v1[1]<v2[1];
      }
  }
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
        // sort -> 
        // 1st element of the arrray ! 
        // sort(intervals.begin(),intervals.end(),[](vector<int>& a,vector<int>& b){
        //     return a[1]!=b[1]?a[1]<b[1]:(a[0]!=b[0]?a[0]<b[0]:a[2]>b[2]);
        // });
        
        sort(intervals.begin(), intervals.end(), comp);
        map<int,int> profits;       // sorted ,,, 
        // lower bound and upper bound 
        
        // lowerbound(x) -> x or greater than x (smallest possible val)
        // upperbound(x) -> greater than x.... 
        
        profits[-1]=0;      // time -1=0; /
        
        for(auto& interval: intervals){
            
            int s=interval[0],e=interval[1],p=interval[2];
            
            
            //********prev stl**********
            int mxProfit=max((prev(profits.upper_bound(e)))->second,
            (prev(profits.upper_bound(s)))->second+p);
            profits[e]=mxProfit;
        }
        return profits.rbegin()->second;
    }
};
