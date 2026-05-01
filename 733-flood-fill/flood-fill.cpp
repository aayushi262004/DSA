class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>>vis(m, vector<int>(n,0));
        vector<vector<int>>dup = image;
        int initColor = image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc] = color;
        vis[sr][sc] = 1;
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row+dx[i];
                int ncol = col+dy[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol] ==0 && image[nrow][ncol] == initColor){
                    vis[nrow][ncol] = 1;
                    image[nrow][ncol] = color;
                    q.push({nrow,ncol});

                }
            }
        }
    return image;
    }
};