class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<int>>&grid, int delrow[], int delcol[]){
        vis[row][col]=1;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
        
        if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
            dfs(nrow,ncol,vis,grid,delrow,delcol);
        }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));

        int delrow[]={0,0,1,-1};
        int delcol[]={1,-1,0,0};
        
        for(int j=0;j<n;j++){
            if(grid[0][j]==1 && !vis[0][j]){
                dfs(0,j,vis,grid,delrow,delcol);
            }
            if(grid[m-1][j]==1 && !vis[m-1][j]){
                dfs(m-1,j,vis,grid,delrow,delcol);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==1 && !vis[i][0]){
                dfs(i,0,vis,grid,delrow,delcol);
            }
            if(grid[i][n-1]==1 && !vis[i][n-1]){
                dfs(i,n-1,vis,grid,delrow,delcol);
            }
        }

        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]!=1){
                    cnt++;
                }
            }
        }
    return cnt;
    }
};