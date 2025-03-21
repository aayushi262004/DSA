//brute force solution
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int>arr(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                arr[cnt++]=nums[i];
            }
        }
        return arr;
    }
};

//after removing space complexity
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
       int cnt=0;
       for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[cnt++],nums[i]);
        }
       }
               return nums;
    }
};
