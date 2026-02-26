class Solution {
public:
    int max_cnt_subarray(vector<int>&nums,int k){
        int left=0;
        int n=nums.size();
        unordered_map<int,int>mpp;
        int cnt=0;
        for(int right=0;right<n;right++){
            mpp[nums[right]]++;
            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0)
                    mpp.erase(nums[left]);
            
            left++;
            }
        
     cnt+=right-left+1;
        } 
     return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return max_cnt_subarray(nums,k)-max_cnt_subarray(nums,k-1);
    }
};