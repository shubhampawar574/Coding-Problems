vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int i, n=arr.size();
        stack<int> st;
        vector<int> ans(n, -1);
        for(i=n-1;i>=0;i--) {
            while(st.size() && arr[st.top()]>=arr[i]) st.pop();
            ans[i]=(st.size())?st.top():-1;
            st.push(i);
        }
        while(st.size()) st.pop();
        for(i=0;i<n;i++) {
            while(st.size() && arr[st.top()]>=arr[i]) st.pop();
            if(st.size()) {
                if(ans[i]==-1) ans[i]=st.top();
                else {
                    int index=st.top();
                    if((i-index)<(ans[i]-i)) ans[i]=index;
                    else if((i-index)==(ans[i]-i)) {
                        if(arr[index]<=arr[ans[i]]) ans[i]=index;
                    }
                }
            }
            st.push(i);
        }
        return ans;
    }
