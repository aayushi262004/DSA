class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] == 1)return -1;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair< int,pair<int,int>>>>pq;
        pq.push({1,{0,0}});
        int dx[8] = {0,1,1,1,0,-1,-1,-1};
        int dy[8] = {1,1,0,-1,-1,-1,0,1};
        vector<vector<int>>dist(n, vector<int>(n,INT_MAX));
        dist[0][0] = 1;
        while(!pq.empty()){
            int step = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            for(int i=0;i<8;i++){
                int nrow = row + dx[i];
                int ncol = col + dy[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<n && grid[nrow][ncol] != 1 && dist[nrow][ncol] > dist[row][col]+1){
                    dist[nrow][ncol] = dist[row][col]+1;
                    pq.push({dist[nrow][ncol], {nrow,ncol}});
                }
            }
        }
    if(dist[n-1][n-1] == INT_MAX){
        return -1;
    }
    return dist[n-1][n-1];
    }
};