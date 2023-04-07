vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> st;
        for(int i=0; i<arr.size(); i++){
            //st.top()!=arr[i] to avois both 0's t
            if(!st.empty() && ((st.top()>=0 && arr[i]<0) || (st.top()<0 && arr[i]>=0))){
                // cout<<st.top()<<" "<<arr[i]<<"; "<<endl;
                st.pop();
            }
            else
                st.push(arr[i]);
            
        }
        int i=0;
        vector<int> res(st.size());
        while(!st.empty()){
            res[i]=st.top();
            st.pop();
            i++;
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
