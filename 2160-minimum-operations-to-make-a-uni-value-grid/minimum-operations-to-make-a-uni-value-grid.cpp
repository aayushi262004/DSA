class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>vec;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                vec.push_back(grid[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        int mid=vec.size()/2;
        int cnt=0;
        for(int k=0;k<mid;k++){
            while(vec[k]<vec[mid]){
                vec[k]+=x;
                cnt++;
            }
        }
         for(int k=mid+1;k<vec.size();k++){
            while(vec[k]>vec[mid]){
                vec[k]-=x;
                cnt++;
            }
        }
        int val=0;
        for(int s=0;s<vec.size();s++){
            if(vec[s]==vec[0]) val++;
        }
        if (val==vec.size()) return cnt;
        return -1;
    }
};