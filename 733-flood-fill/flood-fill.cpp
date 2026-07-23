class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        if (image[sr][sc] == color)
            return image;
        int m = image.size();
        int n = image[0].size();

        queue<pair<int, int>> q;
        q.push({sr, sc});
        int initColor = image[sr][sc];
        image[sr][sc] = color;

        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = row + dx[i];
                int ncol = col + dy[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    image[nrow][ncol] == initColor) {
                    image[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }
        return image;
    }
};