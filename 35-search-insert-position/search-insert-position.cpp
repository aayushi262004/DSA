class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)   return mid;
            else if(nums[mid]<target) low+=1;
            else    high-=1;
        }
        return low;
    }
};