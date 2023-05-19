vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        sort(range.begin(),range.end());
        vector<int> ans;
        for(int i=0;i<q;i++){
            int temp = queries[i];
            int last=-1,j=0,t;
            for(j=0;j<n;j++){
                if(last<range[j][1] and last>=range[j][0]){
                    t = range[j][1]-last;
                    if(t>=temp){
                        ans.push_back(last+temp);
                        break;
                    }
                    last=range[j][1];
                    temp-=t;
                }
                else if(last<range[j][1]){
                    t = range[j][1]-range[j][0]+1;
                    if(t>=temp){
                        ans.push_back(range[j][0]+temp-1);
                        break;
                    }
                    last=range[j][1];
                    temp-=t;
                }
            }
            if(j==n)ans.push_back(-1);
        }
        return ans;
    } 
