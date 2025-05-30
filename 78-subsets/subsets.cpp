class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
         
        vector<vector<int>>ans;
        for(int i=0;i<=(1<<n)-1;i++){
            vector<int>vec;
            for(int j=0;j<n;j++){
               
                if(i&(1<<j)){
                    vec.push_back(nums[j]);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};