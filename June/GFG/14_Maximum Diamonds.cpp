long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int> pq;
        
        for(int i=0; i<N; i++){
            pq.push(A[i]);
        }
        
        long long res=0;
        for(int i=0; i<K; i++){
            int high = pq.top();
            res+=high;
            pq.pop();
            pq.push(high/2);
        }
        return res;
    }
