int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int, vector<int>, greater<int> > pq(arr.begin(), arr.end());
        
        int sum=0, a,b;
        while(pq.size()>=2){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            sum+=a+b;
            pq.push(a+b);
        }
        
        return sum;
    }
