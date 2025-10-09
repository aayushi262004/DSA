class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& board, int delrow[], int delcol[]) {
        vis[row][col] = 1;
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < 4; ++i) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n
                && !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board, delrow, delcol);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return;

        int m = board.size();
        int n = board[0].size();
        int delrow[] = {0, 0, 1, -1};
        int delcol[] = {1, -1, 0, 0};
        vector<vector<int>> vis(m, vector<int>(n, 0));

        // Run DFS from border 'O's
        for (int j = 0; j < n; ++j) {
            if (board[0][j] == 'O' && !vis[0][j]) dfs(0, j, vis, board, delrow, delcol);
            if (board[m-1][j] == 'O' && !vis[m-1][j]) dfs(m-1, j, vis, board, delrow, delcol);
        }
        for (int i = 0; i < m; ++i) {
            if (board[i][0] == 'O' && !vis[i][0]) dfs(i, 0, vis, board, delrow, delcol);
            if (board[i][n-1] == 'O' && !vis[i][n-1]) dfs(i, n-1, vis, board, delrow, delcol);
        }

        // Flip unvisited 'O's to 'X'
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 'O' && vis[i][j] == 0) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
