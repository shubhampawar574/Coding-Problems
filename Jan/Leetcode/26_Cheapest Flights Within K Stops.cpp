int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> price(n, 1e9);
        vector<vector<pair<int, int>>> adj(n);
        queue<pair<int, pair<int, int>>> q;
        for (vector<int>& v : flights) 
            adj[v[0]].push_back({v[1], v[2]});
        q.push({src, {0, 0}});
        price[src] = 0;
        while (!q.empty()) {
            int cur = q.front().first;
            int curprice = q.front().second.first;
            int moves = q.front().second.second;
            q.pop();
            if (moves > k)
                continue;
            for (pair<int, int>& p : adj[cur]) {
                if (price[p.first] <= curprice + p.second)
                    continue;
                q.push({p.first, {curprice + p.second, moves + 1}});
                price[p.first] = curprice + p.second;
            }
        }
        return price[dst] == 1e9 ? -1 : price[dst];
    }
