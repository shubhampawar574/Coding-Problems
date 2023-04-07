class Solution {
public:

//DFS
void dfs(int i, int j, vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1)
            return;

        grid[i][j] = 0;
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int k=0;k<4;k++){
            int nx = i + dx[k];
            int ny = j + dy[k];
            dfs(nx, ny, grid);
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i*j==0 || i==m-1 || j==n-1) && (grid[i][j]==1))
                    dfs(i, j, grid);
            }
        }
        
        int count = 0;
        for (int i = 1; i < m-1; i++) {
            for (int j = 1; j < n-1; j++) {
                if (grid[i][j] == 1) {
                    count+=grid[i][j];
                }
            }
        }
        return count;
    }
        
        
     NOTE: DFS IS FASTER AND SPACE EFFICIENT THAN BFS
             
             
    // int numEnclaves(vector<vector<int>>& grid) {
    //     //BFS
    //     int dir_x[4] = {1, -1, 0, 0};
    //     int dir_y[4] = {0, 0, 1, -1};
    //     int ans = 0;  
    //     int m = grid.size(), n = grid[0].size();
    //     vector<vector<bool>> vis(m, vector(n, false));
    //     for(int i = 0; i < m; i++){
    //         for(int j = 0; j < n; j++){
    //             if(vis[i][j] || grid[i][j] == 0) 
    //                 continue;
    //             queue<pair<int, int>> q;
    //             q.push({i, j});
    //             vis[i][j]=true;
    //             int cells = 0; 
    //             bool enclosed = true; 
    //             while(!q.empty()){
    //                 auto front = q.front();
    //                 q.pop();
    //                 cells++;
    //                 for(int k = 0; k < 4; k++){
    //                     int dy = front.first + dir_y[k];
    //                     int dx = front.second + dir_x[k];               
    //                     if(dy < 0 || dy >= m || dx < 0 || dx >= n) { 
    //                         enclosed = false;
    //                         continue;
    //                     }
    //                     if(grid[dy][dx] == 0) continue;
    //                     if(vis[dy][dx]) continue;
    //                     vis[dy][dx] = true;
    //                     q.push({dy, dx});
    //                 }
    //             }
    //             if(enclosed) 
    //                 ans+=cells;
    //         }
    //     }
    //     return ans;
    // }
};
