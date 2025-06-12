class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int diff;
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++){
                 diff=abs(nums[i]-nums[i+1]);
                 maxi=max(maxi,diff);
        }
        int val=abs(nums[0]-nums[n-1]);
        if(val>maxi){
            maxi=val;
        }
    return maxi;
    }
};