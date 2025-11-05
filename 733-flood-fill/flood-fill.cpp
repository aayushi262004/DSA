class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
      
        int initColor=image[sr][sc];
          if(initColor==color) return image;
        queue<pair<int,int>>q;
        image[sr][sc]=color;
        q.push({sr,sc});
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        while(!q.empty()){
            int s=q.size();
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+dx[i];
                int ncol=col+dy[i];

                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && image[nrow][ncol]==initColor){
                    image[nrow][ncol]=color;
                    q.push({nrow,ncol});
                }
            }
        }
    return image;
    }
};