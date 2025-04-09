class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        set<int>stt;
        bool flag=false;
        for(int i=0;i<n;i++){
            stt.insert(nums[i]);
            if(nums[i]<k)   return -1;
            if(nums[i]==k && flag==false) {
                 flag=true;
            }
        }
        int ans=stt.size();
        if(flag==true){
            return ans-1;
        }
        return ans;
    }
};