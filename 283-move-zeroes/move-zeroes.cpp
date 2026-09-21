class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zero_p =0;
        for(int i =0;i<n;i++){
            if(nums[i] !=0){
                swap(nums[zero_p], nums[i]);
                zero_p++;
            }
        }
    
    }
};