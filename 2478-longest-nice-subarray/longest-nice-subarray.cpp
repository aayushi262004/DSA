class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int res=0;

        for(int i=0;i<n;i++){
           int  j=i,bitwise_or=0;
            while(j<n && (bitwise_or&nums[j])==0){
                bitwise_or|=nums[j];
                j++;
            }
        res=max(res,j-i);
        }
    return res;
    }
};