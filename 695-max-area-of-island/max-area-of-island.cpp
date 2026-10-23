class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int max_area = 0;
        queue<pair<int,int>>q;
        int dx[] = {0,0, 1,-1};
        int dy[] = {1,-1,0,0};
        vector<vector<int>>vis(m, vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j =0 ;j<n;j++){
                if(grid[i][j] == 1 && vis[i][j] == 0){//yha vis vali condition yaad rakhna
                    q.push({i,j});
                    vis[i][j] =1;
                   int  cnt = 1;
                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            int nrow = row + dx[k];
                            int ncol = col + dy[k];
                            if(nrow>=0 && nrow < m && ncol>=0 && ncol<n && vis[nrow][ncol] != 1 && grid[nrow][ncol] == 1){
                                q.push({nrow,ncol});
                                vis[nrow][ncol] =1;
                                cnt++;
                            }
                    }
                }
                    max_area = max(max_area, cnt);
                
            }
        }
    }
    return max_area;
    }
};