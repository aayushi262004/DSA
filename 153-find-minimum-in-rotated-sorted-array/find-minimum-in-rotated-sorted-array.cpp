class Solution {
public:
    int findMin(vector<int>& nums) {
        int target=*min_element(nums.begin(),nums.end());
        
    return target;
    }
};