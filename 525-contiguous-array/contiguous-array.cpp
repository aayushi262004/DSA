class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum =0;
        unordered_map<int,int>mpp;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)  sum-=1;
            else            sum+=1;
            if(sum==0)      ans=i+1;
            else{
                if(mpp.find(sum)==mpp.end()){
                    mpp[sum]=i;
                }else{
                    ans=max(ans,i-mpp[sum]);
                }
            }
        }
        return ans;
    }
};