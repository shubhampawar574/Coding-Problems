vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        // unordered_map<int, int> left;
        // unordered_map<int, int> right;
        // int lcount=0, rcount=0;
        
        // for(int i=N-1; i>0; i--){
        //     right[A[i]]++;
        // }
        // for(auto it: right){
        //         cout<<it.first<<" "<<it.second<<endl;
        //     }cout<<"right map end"<<endl;
        // rcount=right.size();
        // vector<int> res(N);
        
        // res[0]=-rcount;
        // cout<<lcount<<" "<<rcount<<endl;
        // for(int i=1; i<N; i++){
            
        //     if(right.count(A[i])==1) right.erase(A[i]);
        //     else right[A[i]]--;
        //     cout<<"right map start"<<endl;
        //     for(auto it: right){
        //         cout<<it.first<<" "<<it.second<<endl;
        //     }cout<<"right map end"<<endl;
        //     left[A[i-1]]++;
            
        //     lcount=left.size();
        //     rcount=right.size();
            
        //     cout<<lcount<<" "<<rcount<<endl;
        //     // if(i==N-1) res[i]=lcount;
        //     // else res[i]=lcount-rcount;
            
        //     res[i]=lcount-rcount;
            
        // }
        
        // return res;
        
        unordered_map<int,int> mright,mleft;
        for(int i=0;i<N;i++)mright[A[i]]++;
        vector<int> ans;
        for(int i=0;i<N;i++){
            int left = mleft.size();
            mright[A[i]]--;
            if(mright[A[i]]==0)mright.erase(A[i]);
            int right = mright.size();
            ans.push_back(left-right);
            mleft[A[i]]++;
        }
        return ans;
        
    }
