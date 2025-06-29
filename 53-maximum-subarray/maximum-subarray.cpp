class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int max_sum=INT_MIN;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
             max_sum=max(sum,max_sum);
            if(sum<=0){
                sum=0;
            }
           
        }
    return max_sum;
    }
};