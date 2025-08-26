class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int n=dim.size();
        long long max_dg=-1;
        int ans=0;
        for(int i=0;i<n;i++){
            long long dg=1LL*dim[i][0]*dim[i][0] + 1LL*dim[i][1]*dim[i][1];
            int area=dim[i][0]*dim[i][1];
            if(dg>max_dg){
                max_dg=dg;
                ans=area;
            }
            else if(dg==max_dg){
                ans=max(ans,area);
            }
        }
    return ans;
    }
};