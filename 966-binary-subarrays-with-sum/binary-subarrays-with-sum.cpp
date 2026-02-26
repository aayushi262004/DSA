class Solution {
public:
    long long finding_subarrays(vector<int>&nums,int goal){
        if(goal<0)return 0;
        int left=0;
        long long cnt=0;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            cnt+=right-left+1;
        }
    return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return finding_subarrays(nums,goal)-finding_subarrays(nums,goal-1);
    }
};