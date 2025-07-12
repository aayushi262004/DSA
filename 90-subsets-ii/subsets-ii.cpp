class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>stt;

        sort(nums.begin(),nums.end());

        for(int i=0;i<(1<<n);i++){
            vector<int>ds;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    ds.push_back(nums[j]);
                }
            }
        stt.insert(ds);
        }
        vector<vector<int>>ans(stt.begin(),stt.end());
return ans;
    }
};