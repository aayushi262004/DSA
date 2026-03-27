class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();

        k=k%m;

        if(k==0)return true;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int curr_idx=j;
                int final_idx;
                if(i%2==0){
                    final_idx=(j+k)%m;
                }else{
                    final_idx=(j-k+m)%m;
                }
                if(mat[i][curr_idx]!=mat[i][final_idx]){
                    return false;
                }
                
            }
        }
    return true;
    }
};