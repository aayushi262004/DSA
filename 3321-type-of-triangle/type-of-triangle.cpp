class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1]<=nums[2])    return "none";
        set<int>stt(nums.begin(),nums.end());
        if(stt.size()==1)       return "equilateral";
        else if(stt.size()==2)  return "isosceles";
    return "scalene";
    }
};