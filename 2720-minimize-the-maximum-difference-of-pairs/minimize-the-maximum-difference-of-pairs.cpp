class Solution {
public:
    bool isValid(vector<int> &nums,int mid ,int p){
        int i=0;
        int n=nums.size();
        int count=0;
        while(i<n-1){
            if(nums[i+1]-nums[i]<=mid){
                count++;
                i+=2;
            }else{
                i++;
            }
       
        }
     return count>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;int high=nums[n-1]-nums[0];
        int res=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isValid(nums,mid,p)){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
    return res;
    }
};