class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i =0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto c:mpp){
            if(c.second > n/3){
                ans.push_back(c.first);
            }
        }
    return ans;
    }
};