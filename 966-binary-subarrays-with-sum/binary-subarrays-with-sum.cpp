class Solution {
public:
    int cntofsubarray(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int n = nums.size();
        int left =0;
        int cnt =0;
        long long sum = 0;
        for(int right =0;right<n;right++){
            sum+= nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            
                cnt+=right-left+1;
            
        }
    return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int val = cntofsubarray(nums,goal)- cntofsubarray(nums,goal-1);
        return val;
    }
};