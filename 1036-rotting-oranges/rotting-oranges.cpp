class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      int m = grid.size();
      int n = grid[0].size();
      queue<pair<int,int>>q;
      vector<vector<int>>vis(m,vector<int>(n,0));
      int total =0;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j] == 2){
                q.push({i,j});
                vis[i][j] =1;
            }
            if(grid[i][j]==1){
                total++;
            }
        }
      }
      int dx[] ={0,0,1,-1};
      int dy[] ={1,-1,0,0};
      int cnt= 0;
      while(!q.empty()){
        int size = q.size();
          bool flag =false;
        for(int i=0;i<size;i++){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
          
            for(int i=0;i<4;i++){
                int nrow = row + dx[i];
                int ncol = col + dy[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol] ==0 && grid[nrow][ncol] ==1){                    flag = true;
                    q.push({nrow,ncol});
                    total--;
                    vis[nrow][ncol]=1;
                    grid[nrow][ncol]=2;

                }
            }
            
        }
        if(flag == true){
                cnt++;
            }
      }
    if(total == 0)return cnt;
    return -1;  
    }
};