class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
     int mini=0;
     int maxi=0;
     int sum=0;
     for(int i=0;i<nums.size();i++){
        sum+=nums[i];
     
     mini=min(sum,mini);
     maxi=max(sum,maxi);
     }
     return maxi-mini;
    }
};