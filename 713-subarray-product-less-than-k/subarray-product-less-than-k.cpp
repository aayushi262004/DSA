class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int n=nums.size();
        int left=0;
        int cnt=0;
        int val=1;
        for(int right=0;right<n;right++){
            val*=nums[right];
            while(val>=k){
                val=val/nums[left];
                left++;
            }
            cnt+=right-left+1;
        }
    return cnt;
    }
};