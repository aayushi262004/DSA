class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int c:nums){
            if(c>maxi){
                maxi=c;
            }
        }
        int left=0;
        int right=0;
        int cnt=0;
        long long val=0;
        while(right<n){
            if(nums[right]==maxi){
                cnt++;
            }
            while(cnt>=k){
                val+=n-right;
                if(nums[left]==maxi)    cnt--;
                left++;
            }
        right++;
    }
    return val;     
    }
};