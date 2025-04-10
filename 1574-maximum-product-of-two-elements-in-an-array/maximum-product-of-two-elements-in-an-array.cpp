class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int val=0;
            for(int j=i+1;j<n;j++){
                val=((nums[i]-1)*(nums[j]-1));
                maxi=max(maxi,val);
            }
        }
    return maxi;
    }
};