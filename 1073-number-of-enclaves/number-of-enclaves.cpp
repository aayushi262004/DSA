class Solution {
public:
    void dfs(int row,int col, vector<vector<int>>&grid,vector<vector<int>>&vis,int dx[], int dy[],int m,int n){
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+dx[i];
            int ncol=col+dy[i];
            if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow,ncol,grid,vis,dx,dy,m,n);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        for(int i=0;i<n;i++){
            if(grid[0][i]==1 && !vis[0][i])dfs(0,i,grid,vis,dx,dy,m,n);
            if(grid[m-1][i]==1 && !vis[m-1][i])dfs(m-1,i,grid,vis,dx,dy,m,n);
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==1 && !vis[i][0])dfs(i,0,grid,vis,dx,dy,m,n);
            if(grid[i][n-1]==1 && !vis[i][n-1])dfs(i,n-1,grid,vis,dx,dy,m,n);
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    cnt++;
                }
            }
        }
    return cnt;
    }
};