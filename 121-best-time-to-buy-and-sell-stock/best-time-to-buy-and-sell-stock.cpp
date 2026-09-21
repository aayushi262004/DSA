class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int minbuy = INT_MAX;
        int maxp = 0;
        for(int i=0;i<n;i++){
            minbuy = min(minbuy, nums[i]);
            maxp = max(maxp, nums[i]-minbuy);
        }
    return maxp;
    }
};