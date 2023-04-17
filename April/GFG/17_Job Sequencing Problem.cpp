public:
    //Function to find the maximum profit and the number of jobs done.
    static bool func(Job &a,Job &b){
        return a.dead<b.dead;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int c = 0, totalprofit=0;
        sort(arr,arr+n,func);
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            if(arr[i].dead>pq.size())pq.push(arr[i].profit);
            else if(arr[i].dead==pq.size()){
                if(arr[i].profit>pq.top()){
                    pq.pop();
                    pq.push(arr[i].profit);
                }
            }
        }
        c=pq.size();
        while(pq.size()){
            totalprofit+=pq.top();
            pq.pop();
        }
        return {c,totalprofit};
    }
