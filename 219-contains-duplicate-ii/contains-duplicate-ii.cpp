class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=0;
        unordered_set<int>stt;
        while(right<n){
            if(abs(right-left)>k){
                stt.erase(nums[left]);
                left++;
            }
            if(stt.find(nums[right])!=stt.end()){
                return true;
            }
            stt.insert(nums[right]);
            right++;
        }
    return false;
    }
};