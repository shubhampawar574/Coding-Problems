// DFS Code
class Solution {
public:
    int mini=INT_MAX;
    void dfs(int node, vector<pair<int,int>> adj[], vector<int>& vis){
        if (vis[node])return;
        vis[node]=1;
        for (auto val:adj[node]){
            mini= min(mini,val.second);
            dfs(val.first,adj,vis);
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n+1];
        for (auto rowvect: roads){
            adj[rowvect[0]].push_back({rowvect[1],rowvect[2]});
            adj[rowvect[1]].push_back({rowvect[0],rowvect[2]});
        }
        vector<int> vis(n+1,0);
        dfs(1,adj,vis);
        return mini;
    }
};


// BFS Code
// class Solution {
// public:
//     int minScore(int n, vector<vector<int>>& roads) {
//         vector<pair<int,int>> adj[n+1];
//         for (auto rowvect: roads){
//             adj[rowvect[0]].push_back({rowvect[1],rowvect[2]});
//             adj[rowvect[1]].push_back({rowvect[0],rowvect[2]});
//         }
//         vector<int> vis(n+1,0);
//         int mini= INT_MAX;
//         queue<pair<int,int>> q; // node weight
//         q.push({1,INT_MAX}); 
//         while (!q.empty()){
//             mini= min(mini,q.front().second);
//             vis[q.front().first]=1;
//             for (auto val: adj[q.front().first]){
//                 if (!vis[val.first]){
//                     q.push({val.first,val.second});
//                 }
//             }
//             q.pop();
//         }

//         return mini;
//     }
// };
