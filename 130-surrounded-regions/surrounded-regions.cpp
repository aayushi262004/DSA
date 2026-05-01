class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        queue<pair<int,int>>q;
        vector<vector<char>>vis(m,vector<char>(n,'X'));
        for(int i=0;i<m;i++){
            if(board[i][0] == 'O'){
                q.push({i,0});
            }
            if(board[i][n-1] == 'O'){
                q.push({i,n-1});
            }
        }
        for(int j=0;j<n;j++){
            if(board[0][j] == 'O'){
                q.push({0,j});
            }
            if(board[m-1][j] == 'O'){
                q.push({m-1,j});
            }
        }
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        vis[row][col] = 'O';
        for(int i =0;i<4;i++){
            int nrow = row + dx[i];
            int ncol = col + dy[i];
            if(nrow>= 0 && nrow<m && ncol>=0 && ncol<n && board[nrow][ncol] == 'O' && vis[nrow][ncol] == 'X'){
                vis[nrow][ncol] = 'O';
                q.push({nrow,ncol});
            }
        }
    }
      for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(vis[i][j] == 'O') board[i][j] = 'O';
                else board[i][j] = 'X';
            }
        }
    }
};