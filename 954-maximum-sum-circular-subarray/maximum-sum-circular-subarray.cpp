class Solution {
public:
    int kadanemax(vector<int> &nums, int n){
        int curr_sum=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<n;i++){
            curr_sum=max(nums[i],curr_sum+nums[i]);
            max_sum=max(curr_sum,max_sum);
        }
        return max_sum;
    }
    int kadanemin(vector<int>&nums, int n){
        int curr_sum=nums[0];
        int min_sum=nums[0];
        for(int i=1;i<n;i++){
            curr_sum=min(nums[i],curr_sum+nums[i]);
            min_sum=min(min_sum,curr_sum);
        }
    return min_sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        int maxsubarray=kadanemax(nums,n);
        int minsubarray=kadanemin(nums,n);
        int circular=sum-minsubarray;
        if(maxsubarray>0){
            return max(circular,maxsubarray);
        }
        return maxsubarray;
    }
};