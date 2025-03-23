class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int maxlen=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)  cnt++;
            else {
            maxlen=max(cnt,maxlen);
            cnt=0;
        }
         maxlen=max(cnt,maxlen);
        }
        return maxlen;
    }
};