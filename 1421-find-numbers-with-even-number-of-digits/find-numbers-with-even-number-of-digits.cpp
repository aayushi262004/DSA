class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            string val=to_string(nums[i]);
            int size=val.size();
            if(size%2==0) cnt++;
        }
        return cnt;
    }
};