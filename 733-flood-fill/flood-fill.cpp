class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>>q;
        int initColor=image[sr][sc];
        if(initColor==color)return image;
        image[sr][sc]=color;
        //vector<vector<int>>cpp=image;
        q.push({sr,sc});
        
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        while(!q.empty()){
            //int s=q.size();
            //for(int i=0;i<s;i++){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int nrow=row+dx[j];
                    int ncol=col+dy[j];
                    if(nrow<m &&nrow>=0 && ncol<n && ncol>=0 && image[nrow][ncol]==initColor){
                        image[nrow][ncol]=color;
                        q.push({nrow,ncol});
                    }
                }
            }
        
     return image;   
    }
};