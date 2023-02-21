int minIteration(int N, int M, int x, int y){    
        // code here
        pair<int, int> p1={0,0};
        pair<int, int> p2={N-1,0};
        pair<int, int> p3={0,M-1};
        pair<int, int> p4={N-1,M-1};
        
        return max({abs(x-1-p1.first)+abs(y-1-p1.second), abs(x-1-p2.first)+abs(y-1-p2.second),
            abs(x-1-p3.first)+abs(y-1-p3.second), abs(x-1-p4.first)+abs(y-1-p4.second)
        });
        
    }
