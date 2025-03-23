class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int num:nums){
            freq[num]++;
        }
        for(auto &pair:freq){
            if(pair.second==1)    return pair.first;
        }
    return nums[0];
    }
};