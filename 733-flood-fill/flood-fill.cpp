class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        vector<vector<int>>dup =image;
        int m = image.size();
        int n = image[0].size();
        int initcolor = image[sr][sc];
        if(initcolor == color)return image;
        image[sr][sc] = color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = x+ dx[i];
                int ncol= y+dy[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol] == initcolor){
                    image[nrow][ncol]= color;
                    q.push({nrow,ncol});
                }
            }

        }
    return image;
    }
};