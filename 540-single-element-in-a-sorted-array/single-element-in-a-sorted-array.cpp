class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int low = 0, high = nums.size() - 1;
        while(low < high){
            int mid = (low + high)/2;
           if(mid%2 ==0 && nums[mid] != nums[mid+1]){
            high = mid;
           }else if(mid%2 ==0 && nums[mid] == nums[mid+1]){
            low = mid+1;
           }else if(mid%2 != 0 && nums[mid] != nums[mid-1]){
            high = mid;
           }else{
            low = mid+1;
           }
        }
        return nums[low];
    }
};