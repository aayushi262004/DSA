class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(grid[i][0] == 1)  q.push({i,0});
            if(grid[i][n-1] == 1) q.push({i,n-1});
        }
        for(int j =0;j<n;j++){
            if(grid[0][j] ==1)q.push({0,j});
            if(grid[m-1][j] ==1)q.push({m-1,j});
        }
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        while(!q.empty()){
            int row  = q.front().first;
            int col = q.front().second;
            q.pop();
            grid[row][col] = 0;
            vis[row][col] = 1;
            for(int i=0;i<4;i++){
                int nrow = row + dx[i];
                int ncol = col + dy[i];
                if(nrow>= 0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0){
                    vis[nrow][ncol] = 1;
                    grid[nrow][ncol] = 0;
                    q.push({nrow,ncol});
                }
            }

        }
        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] ==1 && vis[i][j]==0){
                    cnt++;
                }
            }
        }
    return cnt;
    }
};