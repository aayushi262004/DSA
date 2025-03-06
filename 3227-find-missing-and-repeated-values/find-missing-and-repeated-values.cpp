class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>vec(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int k=grid[i][j];
                vec[k]++;
            }
        }
        vector<int>res(2);
        for(int i=1;i<n*n+1;i++){
            if(vec[i]==2){
                res[0]=i;
            }
            if(vec[i]==0){
                res[1]=i;
            }
        }
        return res;
    }
};