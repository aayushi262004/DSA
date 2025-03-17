class Solution {
public:
    bool divideArray(vector<int>& nums) {
      unordered_map<int,int>mpp;
      for(int c: nums){
        mpp[c]++;
      } 
      for(const auto &[_,cnt]:mpp){
        if(cnt%2!=0) return false;
      }
      return true; 
    }
};