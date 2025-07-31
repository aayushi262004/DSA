class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int idx=0;
      for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[idx]){
            nums[++idx]=nums[i];
        }
      } 
      return idx+1; 
    }
};