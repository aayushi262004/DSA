class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left =0;
        long currsum =0;
        int res = 0;
        for(int right =0;right<n;right++){
            int target = nums[right];
            currsum+=nums[right];
            long long windowsum = 1LL*target*(right-left+1);
            long ops = windowsum-currsum;
            while(1LL*target*(right-left+1)-currsum>k){
                currsum-=nums[left];
                
                left++;
            }
            res = max(res,right-left+1);
        }
    return res;    
    }
};