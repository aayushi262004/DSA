class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int m = grid.size();
       int n = grid[0].size();
       queue<pair<int,int>>q;
       int cnt =0;
       vector<vector<int>>vis(m, vector<int>(n, -1));
       for(int i = 0; i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j] == 2){
                q.push({i,j});
                vis[i][j] =1;
            }
            if(grid[i][j] == 1){
                cnt++;
            }
        }
       } 
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    int val =0;
    int sum =0;
    while(!q.empty()){
        int size = q.size();
        bool flag = false;
        for(int i =0 ;i<size;i++){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int k =0;k<4;k++){
                int nrow = row + dx[k];
                int ncol = col + dy[k];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 1){
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                    sum++;
                    flag =true;
                }
            }
           

        }
         if(flag == true){
                val++;
            }
    }
    if(cnt == sum){
        return val;
    }
    return -1;
    }
};