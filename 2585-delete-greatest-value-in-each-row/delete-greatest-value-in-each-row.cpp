class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size(); 
        for(auto &c:grid){
            sort(c.begin(),c.end());
        }
        int ans=0;
        for(int i=0;i<n;i++){
           int curr=0;
            for(int j=0;j<m;j++){
                curr=max(curr,grid[j][i]);
            }
            ans+=curr;
        }
    return ans;
    }
};