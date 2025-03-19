class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n-2;i++){
             if(nums[i]==0){ int j=i;
             cnt++;
            for(int j=i;j<i+3;j++){
               if(nums[j]==0)   nums[j]=1;
               else             nums[j]=0;
                }
            }else   continue;
        }
        for(int c:nums){
            if(c==0) return -1; 
        }
    return cnt;
    }
};