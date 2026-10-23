
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;

        int n = grid[0].size();
        int islands = 0;

        queue<pair<int, int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0));

        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1' && !vis[i][j]) {
                    islands++;

                    q.push({i, j});
                    vis[i][j] = 1;

                    while (!q.empty()) {
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();

                        for (int k = 0; k < 4; k++) {
                            int nrow = row + dx[k];
                            int ncol = col + dy[k];

                            if (nrow >= 0 && nrow < m &&
                                ncol >= 0 && ncol < n &&
                                grid[nrow][ncol] == '1' &&
                                !vis[nrow][ncol]) {

                                vis[nrow][ncol] = 1;
                                q.push({nrow, ncol});
                            }
                        }
                    }
                }
            }
        }

        return islands;
    }
};
