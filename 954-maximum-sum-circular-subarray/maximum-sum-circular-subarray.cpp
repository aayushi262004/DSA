class Solution {
public:
    int kadane_max(vector<int>& nums, int n){
        int curr_sum=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<n;i++){
            curr_sum = max(nums[i],curr_sum+nums[i]);
            max_sum = max(curr_sum,max_sum);

        }
        return max_sum;
    }

    int kadane_min(vector<int>& nums, int n){
        int curr_sum=nums[0];
        int min_sum=nums[0];
        for(int i=1;i<n;i++){
            curr_sum = min(nums[i],curr_sum+nums[i]);
            min_sum = min(curr_sum,min_sum);

        }
        return min_sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);

        int MaxSum = kadane_max(nums,n);
        int MinSum = kadane_min(nums,n);

        int CircularSum = sum-MinSum;

        if(MaxSum>0){
            return max(MaxSum, CircularSum);
        }
    return MaxSum;
    }
};