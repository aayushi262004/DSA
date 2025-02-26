class Solution {
    int maxi=INT_MIN;
    int max_subarray(vector<int> &nums,int &n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
   int min_subarray(vector<int> &nums,int &n){
    int sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]*-1);
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int val1=max_subarray(nums,n);
        int val2=min_subarray(nums,n);
        int res=max(val1,val2);
        return res;
    }
};