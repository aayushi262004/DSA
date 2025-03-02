
//brute force approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            int val= nums[i];
            for(int j=0;j<n;j++){
                if(val==nums[j]){
                    cnt++;
                }
            }
            if(cnt<2){
                ans= val;
            }
        }
        return ans;
    }
};
//optimal approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int ans = 0;
      for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
      }
      return ans;
    }
};
