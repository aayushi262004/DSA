class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())    return 0;
        int total=0, rotten=0;
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>image=grid;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    total++;
                }
                if(grid[i][j]==2){
                    rotten++;
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        int day=0;
        
        while(!q.empty()){
            int s=q.size();
            bool changed=false;
            for(int j=0;j<s;j++){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nrow=row+dx[i];
                    int ncol=col+dy[i];
            
            if(nrow<m && nrow>=0 && ncol<n && ncol>=0 && image[nrow][ncol]==1 &&  vis[nrow][ncol]!=1){
                image[nrow][ncol]=2;
                rotten++;
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
                changed=true;
            }
            }
            }
          if(changed==true)day++; 
        }
        
    return(total==rotten?day:-1);
    }
};